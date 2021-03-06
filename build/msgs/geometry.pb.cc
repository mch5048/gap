// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: geometry.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "geometry.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* Geometry_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Geometry_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Geometry_Type_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_geometry_2eproto() {
  protobuf_AddDesc_geometry_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "geometry.proto");
  GOOGLE_CHECK(file != NULL);
  Geometry_descriptor_ = file->message_type(0);
  static const int Geometry_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Geometry, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Geometry, box_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Geometry, cylinder_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Geometry, plane_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Geometry, sphere_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Geometry, image_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Geometry, heightmap_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Geometry, mesh_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Geometry, points_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Geometry, polyline_),
  };
  Geometry_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Geometry_descriptor_,
      Geometry::default_instance_,
      Geometry_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Geometry, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Geometry, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Geometry));
  Geometry_Type_descriptor_ = Geometry_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_geometry_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Geometry_descriptor_, &Geometry::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_geometry_2eproto() {
  delete Geometry::default_instance_;
  delete Geometry_reflection_;
}

void protobuf_AddDesc_geometry_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_boxgeom_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_cylindergeom_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_spheregeom_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_planegeom_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_imagegeom_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_heightmapgeom_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_meshgeom_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_vector3d_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_polylinegeom_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016geometry.proto\022\013gazebo.msgs\032\rboxgeom.p"
    "roto\032\022cylindergeom.proto\032\020spheregeom.pro"
    "to\032\017planegeom.proto\032\017imagegeom.proto\032\023he"
    "ightmapgeom.proto\032\016meshgeom.proto\032\016vecto"
    "r3d.proto\032\022polylinegeom.proto\"\265\004\n\010Geomet"
    "ry\022(\n\004type\030\001 \001(\0162\032.gazebo.msgs.Geometry."
    "Type\022!\n\003box\030\002 \001(\0132\024.gazebo.msgs.BoxGeom\022"
    "+\n\010cylinder\030\003 \001(\0132\031.gazebo.msgs.Cylinder"
    "Geom\022%\n\005plane\030\004 \001(\0132\026.gazebo.msgs.PlaneG"
    "eom\022\'\n\006sphere\030\005 \001(\0132\027.gazebo.msgs.Sphere"
    "Geom\022%\n\005image\030\006 \001(\0132\026.gazebo.msgs.ImageG"
    "eom\022-\n\theightmap\030\007 \001(\0132\032.gazebo.msgs.Hei"
    "ghtmapGeom\022#\n\004mesh\030\010 \001(\0132\025.gazebo.msgs.M"
    "eshGeom\022%\n\006points\030\t \003(\0132\025.gazebo.msgs.Ve"
    "ctor3d\022\'\n\010polyline\030\n \003(\0132\025.gazebo.msgs.P"
    "olyline\"\223\001\n\004Type\022\007\n\003BOX\020\001\022\014\n\010CYLINDER\020\002\022"
    "\n\n\006SPHERE\020\003\022\t\n\005PLANE\020\004\022\t\n\005IMAGE\020\005\022\r\n\tHEI"
    "GHTMAP\020\006\022\010\n\004MESH\020\007\022\020\n\014TRIANGLE_FAN\020\010\022\016\n\n"
    "LINE_STRIP\020\t\022\014\n\010POLYLINE\020\n\022\t\n\005EMPTY\020\013", 757);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "geometry.proto", &protobuf_RegisterTypes);
  Geometry::default_instance_ = new Geometry();
  Geometry::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_geometry_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_geometry_2eproto {
  StaticDescriptorInitializer_geometry_2eproto() {
    protobuf_AddDesc_geometry_2eproto();
  }
} static_descriptor_initializer_geometry_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Geometry_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Geometry_Type_descriptor_;
}
bool Geometry_Type_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Geometry_Type Geometry::BOX;
const Geometry_Type Geometry::CYLINDER;
const Geometry_Type Geometry::SPHERE;
const Geometry_Type Geometry::PLANE;
const Geometry_Type Geometry::IMAGE;
const Geometry_Type Geometry::HEIGHTMAP;
const Geometry_Type Geometry::MESH;
const Geometry_Type Geometry::TRIANGLE_FAN;
const Geometry_Type Geometry::LINE_STRIP;
const Geometry_Type Geometry::POLYLINE;
const Geometry_Type Geometry::EMPTY;
const Geometry_Type Geometry::Type_MIN;
const Geometry_Type Geometry::Type_MAX;
const int Geometry::Type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Geometry::kTypeFieldNumber;
const int Geometry::kBoxFieldNumber;
const int Geometry::kCylinderFieldNumber;
const int Geometry::kPlaneFieldNumber;
const int Geometry::kSphereFieldNumber;
const int Geometry::kImageFieldNumber;
const int Geometry::kHeightmapFieldNumber;
const int Geometry::kMeshFieldNumber;
const int Geometry::kPointsFieldNumber;
const int Geometry::kPolylineFieldNumber;
#endif  // !_MSC_VER

