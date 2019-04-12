// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sky.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "sky.pb.h"

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

const ::google::protobuf::Descriptor* Sky_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Sky_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_sky_2eproto() {
  protobuf_AddDesc_sky_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "sky.proto");
  GOOGLE_CHECK(file != NULL);
  Sky_descriptor_ = file->message_type(0);
  static const int Sky_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sky, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sky, sunrise_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sky, sunset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sky, wind_speed_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sky, wind_direction_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sky, cloud_ambient_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sky, humidity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sky, mean_cloud_size_),
  };
  Sky_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Sky_descriptor_,
      Sky::default_instance_,
      Sky_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sky, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sky, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Sky));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_sky_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Sky_descriptor_, &Sky::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_sky_2eproto() {
  delete Sky::default_instance_;
  delete Sky_reflection_;
}

void protobuf_AddDesc_sky_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_color_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\tsky.proto\022\013gazebo.msgs\032\013color.proto\"\266\001"
    "\n\003Sky\022\014\n\004time\030\001 \001(\001\022\017\n\007sunrise\030\002 \001(\001\022\016\n\006"
    "sunset\030\003 \001(\001\022\022\n\nwind_speed\030\004 \001(\001\022\026\n\016wind"
    "_direction\030\005 \001(\001\022)\n\rcloud_ambient\030\006 \001(\0132"
    "\022.gazebo.msgs.Color\022\020\n\010humidity\030\007 \001(\001\022\027\n"
    "\017mean_cloud_size\030\010 \001(\001", 222);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "sky.proto", &protobuf_RegisterTypes);
  Sky::default_instance_ = new Sky();
  Sky::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_sky_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_sky_2eproto {
  StaticDescriptorInitializer_sky_2eproto() {
    protobuf_AddDesc_sky_2eproto();
  }
} static_descriptor_initializer_sky_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Sky::kTimeFieldNumber;
const int Sky::kSunriseFieldNumber;
const int Sky::kSunsetFieldNumber;
const int Sky::kWindSpeedFieldNumber;
const int Sky::kWindDirectionFieldNumber;
const int Sky::kCloudAmbientFieldNumber;
const int Sky::kHumidityFieldNumber;
const int Sky::kMeanCloudSizeFieldNumber;
#endif  // !_MSC_VER

Sky::Sky()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Sky)
}

void Sky::InitAsDefaultInstance() {
  cloud_ambient_ = const_cast< ::gazebo::msgs::Color*>(&::gazebo::msgs::Color::default_instance());
}

Sky::Sky(const Sky& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Sky)
}

void Sky::SharedCtor() {
  _cached_size_ = 0;
  time_ = 0;
  sunrise_ = 0;
  sunset_ = 0;
  wind_speed_ = 0;
  wind_direction_ = 0;
  cloud_ambient_ = NULL;
  humidity_ = 0;
  mean_cloud_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Sky::~Sky() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Sky)
  SharedDtor();
}

void Sky::SharedDtor() {
  if (this != default_instance_) {
    delete cloud_ambient_;
  }
}

void Sky::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Sky::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Sky_descriptor_;
}

const Sky& Sky::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_sky_2eproto();
  return *default_instance_;
}

Sky* Sky::default_instance_ = NULL;

Sky* Sky::New() const {
  return new Sky;
}

void Sky::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Sky*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(time_, wind_direction_);
    ZR_(humidity_, mean_cloud_size_);
    if (has_cloud_ambient()) {
      if (cloud_ambient_ != NULL) cloud_ambient_->::gazebo::msgs::Color::Clear();
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Sky::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.Sky)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double time = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &time_)));
          set_has_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_sunrise;
        break;
      }

      // optional double sunrise = 2;
      case 2: {
        if (tag == 17) {
         parse_sunrise:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &sunrise_)));
          set_has_sunrise();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_sunset;
        break;
      }

      // optional double sunset = 3;
      case 3: {
        if (tag == 25) {
         parse_sunset:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &sunset_)));
          set_has_sunset();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_wind_speed;
        break;
      }

      // optional double wind_speed = 4;
      case 4: {
        if (tag == 33) {
         parse_wind_speed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &wind_speed_)));
          set_has_wind_speed();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_wind_direction;
        break;
      }

      // optional double wind_direction = 5;
      case 5: {
        if (tag == 41) {
         parse_wind_direction:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &wind_direction_)));
          set_has_wind_direction();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_cloud_ambient;
        break;
      }

      // optional .gazebo.msgs.Color cloud_ambient = 6;
      case 6: {
        if (tag == 50) {
         parse_cloud_ambient:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cloud_ambient()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(57)) goto parse_humidity;
        break;
      }

      // optional double humidity = 7;
      case 7: {
        if (tag == 57) {
         parse_humidity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &humidity_)));
          set_has_humidity();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(65)) goto parse_mean_cloud_size;
        break;
      }

      // optional double mean_cloud_size = 8;
      case 8: {
        if (tag == 65) {
         parse_mean_cloud_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &mean_cloud_size_)));
          set_has_mean_cloud_size();
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.Sky)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.Sky)
  return false;
