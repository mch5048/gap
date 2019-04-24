// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: logical_camera_sensor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "logical_camera_sensor.pb.h"

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

const ::google::protobuf::Descriptor* LogicalCameraSensor_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LogicalCameraSensor_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_logical_5fcamera_5fsensor_2eproto() {
  protobuf_AddDesc_logical_5fcamera_5fsensor_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "logical_camera_sensor.proto");
  GOOGLE_CHECK(file != NULL);
  LogicalCameraSensor_descriptor_ = file->message_type(0);
  static const int LogicalCameraSensor_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogicalCameraSensor, near_clip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogicalCameraSensor, far_clip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogicalCameraSensor, horizontal_fov_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogicalCameraSensor, aspect_ratio_),
  };
  LogicalCameraSensor_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LogicalCameraSensor_descriptor_,
      LogicalCameraSensor::default_instance_,
      LogicalCameraSensor_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogicalCameraSensor, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogicalCameraSensor, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LogicalCameraSensor));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_logical_5fcamera_5fsensor_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LogicalCameraSensor_descriptor_, &LogicalCameraSensor::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_logical_5fcamera_5fsensor_2eproto() {
  delete LogicalCameraSensor::default_instance_;
  delete LogicalCameraSensor_reflection_;
}

void protobuf_AddDesc_logical_5fcamera_5fsensor_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033logical_camera_sensor.proto\022\013gazebo.ms"
    "gs\"h\n\023LogicalCameraSensor\022\021\n\tnear_clip\030\001"
    " \002(\001\022\020\n\010far_clip\030\002 \002(\001\022\026\n\016horizontal_fov"
    "\030\003 \002(\001\022\024\n\014aspect_ratio\030\004 \002(\001", 148);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "logical_camera_sensor.proto", &protobuf_RegisterTypes);
  LogicalCameraSensor::default_instance_ = new LogicalCameraSensor();
  LogicalCameraSensor::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_logical_5fcamera_5fsensor_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_logical_5fcamera_5fsensor_2eproto {
  StaticDescriptorInitializer_logical_5fcamera_5fsensor_2eproto() {
    protobuf_AddDesc_logical_5fcamera_5fsensor_2eproto();
  }
} static_descriptor_initializer_logical_5fcamera_5fsensor_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int LogicalCameraSensor::kNearClipFieldNumber;
const int LogicalCameraSensor::kFarClipFieldNumber;
const int LogicalCameraSensor::kHorizontalFovFieldNumber;
const int LogicalCameraSensor::kAspectRatioFieldNumber;
#endif  // !_MSC_VER

LogicalCameraSensor::LogicalCameraSensor()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.LogicalCameraSensor)
}

void LogicalCameraSensor::InitAsDefaultInstance() {
}

LogicalCameraSensor::LogicalCameraSensor(const LogicalCameraSensor& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.LogicalCameraSensor)
}

void LogicalCameraSensor::SharedCtor() {
  _cached_size_ = 0;
  near_clip_ = 0;
  far_clip_ = 0;
  horizontal_fov_ = 0;
  aspect_ratio_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LogicalCameraSensor::~LogicalCameraSensor() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.LogicalCameraSensor)
  SharedDtor();
}

void LogicalCameraSensor::SharedDtor() {
  if (this != default_instance_) {
  }
}

void LogicalCameraSensor::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LogicalCameraSensor::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LogicalCameraSensor_descriptor_;
}

const LogicalCameraSensor& LogicalCameraSensor::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_logical_5fcamera_5fsensor_2eproto();
  return *default_instance_;
}

LogicalCameraSensor* LogicalCameraSensor::default_instance_ = NULL;

LogicalCameraSensor* LogicalCameraSensor::New() const {
  return new LogicalCameraSensor;
}

void LogicalCameraSensor::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<LogicalCameraSensor*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(near_clip_, aspect_ratio_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LogicalCameraSensor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.LogicalCameraSensor)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required double near_clip = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &near_clip_)));
          set_has_near_clip();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_far_clip;
        break;
      }

      // required double far_clip = 2;
      case 2: {
        if (tag == 17) {
         parse_far_clip:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &far_clip_)));
          set_has_far_clip();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_horizontal_fov;
        break;
      }

      // required double horizontal_fov = 3;
      case 3: {
        if (tag == 25) {
         parse_horizontal_fov:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &horizontal_fov_)));
          set_has_horizontal_fov();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_aspect_ratio;
        break;
      }

      // required double aspect_ratio = 4;
      case 4: {
        if (tag == 33) {
         parse_aspect_ratio:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &aspect_ratio_)));
          set_has_aspect_ratio();
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.LogicalCameraSensor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.LogicalCameraSensor)
  return false;
#undef DO_
}

void LogicalCameraSensor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.LogicalCameraSensor)
  // required double near_clip = 1;
  if (has_near_clip()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->near_clip(), output);
  }

  // required double far_clip = 2;
  if (has_far_clip()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->far_clip(), output);
  }

  // required double horizontal_fov = 3;
  if (has_horizontal_fov()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->horizontal_fov(), output);
  }

  // required double aspect_ratio = 4;
  if (has_aspect_ratio()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->aspect_ratio(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.LogicalCameraSensor)
}

::google::protobuf::uint8* LogicalCameraSensor::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.LogicalCameraSensor)
  // required double near_clip = 1;
  if (has_near_clip()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->near_clip(), target);
  }

  // required double far_clip = 2;
  if (has_far_clip()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->far_clip(), target);
  }

  // required double horizontal_fov = 3;
  if (has_horizontal_fov()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->horizontal_fov(), target);
  }

  // required double aspect_ratio = 4;
  if (has_aspect_ratio()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->aspect_ratio(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.LogicalCameraSensor)
  return target;
}

int LogicalCameraSensor::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required double near_clip = 1;
    if (has_near_clip()) {
      total_size += 1 + 8;
    }

    // required double far_clip = 2;
    if (has_far_clip()) {
      total_size += 1 + 8;
    }

    // required double horizontal_fov = 3;
    if (has_horizontal_fov()) {
      total_size += 1 + 8;
    }

    // required double aspect_ratio = 4;
    if (has_aspect_ratio()) {
      total_size += 1 + 8;
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

void LogicalCameraSensor::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LogicalCameraSensor* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LogicalCameraSensor*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LogicalCameraSensor::MergeFrom(const LogicalCameraSensor& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_near_clip()) {
      set_near_clip(from.near_clip());
    }
    if (from.has_far_clip()) {
      set_far_clip(from.far_clip());
    }
    if (from.has_horizontal_fov()) {
      set_horizontal_fov(from.horizontal_fov());
    }
    if (from.has_aspect_ratio()) {
      set_aspect_ratio(from.aspect_ratio());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LogicalCameraSensor::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogicalCameraSensor::CopyFrom(const LogicalCameraSensor& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogicalCameraSensor::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void LogicalCameraSensor::Swap(LogicalCameraSensor* other) {
  if (other != this) {
    std::swap(near_clip_, other->near_clip_);
    std::swap(far_clip_, other->far_clip_);
    std::swap(horizontal_fov_, other->horizontal_fov_);
    std::swap(aspect_ratio_, other->aspect_ratio_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LogicalCameraSensor::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LogicalCameraSensor_descriptor_;
  metadata.reflection = LogicalCameraSensor_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)