Geometry::Geometry()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Geometry)
}

void Geometry::InitAsDefaultInstance() {
  box_ = const_cast< ::gazebo::msgs::BoxGeom*>(&::gazebo::msgs::BoxGeom::default_instance());
  cylinder_ = const_cast< ::gazebo::msgs::CylinderGeom*>(&::gazebo::msgs::CylinderGeom::default_instance());
  plane_ = const_cast< ::gazebo::msgs::PlaneGeom*>(&::gazebo::msgs::PlaneGeom::default_instance());
  sphere_ = const_cast< ::gazebo::msgs::SphereGeom*>(&::gazebo::msgs::SphereGeom::default_instance());
  image_ = const_cast< ::gazebo::msgs::ImageGeom*>(&::gazebo::msgs::ImageGeom::default_instance());
  heightmap_ = const_cast< ::gazebo::msgs::HeightmapGeom*>(&::gazebo::msgs::HeightmapGeom::default_instance());
  mesh_ = const_cast< ::gazebo::msgs::MeshGeom*>(&::gazebo::msgs::MeshGeom::default_instance());
}

Geometry::Geometry(const Geometry& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Geometry)
}

void Geometry::SharedCtor() {
  _cached_size_ = 0;
  type_ = 1;
  box_ = NULL;
  cylinder_ = NULL;
  plane_ = NULL;
  sphere_ = NULL;
  image_ = NULL;
  heightmap_ = NULL;
  mesh_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Geometry::~Geometry() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Geometry)
  SharedDtor();
}

void Geometry::SharedDtor() {
  if (this != default_instance_) {
    delete box_;
    delete cylinder_;
    delete plane_;
    delete sphere_;
    delete image_;
    delete heightmap_;
    delete mesh_;
  }
}

void Geometry::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Geometry::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Geometry_descriptor_;
}

const Geometry& Geometry::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_geometry_2eproto();
  return *default_instance_;
}

Geometry* Geometry::default_instance_ = NULL;

Geometry* Geometry::New() const {
  return new Geometry;
}