#undef DO_
}

void Sky::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.Sky)
  // optional double time = 1;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->time(), output);
  }

  // optional double sunrise = 2;
  if (has_sunrise()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->sunrise(), output);
  }

  // optional double sunset = 3;
  if (has_sunset()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->sunset(), output);
  }

  // optional double wind_speed = 4;
  if (has_wind_speed()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->wind_speed(), output);
  }

  // optional double wind_direction = 5;
  if (has_wind_direction()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->wind_direction(), output);
  }

  // optional .gazebo.msgs.Color cloud_ambient = 6;
  if (has_cloud_ambient()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->cloud_ambient(), output);
  }

  // optional double humidity = 7;
  if (has_humidity()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->humidity(), output);
  }

  // optional double mean_cloud_size = 8;
  if (has_mean_cloud_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->mean_cloud_size(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.Sky)
}

::google::protobuf::uint8* Sky::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Sky)
  // optional double time = 1;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->time(), target);
  }

  // optional double sunrise = 2;
  if (has_sunrise()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->sunrise(), target);
  }

  // optional double sunset = 3;
  if (has_sunset()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->sunset(), target);
  }

  // optional double wind_speed = 4;
  if (has_wind_speed()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->wind_speed(), target);
  }

  // optional double wind_direction = 5;
  if (has_wind_direction()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->wind_direction(), target);
  }

  // optional .gazebo.msgs.Color cloud_ambient = 6;
  if (has_cloud_ambient()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->cloud_ambient(), target);
  }

  // optional double humidity = 7;
  if (has_humidity()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->humidity(), target);
  }

  // optional double mean_cloud_size = 8;
  if (has_mean_cloud_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->mean_cloud_size(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Sky)
  return target;
}

int Sky::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional double time = 1;
    if (has_time()) {
      total_size += 1 + 8;
    }

    // optional double sunrise = 2;
    if (has_sunrise()) {
      total_size += 1 + 8;
    }

    // optional double sunset = 3;
    if (has_sunset()) {
      total_size += 1 + 8;
    }

    // optional double wind_speed = 4;
    if (has_wind_speed()) {
      total_size += 1 + 8;
    }

    // optional double wind_direction = 5;
    if (has_wind_direction()) {
      total_size += 1 + 8;
    }

    // optional .gazebo.msgs.Color cloud_ambient = 6;
    if (has_cloud_ambient()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cloud_ambient());
    }

    // optional double humidity = 7;
    if (has_humidity()) {
      total_size += 1 + 8;
    }

    // optional double mean_cloud_size = 8;
    if (has_mean_cloud_size()) {
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

void Sky::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Sky* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Sky*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Sky::MergeFrom(const Sky& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time()) {
      set_time(from.time());
    }
    if (from.has_sunrise()) {
      set_sunrise(from.sunrise());
    }
    if (from.has_sunset()) {
      set_sunset(from.sunset());
    }
    if (from.has_wind_speed()) {
      set_wind_speed(from.wind_speed());
    }
    if (from.has_wind_direction()) {
      set_wind_direction(from.wind_direction());
    }
    if (from.has_cloud_ambient()) {
      mutable_cloud_ambient()->::gazebo::msgs::Color::MergeFrom(from.cloud_ambient());
    }
    if (from.has_humidity()) {
      set_humidity(from.humidity());
    }
    if (from.has_mean_cloud_size()) {
      set_mean_cloud_size(from.mean_cloud_size());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Sky::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sky::CopyFrom(const Sky& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sky::IsInitialized() const {

  if (has_cloud_ambient()) {
    if (!this->cloud_ambient().IsInitialized()) return false;
  }
  return true;
}

void Sky::Swap(Sky* other) {
  if (other != this) {
    std::swap(time_, other->time_);
    std::swap(sunrise_, other->sunrise_);
    std::swap(sunset_, other->sunset_);
    std::swap(wind_speed_, other->wind_speed_);
    std::swap(wind_direction_, other->wind_direction_);
    std::swap(cloud_ambient_, other->cloud_ambient_);
    std::swap(humidity_, other->humidity_);
    std::swap(mean_cloud_size_, other->mean_cloud_size_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Sky::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Sky_descriptor_;
  metadata.reflection = Sky_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
