// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: any.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "any.pb.h"

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

const ::google::protobuf::Descriptor* Any_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Any_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Any_ValueType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_any_2eproto() {
  protobuf_AddDesc_any_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "any.proto");
  GOOGLE_CHECK(file != NULL);
  Any_descriptor_ = file->message_type(0);
  static const int Any_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, double_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, int_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, string_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, bool_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, vector3d_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, color_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, pose3d_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, quaternion_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, time_value_),
  };
  Any_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Any_descriptor_,
      Any::default_instance_,
      Any_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Any));
  Any_ValueType_descriptor_ = Any_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_any_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Any_descriptor_, &Any::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_any_2eproto() {
  delete Any::default_instance_;
  delete Any_reflection_;
}

void protobuf_AddDesc_any_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_color_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_pose_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_quaternion_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_time_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_vector3d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\tany.proto\022\013gazebo.msgs\032\013color.proto\032\np"
    "ose.proto\032\020quaternion.proto\032\ntime.proto\032"
    "\016vector3d.proto\"\353\003\n\003Any\022.\n\004type\030\001 \002(\0162\032."
    "gazebo.msgs.Any.ValueType:\004NONE\022\024\n\014doubl"
    "e_value\030\002 \001(\001\022\021\n\tint_value\030\003 \001(\005\022\024\n\014stri"
    "ng_value\030\004 \001(\t\022\022\n\nbool_value\030\005 \001(\010\022-\n\016ve"
    "ctor3d_value\030\006 \001(\0132\025.gazebo.msgs.Vector3"
    "d\022\'\n\013color_value\030\007 \001(\0132\022.gazebo.msgs.Col"
    "or\022\'\n\014pose3d_value\030\010 \001(\0132\021.gazebo.msgs.P"
    "ose\0221\n\020quaternion_value\030\t \001(\0132\027.gazebo.m"
    "sgs.Quaternion\022%\n\ntime_value\030\n \001(\0132\021.gaz"
    "ebo.msgs.Time\"\205\001\n\tValueType\022\010\n\004NONE\020\001\022\n\n"
    "\006DOUBLE\020\002\022\t\n\005INT32\020\003\022\n\n\006STRING\020\004\022\013\n\007BOOL"
    "EAN\020\005\022\014\n\010VECTOR3D\020\006\022\t\n\005COLOR\020\007\022\n\n\006POSE3D"
    "\020\010\022\017\n\013QUATERNIOND\020\t\022\010\n\004TIME\020\n", 589);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "any.proto", &protobuf_RegisterTypes);
  Any::default_instance_ = new Any();
  Any::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_any_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_any_2eproto {
  StaticDescriptorInitializer_any_2eproto() {
    protobuf_AddDesc_any_2eproto();
  }
} static_descriptor_initializer_any_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Any_ValueType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Any_ValueType_descriptor_;
}
bool Any_ValueType_IsValid(int value) {
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
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Any_ValueType Any::NONE;
const Any_ValueType Any::DOUBLE;
const Any_ValueType Any::INT32;
const Any_ValueType Any::STRING;
const Any_ValueType Any::BOOLEAN;
const Any_ValueType Any::VECTOR3D;
const Any_ValueType Any::COLOR;
const Any_ValueType Any::POSE3D;
const Any_ValueType Any::QUATERNIOND;
const Any_ValueType Any::TIME;
const Any_ValueType Any::ValueType_MIN;
const Any_ValueType Any::ValueType_MAX;
const int Any::ValueType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Any::kTypeFieldNumber;
const int Any::kDoubleValueFieldNumber;
const int Any::kIntValueFieldNumber;
const int Any::kStringValueFieldNumber;
const int Any::kBoolValueFieldNumber;
const int Any::kVector3DValueFieldNumber;
const int Any::kColorValueFieldNumber;
const int Any::kPose3DValueFieldNumber;
const int Any::kQuaternionValueFieldNumber;
const int Any::kTimeValueFieldNumber;
#endif  // !_MSC_VER

Any::Any()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Any)
}

void Any::InitAsDefaultInstance() {
  vector3d_value_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
  color_value_ = const_cast< ::gazebo::msgs::Color*>(&::gazebo::msgs::Color::default_instance());
  pose3d_value_ = const_cast< ::gazebo::msgs::Pose*>(&::gazebo::msgs::Pose::default_instance());
  quaternion_value_ = const_cast< ::gazebo::msgs::Quaternion*>(&::gazebo::msgs::Quaternion::default_instance());
  time_value_ = const_cast< ::gazebo::msgs::Time*>(&::gazebo::msgs::Time::default_instance());
}

Any::Any(const Any& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Any)
}