void Geometry::Clear() {
  if (_has_bits_[0 / 32] & 255) {
    type_ = 1;
    if (has_box()) {
      if (box_ != NULL) box_->::gazebo::msgs::BoxGeom::Clear();
    }
    if (has_cylinder()) {
      if (cylinder_ != NULL) cylinder_->::gazebo::msgs::CylinderGeom::Clear();
    }
    if (has_plane()) {
      if (plane_ != NULL) plane_->::gazebo::msgs::PlaneGeom::Clear();
    }
    if (has_sphere()) {
      if (sphere_ != NULL) sphere_->::gazebo::msgs::SphereGeom::Clear();
    }
    if (has_image()) {
      if (image_ != NULL) image_->::gazebo::msgs::ImageGeom::Clear();
    }
    if (has_heightmap()) {
      if (heightmap_ != NULL) heightmap_->::gazebo::msgs::HeightmapGeom::Clear();
    }
    if (has_mesh()) {
      if (mesh_ != NULL) mesh_->::gazebo::msgs::MeshGeom::Clear();
    }
  }
  points_.Clear();
  polyline_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Geometry::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.Geometry)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .gazebo.msgs.Geometry.Type type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::gazebo::msgs::Geometry_Type_IsValid(value)) {
            set_type(static_cast< ::gazebo::msgs::Geometry_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_box;
        break;
      }

      // optional .gazebo.msgs.BoxGeom box = 2;
      case 2: {
        if (tag == 18) {
         parse_box:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_box()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_cylinder;
        break;
      }

      // optional .gazebo.msgs.CylinderGeom cylinder = 3;
      case 3: {
        if (tag == 26) {
         parse_cylinder:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cylinder()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_plane;
        break;
      }

      // optional .gazebo.msgs.PlaneGeom plane = 4;
      case 4: {
        if (tag == 34) {
         parse_plane:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_plane()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_sphere;
        break;
      }

      // optional .gazebo.msgs.SphereGeom sphere = 5;
      case 5: {
        if (tag == 42) {
         parse_sphere:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_sphere()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_image;
        break;
      }

      // optional .gazebo.msgs.ImageGeom image = 6;
      case 6: {
        if (tag == 50) {
         parse_image:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_image()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_heightmap;
        break;
      }

      // optional .gazebo.msgs.HeightmapGeom heightmap = 7;
      case 7: {
        if (tag == 58) {
         parse_heightmap:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_heightmap()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_mesh;
        break;
      }

      // optional .gazebo.msgs.MeshGeom mesh = 8;
      case 8: {
        if (tag == 66) {
         parse_mesh:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_mesh()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_points;
        break;
      }

      // repeated .gazebo.msgs.Vector3d points = 9;
      case 9: {
        if (tag == 74) {
         parse_points:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_points()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_points;
        if (input->ExpectTag(82)) goto parse_polyline;
        break;
      }

      // repeated .gazebo.msgs.Polyline polyline = 10;
      case 10: {
        if (tag == 82) {
         parse_polyline:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_polyline()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(82)) goto parse_polyline;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gazebo.msgs.Geometry)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.Geometry)
  return false;
#undef DO_
}

void Geometry::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.Geometry)
  // optional .gazebo.msgs.Geometry.Type type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional .gazebo.msgs.BoxGeom box = 2;
  if (has_box()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->box(), output);
  }

  // optional .gazebo.msgs.CylinderGeom cylinder = 3;
  if (has_cylinder()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->cylinder(), output);
  }

  // optional .gazebo.msgs.PlaneGeom plane = 4;
  if (has_plane()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->plane(), output);
  }

  // optional .gazebo.msgs.SphereGeom sphere = 5;
  if (has_sphere()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->sphere(), output);
  }

  // optional .gazebo.msgs.ImageGeom image = 6;
  if (has_image()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->image(), output);
  }

  // optional .gazebo.msgs.HeightmapGeom heightmap = 7;
  if (has_heightmap()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->heightmap(), output);
  }

  // optional .gazebo.msgs.MeshGeom mesh = 8;
  if (has_mesh()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->mesh(), output);
  }

  // repeated .gazebo.msgs.Vector3d points = 9;
  for (int i = 0; i < this->points_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->points(i), output);
  }

  // repeated .gazebo.msgs.Polyline polyline = 10;
  for (int i = 0; i < this->polyline_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->polyline(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.Geometry)
}

::google::protobuf::uint8* Geometry::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Geometry)
  // optional .gazebo.msgs.Geometry.Type type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional .gazebo.msgs.BoxGeom box = 2;
  if (has_box()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->box(), target);
  }

  // optional .gazebo.msgs.CylinderGeom cylinder = 3;
  if (has_cylinder()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->cylinder(), target);
  }

  // optional .gazebo.msgs.PlaneGeom plane = 4;
  if (has_plane()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->plane(), target);
  }

  // optional .gazebo.msgs.SphereGeom sphere = 5;
  if (has_sphere()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->sphere(), target);
  }

  // optional .gazebo.msgs.ImageGeom image = 6;
  if (has_image()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->image(), target);
  }

  // optional .gazebo.msgs.HeightmapGeom heightmap = 7;
  if (has_heightmap()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->heightmap(), target);
  }

  // optional .gazebo.msgs.MeshGeom mesh = 8;
  if (has_mesh()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        8, this->mesh(), target);
  }

  // repeated .gazebo.msgs.Vector3d points = 9;
  for (int i = 0; i < this->points_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        9, this->points(i), target);
  }

  // repeated .gazebo.msgs.Polyline polyline = 10;
  for (int i = 0; i < this->polyline_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        10, this->polyline(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Geometry)
  return target;
}

