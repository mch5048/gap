// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: link.proto

#ifndef PROTOBUF_link_2eproto__INCLUDED
#define PROTOBUF_link_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "inertial.pb.h"
#include "collision.pb.h"
#include "visual.pb.h"
#include "sensor.pb.h"
#include "projector.pb.h"
#include "pose.pb.h"
#include "battery.pb.h"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_link_2eproto();
void protobuf_AssignDesc_link_2eproto();
void protobuf_ShutdownFile_link_2eproto();

class Link;

// ===================================================================

class Link : public ::google::protobuf::Message {
 public:
  Link();
  virtual ~Link();

  Link(const Link& from);

  inline Link& operator=(const Link& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Link& default_instance();

  void Swap(Link* other);

  // implements Message ----------------------------------------------

  Link* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Link& from);
  void MergeFrom(const Link& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional bool self_collide = 3;
  inline bool has_self_collide() const;
  inline void clear_self_collide();
  static const int kSelfCollideFieldNumber = 3;
  inline bool self_collide() const;
  inline void set_self_collide(bool value);

  // optional bool gravity = 4;
  inline bool has_gravity() const;
  inline void clear_gravity();
  static const int kGravityFieldNumber = 4;
  inline bool gravity() const;
  inline void set_gravity(bool value);

  // optional bool kinematic = 5;
  inline bool has_kinematic() const;
  inline void clear_kinematic();
  static const int kKinematicFieldNumber = 5;
  inline bool kinematic() const;
  inline void set_kinematic(bool value);

  // optional bool enabled = 6;
  inline bool has_enabled() const;
  inline void clear_enabled();
  static const int kEnabledFieldNumber = 6;
  inline bool enabled() const;
  inline void set_enabled(bool value);

  // optional .gazebo.msgs.Inertial inertial = 7;
  inline bool has_inertial() const;
  inline void clear_inertial();
  static const int kInertialFieldNumber = 7;
  inline const ::gazebo::msgs::Inertial& inertial() const;
  inline ::gazebo::msgs::Inertial* mutable_inertial();
  inline ::gazebo::msgs::Inertial* release_inertial();
  inline void set_allocated_inertial(::gazebo::msgs::Inertial* inertial);

  // optional .gazebo.msgs.Pose pose = 8;
  inline bool has_pose() const;
  inline void clear_pose();
  static const int kPoseFieldNumber = 8;
  inline const ::gazebo::msgs::Pose& pose() const;
  inline ::gazebo::msgs::Pose* mutable_pose();
  inline ::gazebo::msgs::Pose* release_pose();
  inline void set_allocated_pose(::gazebo::msgs::Pose* pose);

  // repeated .gazebo.msgs.Visual visual = 9;
  inline int visual_size() const;
  inline void clear_visual();
  static const int kVisualFieldNumber = 9;
  inline const ::gazebo::msgs::Visual& visual(int index) const;
  inline ::gazebo::msgs::Visual* mutable_visual(int index);
  inline ::gazebo::msgs::Visual* add_visual();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Visual >&
      visual() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Visual >*
      mutable_visual();

  // repeated .gazebo.msgs.Collision collision = 10;
  inline int collision_size() const;
  inline void clear_collision();
  static const int kCollisionFieldNumber = 10;
  inline const ::gazebo::msgs::Collision& collision(int index) const;
  inline ::gazebo::msgs::Collision* mutable_collision(int index);
  inline ::gazebo::msgs::Collision* add_collision();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Collision >&
      collision() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Collision >*
      mutable_collision();

  // repeated .gazebo.msgs.Sensor sensor = 11;
  inline int sensor_size() const;
  inline void clear_sensor();
  static const int kSensorFieldNumber = 11;
  inline const ::gazebo::msgs::Sensor& sensor(int index) const;
  inline ::gazebo::msgs::Sensor* mutable_sensor(int index);
  inline ::gazebo::msgs::Sensor* add_sensor();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Sensor >&
      sensor() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Sensor >*
      mutable_sensor();

  // repeated .gazebo.msgs.Projector projector = 12;
  inline int projector_size() const;
  inline void clear_projector();
  static const int kProjectorFieldNumber = 12;
  inline const ::gazebo::msgs::Projector& projector(int index) const;
  inline ::gazebo::msgs::Projector* mutable_projector(int index);
  inline ::gazebo::msgs::Projector* add_projector();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Projector >&
      projector() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Projector >*
      mutable_projector();

  // optional bool canonical = 13;
  inline bool has_canonical() const;
  inline void clear_canonical();
  static const int kCanonicalFieldNumber = 13;
  inline bool canonical() const;
  inline void set_canonical(bool value);

  // repeated .gazebo.msgs.Battery battery = 14;
  inline int battery_size() const;
  inline void clear_battery();
  static const int kBatteryFieldNumber = 14;
  inline const ::gazebo::msgs::Battery& battery(int index) const;
  inline ::gazebo::msgs::Battery* mutable_battery(int index);
  inline ::gazebo::msgs::Battery* add_battery();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Battery >&
      battery() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Battery >*
      mutable_battery();

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Link)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_self_collide();
  inline void clear_has_self_collide();
  inline void set_has_gravity();
  inline void clear_has_gravity();
  inline void set_has_kinematic();
  inline void clear_has_kinematic();
  inline void set_has_enabled();
  inline void clear_has_enabled();
  inline void set_has_inertial();
  inline void clear_has_inertial();
  inline void set_has_pose();
  inline void clear_has_pose();
  inline void set_has_canonical();
  inline void clear_has_canonical();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::google::protobuf::uint32 id_;
  bool self_collide_;
  bool gravity_;
  bool kinematic_;
  bool enabled_;
  ::gazebo::msgs::Inertial* inertial_;
  ::gazebo::msgs::Pose* pose_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Visual > visual_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Collision > collision_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Sensor > sensor_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Projector > projector_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Battery > battery_;
  bool canonical_;
  friend void  protobuf_AddDesc_link_2eproto();
  friend void protobuf_AssignDesc_link_2eproto();
  friend void protobuf_ShutdownFile_link_2eproto();