void Any::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_ = 1;
  double_value_ = 0;
  int_value_ = 0;
  string_value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bool_value_ = false;
  vector3d_value_ = NULL;
  color_value_ = NULL;
  pose3d_value_ = NULL;
  quaternion_value_ = NULL;
  time_value_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Any::~Any() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Any)
  SharedDtor();
}

void Any::SharedDtor() {
  if (string_value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete string_value_;
  }
  if (this != default_instance_) {
    delete vector3d_value_;
    delete color_value_;
    delete pose3d_value_;
    delete quaternion_value_;
    delete time_value_;
  }
}

void Any::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Any::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Any_descriptor_;
}

const Any& Any::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_any_2eproto();
  return *default_instance_;
}

Any* Any::default_instance_ = NULL;

Any* Any::New() const {
  return new Any;
}

void Any::Clear() {
  if (_has_bits_[0 / 32] & 255) {
    type_ = 1;
    double_value_ = 0;
    int_value_ = 0;
    if (has_string_value()) {
      if (string_value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        string_value_->clear();
      }
    }
    bool_value_ = false;
    if (has_vector3d_value()) {
      if (vector3d_value_ != NULL) vector3d_value_->::gazebo::msgs::Vector3d::Clear();
    }
    if (has_color_value()) {
      if (color_value_ != NULL) color_value_->::gazebo::msgs::Color::Clear();
    }
    if (has_pose3d_value()) {
      if (pose3d_value_ != NULL) pose3d_value_->::gazebo::msgs::Pose::Clear();
    }
  }
  if (_has_bits_[8 / 32] & 768) {
    if (has_quaternion_value()) {
      if (quaternion_value_ != NULL) quaternion_value_->::gazebo::msgs::Quaternion::Clear();
    }
    if (has_time_value()) {
      if (time_value_ != NULL) time_value_->::gazebo::msgs::Time::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Any::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.Any)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gazebo.msgs.Any.ValueType type = 1 [default = NONE];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::gazebo::msgs::Any_ValueType_IsValid(value)) {
            set_type(static_cast< ::gazebo::msgs::Any_ValueType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_double_value;
        break;
      }

      // optional double double_value = 2;
      case 2: {
        if (tag == 17) {
         parse_double_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &double_value_)));
          set_has_double_value();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_int_value;
        break;
      }

      // optional int32 int_value = 3;
      case 3: {
        if (tag == 24) {
         parse_int_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &int_value_)));
          set_has_int_value();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_string_value;
        break;
      }

      // optional string string_value = 4;
      case 4: {
        if (tag == 34) {
         parse_string_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_string_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->string_value().data(), this->string_value().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "string_value");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_bool_value;
        break;
      }

      // optional bool bool_value = 5;
      case 5: {
        if (tag == 40) {
         parse_bool_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bool_value_)));
          set_has_bool_value();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_vector3d_value;
        break;
      }

      // optional .gazebo.msgs.Vector3d vector3d_value = 6;
      case 6: {
        if (tag == 50) {
         parse_vector3d_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_vector3d_value()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_color_value;
        break;
      }

      // optional .gazebo.msgs.Color color_value = 7;
      case 7: {
        if (tag == 58) {
         parse_color_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_color_value()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_pose3d_value;
        break;
      }

      // optional .gazebo.msgs.Pose pose3d_value = 8;
      case 8: {
        if (tag == 66) {
         parse_pose3d_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pose3d_value()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_quaternion_value;
        break;
      }

      // optional .gazebo.msgs.Quaternion quaternion_value = 9;
      case 9: {
        if (tag == 74) {
         parse_quaternion_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_quaternion_value()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(82)) goto parse_time_value;
        break;
      }

      // optional .gazebo.msgs.Time time_value = 10;
      case 10: {
        if (tag == 82) {
         parse_time_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_time_value()));
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.Any)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.Any)
  return false;
#undef DO_
}

void Any::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.Any)
  // required .gazebo.msgs.Any.ValueType type = 1 [default = NONE];
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional double double_value = 2;
  if (has_double_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->double_value(), output);
  }

  // optional int32 int_value = 3;
  if (has_int_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->int_value(), output);
  }

  // optional string string_value = 4;
  if (has_string_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->string_value().data(), this->string_value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "string_value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->string_value(), output);
  }

  // optional bool bool_value = 5;
  if (has_bool_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->bool_value(), output);
  }

  // optional .gazebo.msgs.Vector3d vector3d_value = 6;
  if (has_vector3d_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->vector3d_value(), output);
  }

  // optional .gazebo.msgs.Color color_value = 7;
  if (has_color_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->color_value(), output);
  }

  // optional .gazebo.msgs.Pose pose3d_value = 8;
  if (has_pose3d_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->pose3d_value(), output);
  }

  // optional .gazebo.msgs.Quaternion quaternion_value = 9;
  if (has_quaternion_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->quaternion_value(), output);
  }

  // optional .gazebo.msgs.Time time_value = 10;
  if (has_time_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->time_value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.Any)
}