int Geometry::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .gazebo.msgs.Geometry.Type type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional .gazebo.msgs.BoxGeom box = 2;
    if (has_box()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->box());
    }

    // optional .gazebo.msgs.CylinderGeom cylinder = 3;
    if (has_cylinder()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cylinder());
    }

    // optional .gazebo.msgs.PlaneGeom plane = 4;
    if (has_plane()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->plane());
    }

    // optional .gazebo.msgs.SphereGeom sphere = 5;
    if (has_sphere()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->sphere());
    }

    // optional .gazebo.msgs.ImageGeom image = 6;
    if (has_image()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->image());
    }

    // optional .gazebo.msgs.HeightmapGeom heightmap = 7;
    if (has_heightmap()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->heightmap());
    }

    // optional .gazebo.msgs.MeshGeom mesh = 8;
    if (has_mesh()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->mesh());
    }

  }
  // repeated .gazebo.msgs.Vector3d points = 9;
  total_size += 1 * this->points_size();
  for (int i = 0; i < this->points_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->points(i));
  }

  // repeated .gazebo.msgs.Polyline polyline = 10;
  total_size += 1 * this->polyline_size();
  for (int i = 0; i < this->polyline_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->polyline(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Geometry::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Geometry* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Geometry*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Geometry::MergeFrom(const Geometry& from) {
  GOOGLE_CHECK_NE(&from, this);
  points_.MergeFrom(from.points_);
  polyline_.MergeFrom(from.polyline_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_box()) {
      mutable_box()->::gazebo::msgs::BoxGeom::MergeFrom(from.box());
    }
    if (from.has_cylinder()) {
      mutable_cylinder()->::gazebo::msgs::CylinderGeom::MergeFrom(from.cylinder());
    }
    if (from.has_plane()) {
      mutable_plane()->::gazebo::msgs::PlaneGeom::MergeFrom(from.plane());
    }
    if (from.has_sphere()) {
      mutable_sphere()->::gazebo::msgs::SphereGeom::MergeFrom(from.sphere());
    }
    if (from.has_image()) {
      mutable_image()->::gazebo::msgs::ImageGeom::MergeFrom(from.image());
    }
    if (from.has_heightmap()) {
      mutable_heightmap()->::gazebo::msgs::HeightmapGeom::MergeFrom(from.heightmap());
    }
    if (from.has_mesh()) {
      mutable_mesh()->::gazebo::msgs::MeshGeom::MergeFrom(from.mesh());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Geometry::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Geometry::CopyFrom(const Geometry& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Geometry::IsInitialized() const {

  if (has_box()) {
    if (!this->box().IsInitialized()) return false;
  }
  if (has_cylinder()) {
    if (!this->cylinder().IsInitialized()) return false;
  }
  if (has_plane()) {
    if (!this->plane().IsInitialized()) return false;
  }
  if (has_sphere()) {
    if (!this->sphere().IsInitialized()) return false;
  }
  if (has_image()) {
    if (!this->image().IsInitialized()) return false;
  }
  if (has_heightmap()) {
    if (!this->heightmap().IsInitialized()) return false;
  }
  if (has_mesh()) {
    if (!this->mesh().IsInitialized()) return false;
  }
  if (!::google::protobuf::internal::AllAreInitialized(this->points())) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->polyline())) return false;
  return true;
}

void Geometry::Swap(Geometry* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(box_, other->box_);
    std::swap(cylinder_, other->cylinder_);
    std::swap(plane_, other->plane_);
    std::swap(sphere_, other->sphere_);
    std::swap(image_, other->image_);
    std::swap(heightmap_, other->heightmap_);
    std::swap(mesh_, other->mesh_);
    points_.Swap(&other->points_);
    polyline_.Swap(&other->polyline_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Geometry::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Geometry_descriptor_;
  metadata.reflection = Geometry_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
