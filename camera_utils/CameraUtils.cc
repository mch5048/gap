/// \file camera_utils/CameraUtils.cc
/// \brief Camera Utils plugin implementation
///
/// A custom gazebo plugin that provides an interface to programatically collect
/// data from cameras at specific times.
///
/// \author João Borrego

#include "CameraUtils.hh"

namespace gazebo {


/// \brief Class for private camera utils plugin data.
class CameraUtilsPrivate
{
    /// \brief Gazebo transport node 
    public: transport::NodePtr node;
    /// \brief Camera utils topic subscriber 
    public: transport::SubscriberPtr sub;
    /// \brief Camera utils topic publisher 
    public: transport::PublisherPtr pub;

    /// \brief TODO Buffer of image raw data
    public: std::vector<std::string> buffer;
    /// \brief Mutex for safe data access
    public: std::mutex mutex;
};

/// Register this plugin with the simulator 
GZ_REGISTER_SENSOR_PLUGIN(CameraUtils)

/////////////////////////////////////////////////
CameraUtils::CameraUtils()
    : SensorPlugin(), dataPtr(new CameraUtilsPrivate)
{
    gzmsg << "[CameraUtils] Loaded camera tools." << std::endl;
}

/////////////////////////////////////////////////
CameraUtils::~CameraUtils()
{
    this->newFrameConnection.reset();
    this->parentSensor.reset();
    this->camera.reset();
    this->dataPtr->sub.reset();
    this->dataPtr->node->Fini();
    gzmsg << "[CameraUtils] Unloaded camera tools." << std::endl;
}

/////////////////////////////////////////////////
void CameraUtils::Load(sensors::SensorPtr _sensor, sdf::ElementPtr _sdf)
{

    // Check if a parent sensor is provided 
    if (!_sensor)
        gzerr << "[CameraUtils] Invalid sensor pointer." << std::endl;

    // Camera sensor 
    this->parentSensor = std::dynamic_pointer_cast<sensors::CameraSensor>(_sensor);
    this->camera = this->parentSensor->Camera();
    this->width = this->camera->ImageWidth();
    this->height = this->camera->ImageHeight();
    this->depth = this->camera->ImageDepth();
    this->format = this->camera->ImageFormat();

    // Plugin parameters 

    if (_sdf->HasElement("output_dir")) {
        this->output_dir = _sdf->Get<std::string>("output_dir");
    } else {
        this->output_dir = DEFAULT_OUTPUT_DIR;
    }
    if (_sdf->HasElement("extension")) {
        this->extension = _sdf->Get<std::string>("extension");
    } else {
        this->extension = DEFAULT_EXTENSION;
    }

    // Subscriber setup 
    this->dataPtr->node = transport::NodePtr(new transport::Node());
    this->dataPtr->node->Init();

    // Subcribe to the topic 
    this->dataPtr->sub = this->dataPtr->node->Subscribe(REQUEST_TOPIC,
        &CameraUtils::onRequest, this);
    // Setup publisher for the reply topic 
    this->dataPtr->pub = this->dataPtr->node->
        Advertise<camera_utils::msgs::CameraUtilsResponse>(RESPONSE_TOPIC);

    // Create output directory 
    boost::filesystem::path dir(output_dir);
    boost::filesystem::create_directories(dir);

    this->newFrameConnection = this->camera->ConnectNewImageFrame(
        std::bind(&CameraUtils::OnNewFrame, this,
        std::placeholders::_1, std::placeholders::_2, std::placeholders::_3,
        std::placeholders::_4, std::placeholders::_5));

    this->parentSensor->SetActive(true);
}

/////////////////////////////////////////////////
void CameraUtils::onRequest(CameraUtilsRequestPtr &_msg)
{
    std::string file_name;

    if (_msg->type() == CAPTURE_REQUEST) 
    {
        std::lock_guard<std::mutex> lock(this->dataPtr->mutex);

        if (_msg->has_file_name()) {
            file_name = _msg->file_name() + extension;
        } else {
            file_name = std::to_string(saved_counter++) + extension;
        }

        this->next_file_name = output_dir + file_name;
        this->save_on_update = true;
        gzmsg << "[CameraUtils] Requested save frame as " << next_file_name << std::endl;
    }
    else if (_msg->type() == DIR_REQUEST)
    {
        // TODO
    }
    else if (_msg->type() == PROJECTION_REQUEST)
    {
        camera_utils::msgs::CameraUtilsResponse msg;
        msg.set_type(PROJECTION_RESPONSE);

        ignition::math::Pose3d pose(this->camera->WorldPose());
        msgs::Pose *pose_ptr = new msgs::Pose();
        msgs::Set(pose_ptr, pose);
        msg.set_allocated_pose(pose_ptr);

        // For each PointProjection message 
        for (int i = 0; i < _msg->projections_size(); i++) {
            
            camera_utils::msgs::PointProjection* proj = msg.add_projections();
            if (_msg->projections(i).has_name())
                proj->set_name(_msg->projections(i).name());
            
            // For each 3D point in the set
            for (int j = 0; j < _msg->projections(i).point3_size(); j++) {
                ignition::math::Vector3d point3 = gazebo::msgs::ConvertIgn(
                    _msg->projections(i).point3(j));
                ignition::math::Vector2i point2 = this->camera->Project(point3);
                gazebo::msgs::Vector2d *vector2 = proj->add_point2();
                vector2->set_x(point2.X());
                vector2->set_y(point2.Y());
            }
        }
        this->dataPtr->pub->Publish(msg);
    }
    else if (_msg->type() == MOVE_REQUEST)
    {
    	camera_utils::msgs::CameraUtilsResponse msg;
        msg.set_type(MOVE_RESPONSE);

        ignition::math::Pose3d pose = msgs::ConvertIgn(_msg->pose());
        this->camera->SetWorldPose(pose);
        this->dataPtr->pub->Publish(msg);
    }
}

/////////////////////////////////////////////////
void CameraUtils::OnNewFrame(
    const unsigned char * _image,
    unsigned int _width,
    unsigned int _height,
    unsigned int _depth,
    const std::string & _format)
{
    std::lock_guard<std::mutex> lock(this->dataPtr->mutex);

    if (save_on_update)
    {
        bool success = this->camera->SaveFrame(next_file_name);
        if (! success) {
            gzwarn << "[CameraUtils] could not save frame as " << next_file_name << std::endl;
        }

        camera_utils::msgs::CameraUtilsResponse msg;
        msg.set_success(success);
        msg.set_type(CAPTURE_RESPONSE);
        msg.set_filename(next_file_name);
        this->dataPtr->pub->Publish(msg);
        
        gzmsg << "[CameraUtils] Saved frame as " << next_file_name << std::endl;
        save_on_update = false;
    }
}

}