::google::protobuf::uint8* Any::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Any)
  // required .gazebo.msgs.Any.ValueType type = 1 [default = NONE];
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional double double_value = 2;
  if (has_double_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->double_value(), target);
  }

  // optional int32 int_value = 3;
  if (has_int_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->int_value(), target);
  }

  // optional string string_value = 4;
  if (has_string_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->string_value().data(), this->string_value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "string_value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->string_value(), target);
  }

  // optional bool bool_value = 5;
  if (has_bool_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->bool_value(), target);
  }

  // optional .gazebo.msgs.Vector3d vector3d_value = 6;
  if (has_vector3d_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->vector3d_value(), target);
  }

  // optional .gazebo.msgs.Color color_value = 7;
  if (has_color_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->color_value(), target);
  }

  // optional .gazebo.msgs.Pose pose3d_value = 8;
  if (has_pose3d_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        8, this->pose3d_value(), target);
  }

  // optional .gazebo.msgs.Quaternion quaternion_value = 9;
  if (has_quaternion_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        9, this->quaternion_value(), target);
  }

  // optional .gazebo.msgs.Time time_value = 10;
  if (has_time_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        10, this->time_value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Any)
  return target;
}

int Any::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .gazebo.msgs.Any.ValueType type = 1 [default = NONE];
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional double double_value = 2;
    if (has_double_value()) {
      total_size += 1 + 8;
    }

    // optional int32 int_value = 3;
    if (has_int_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->int_value());
    }

    // optional string string_value = 4;
    if (has_string_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->string_value());
    }

    // optional bool bool_value = 5;
    if (has_bool_value()) {
      total_size += 1 + 1;
    }

    // optional .gazebo.msgs.Vector3d vector3d_value = 6;
    if (has_vector3d_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->vector3d_value());
    }

    // optional .gazebo.msgs.Color color_value = 7;
    if (has_color_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->color_value());
    }

    // optional .gazebo.msgs.Pose pose3d_value = 8;
    if (has_pose3d_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->pose3d_value());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional .gazebo.msgs.Quaternion quaternion_value = 9;
    if (has_quaternion_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->quaternion_value());
    }

    // optional .gazebo.msgs.Time time_value = 10;
    if (has_time_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->time_value());
    }

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

void Any::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Any* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Any*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Any::MergeFrom(const Any& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_double_value()) {
      set_double_value(from.double_value());
    }
    if (from.has_int_value()) {
      set_int_value(from.int_value());
    }
    if (from.has_string_value()) {
      set_string_value(from.string_value());
    }
    if (from.has_bool_value()) {
      set_bool_value(from.bool_value());
    }
    if (from.has_vector3d_value()) {
      mutable_vector3d_value()->::gazebo::msgs::Vector3d::MergeFrom(from.vector3d_value());
    }
    if (from.has_color_value()) {
      mutable_color_value()->::gazebo::msgs::Color::MergeFrom(from.color_value());
    }
    if (from.has_pose3d_value()) {
      mutable_pose3d_value()->::gazebo::msgs::Pose::MergeFrom(from.pose3d_value());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_quaternion_value()) {
      mutable_quaternion_value()->::gazebo::msgs::Quaternion::MergeFrom(from.quaternion_value());
    }
    if (from.has_time_value()) {
      mutable_time_value()->::gazebo::msgs::Time::MergeFrom(from.time_value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Any::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Any::CopyFrom(const Any& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Any::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_vector3d_value()) {
    if (!this->vector3d_value().IsInitialized()) return false;
  }
  if (has_color_value()) {
    if (!this->color_value().IsInitialized()) return false;
  }
  if (has_pose3d_value()) {
    if (!this->pose3d_value().IsInitialized()) return false;
  }
  if (has_quaternion_value()) {
    if (!this->quaternion_value().IsInitialized()) return false;
  }
  if (has_time_value()) {
    if (!this->time_value().IsInitialized()) return false;
  }
  return true;
}

void Any::Swap(Any* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(double_value_, other->double_value_);
    std::swap(int_value_, other->int_value_);
    std::swap(string_value_, other->string_value_);
    std::swap(bool_value_, other->bool_value_);
    std::swap(vector3d_value_, other->vector3d_value_);
    std::swap(color_value_, other->color_value_);
    std::swap(pose3d_value_, other->pose3d_value_);
    std::swap(quaternion_value_, other->quaternion_value_);
    std::swap(time_value_, other->time_value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Any::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Any_descriptor_;
  metadata.reflection = Any_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