  void InitAsDefaultInstance();
  static Link* default_instance_;
};
// ===================================================================


// ===================================================================

// Link

// optional uint32 id = 1;
inline bool Link::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Link::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Link::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Link::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Link::id() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Link.id)
  return id_;
}
inline void Link::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Link.id)
}

// required string name = 2;
inline bool Link::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Link::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Link::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Link::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Link::name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Link.name)
  return *name_;
}
inline void Link::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Link.name)
}
inline void Link::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Link.name)
}
inline void Link::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Link.name)
}
inline ::std::string* Link::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Link.name)
  return name_;
}
inline ::std::string* Link::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Link::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Link.name)
}

// optional bool self_collide = 3;
inline bool Link::has_self_collide() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Link::set_has_self_collide() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Link::clear_has_self_collide() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Link::clear_self_collide() {
  self_collide_ = false;
  clear_has_self_collide();
}
inline bool Link::self_collide() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Link.self_collide)
  return self_collide_;
}
inline void Link::set_self_collide(bool value) {
  set_has_self_collide();
  self_collide_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Link.self_collide)
}

// optional bool gravity = 4;
inline bool Link::has_gravity() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Link::set_has_gravity() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Link::clear_has_gravity() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Link::clear_gravity() {
  gravity_ = false;
  clear_has_gravity();
}
inline bool Link::gravity() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Link.gravity)
  return gravity_;
}
inline void Link::set_gravity(bool value) {
  set_has_gravity();
  gravity_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Link.gravity)
}

// optional bool kinematic = 5;
inline bool Link::has_kinematic() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Link::set_has_kinematic() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Link::clear_has_kinematic() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Link::clear_kinematic() {
  kinematic_ = false;
  clear_has_kinematic();
}
inline bool Link::kinematic() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Link.kinematic)
  return kinematic_;
}
inline void Link::set_kinematic(bool value) {
  set_has_kinematic();
  kinematic_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Link.kinematic)
}

// optional bool enabled = 6;
inline bool Link::has_enabled() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Link::set_has_enabled() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Link::clear_has_enabled() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Link::clear_enabled() {
  enabled_ = false;
  clear_has_enabled();
}
inline bool Link::enabled() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Link.enabled)
  return enabled_;
}
inline void Link::set_enabled(bool value) {
  set_has_enabled();
  enabled_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Link.enabled)
}

// optional .gazebo.msgs.Inertial inertial = 7;
inline bool Link::has_inertial() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Link::set_has_inertial() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Link::clear_has_inertial() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Link::clear_inertial() {
  if (inertial_ != NULL) inertial_->::gazebo::msgs::Inertial::Clear();
  clear_has_inertial();
}
inline const ::gazebo::msgs::Inertial& Link::inertial() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Link.inertial)
  return inertial_ != NULL ? *inertial_ : *default_instance_->inertial_;
}
inline ::gazebo::msgs::Inertial* Link::mutable_inertial() {
  set_has_inertial();
  if (inertial_ == NULL) inertial_ = new ::gazebo::msgs::Inertial;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Link.inertial)
  return inertial_;
}
inline ::gazebo::msgs::Inertial* Link::release_inertial() {
  clear_has_inertial();
  ::gazebo::msgs::Inertial* temp = inertial_;
  inertial_ = NULL;
  return temp;
}
inline void Link::set_allocated_inertial(::gazebo::msgs::Inertial* inertial) {
  delete inertial_;
  inertial_ = inertial;
  if (inertial) {
    set_has_inertial();
  } else {
    clear_has_inertial();
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Link.inertial)
}

// optional .gazebo.msgs.Pose pose = 8;
inline bool Link::has_pose() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Link::set_has_pose() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Link::clear_has_pose() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Link::clear_pose() {
  if (pose_ != NULL) pose_->::gazebo::msgs::Pose::Clear();
  clear_has_pose();
}
inline const ::gazebo::msgs::Pose& Link::pose() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Link.pose)
  return pose_ != NULL ? *pose_ : *default_instance_->pose_;
}
inline ::gazebo::msgs::Pose* Link::mutable_pose() {
  set_has_pose();
  if (pose_ == NULL) pose_ = new ::gazebo::msgs::Pose;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Link.pose)
  return pose_;
}
inline ::gazebo::msgs::Pose* Link::release_pose() {
  clear_has_pose();
  ::gazebo::msgs::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline void Link::set_allocated_pose(::gazebo::msgs::Pose* pose) {
  delete pose_;
  pose_ = pose;
  if (pose) {
    set_has_pose();
  } else {
    clear_has_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Link.pose)
}

// repeated .gazebo.msgs.Visual visual = 9;
inline int Link::visual_size() const {
  return visual_.size();
}
inline void Link::clear_visual() {
  visual_.Clear();
}
inline const ::gazebo::msgs::Visual& Link::visual(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Link.visual)
  return visual_.Get(index);
}
inline ::gazebo::msgs::Visual* Link::mutable_visual(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Link.visual)
  return visual_.Mutable(index);
}
inline ::gazebo::msgs::Visual* Link::add_visual() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Link.visual)
  return visual_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Visual >&
Link::visual() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Link.visual)
  return visual_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Visual >*
Link::mutable_visual() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Link.visual)
  return &visual_;
}

// repeated .gazebo.msgs.Collision collision = 10;
inline int Link::collision_size() const {
  return collision_.size();
}
inline void Link::clear_collision() {
  collision_.Clear();
}
inline const ::gazebo::msgs::Collision& Link::collision(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Link.collision)
  return collision_.Get(index);
}
inline ::gazebo::msgs::Collision* Link::mutable_collision(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Link.collision)
  return collision_.Mutable(index);
}
inline ::gazebo::msgs::Collision* Link::add_collision() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Link.collision)
  return collision_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Collision >&
Link::collision() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Link.collision)
  return collision_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Collision >*
Link::mutable_collision() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Link.collision)
  return &collision_;
}

// repeated .gazebo.msgs.Sensor sensor = 11;
inline int Link::sensor_size() const {
  return sensor_.size();
}
inline void Link::clear_sensor() {
  sensor_.Clear();
}
inline const ::gazebo::msgs::Sensor& Link::sensor(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Link.sensor)
  return sensor_.Get(index);
}
inline ::gazebo::msgs::Sensor* Link::mutable_sensor(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Link.sensor)
  return sensor_.Mutable(index);
}
inline ::gazebo::msgs::Sensor* Link::add_sensor() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Link.sensor)
  return sensor_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Sensor >&
Link::sensor() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Link.sensor)
  return sensor_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Sensor >*
Link::mutable_sensor() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Link.sensor)
  return &sensor_;
}

// repeated .gazebo.msgs.Projector projector = 12;
inline int Link::projector_size() const {
  return projector_.size();
}
inline void Link::clear_projector() {
  projector_.Clear();
}
inline const ::gazebo::msgs::Projector& Link::projector(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Link.projector)
  return projector_.Get(index);
}
inline ::gazebo::msgs::Projector* Link::mutable_projector(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Link.projector)
  return projector_.Mutable(index);
}
inline ::gazebo::msgs::Projector* Link::add_projector() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Link.projector)
  return projector_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Projector >&
Link::projector() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Link.projector)
  return projector_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Projector >*
Link::mutable_projector() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Link.projector)
  return &projector_;
}

// optional bool canonical = 13;
inline bool Link::has_canonical() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void Link::set_has_canonical() {
  _has_bits_[0] |= 0x00001000u;
}
inline void Link::clear_has_canonical() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void Link::clear_canonical() {
  canonical_ = false;
  clear_has_canonical();
}
inline bool Link::canonical() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Link.canonical)
  return canonical_;
}
inline void Link::set_canonical(bool value) {
  set_has_canonical();
  canonical_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Link.canonical)
}

// repeated .gazebo.msgs.Battery battery = 14;
inline int Link::battery_size() const {
  return battery_.size();
}
inline void Link::clear_battery() {
  battery_.Clear();
}
inline const ::gazebo::msgs::Battery& Link::battery(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Link.battery)
  return battery_.Get(index);
}
inline ::gazebo::msgs::Battery* Link::mutable_battery(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Link.battery)
  return battery_.Mutable(index);
}
inline ::gazebo::msgs::Battery* Link::add_battery() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Link.battery)
  return battery_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Battery >&
Link::battery() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Link.battery)
  return battery_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Battery >*
Link::mutable_battery() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Link.battery)
  return &battery_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_link_2eproto__INCLUDED
