// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gps.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "gps.pb.h"

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

const ::google::protobuf::Descriptor* GPS_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GPS_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_gps_2eproto() {
  protobuf_AddDesc_gps_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "gps.proto");
  GOOGLE_CHECK(file != NULL);
  GPS_descriptor_ = file->message_type(0);
  static const int GPS_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GPS, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GPS, link_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GPS, latitude_deg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GPS, longitude_deg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GPS, altitude_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GPS, velocity_east_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GPS, velocity_north_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GPS, velocity_up_),
  };
  GPS_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GPS_descriptor_,
      GPS::default_instance_,
      GPS_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GPS, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GPS, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GPS));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_gps_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GPS_descriptor_, &GPS::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_gps_2eproto() {
  delete GPS::default_instance_;
  delete GPS_reflection_;
}

void protobuf_AddDesc_gps_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_time_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\tgps.proto\022\013gazebo.msgs\032\ntime.proto\"\274\001\n"
    "\003GPS\022\037\n\004time\030\001 \002(\0132\021.gazebo.msgs.Time\022\021\n"
    "\tlink_name\030\002 \002(\t\022\024\n\014latitude_deg\030\003 \002(\001\022\025"
    "\n\rlongitude_deg\030\004 \002(\001\022\020\n\010altitude\030\005 \002(\001\022"
    "\025\n\rvelocity_east\030\006 \001(\001\022\026\n\016velocity_north"
    "\030\007 \001(\001\022\023\n\013velocity_up\030\010 \001(\001", 227);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gps.proto", &protobuf_RegisterTypes);
  GPS::default_instance_ = new GPS();
  GPS::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_gps_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_gps_2eproto {
  StaticDescriptorInitializer_gps_2eproto() {
    protobuf_AddDesc_gps_2eproto();
  }
} static_descriptor_initializer_gps_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int GPS::kTimeFieldNumber;
const int GPS::kLinkNameFieldNumber;
const int GPS::kLatitudeDegFieldNumber;
const int GPS::kLongitudeDegFieldNumber;
const int GPS::kAltitudeFieldNumber;
const int GPS::kVelocityEastFieldNumber;
const int GPS::kVelocityNorthFieldNumber;
const int GPS::kVelocityUpFieldNumber;
#endif  // !_MSC_VER

GPS::GPS()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.GPS)
}

void GPS::InitAsDefaultInstance() {
  time_ = const_cast< ::gazebo::msgs::Time*>(&::gazebo::msgs::Time::default_instance());
}

GPS::GPS(const GPS& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.GPS)
}

void GPS::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  time_ = NULL;
  link_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  latitude_deg_ = 0;
  longitude_deg_ = 0;
  altitude_ = 0;
  velocity_east_ = 0;
  velocity_north_ = 0;
  velocity_up_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GPS::~GPS() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.GPS)
  SharedDtor();
}

void GPS::SharedDtor() {
  if (link_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete link_name_;
  }
  if (this != default_instance_) {
    delete time_;
  }
}

void GPS::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GPS::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GPS_descriptor_;
}

const GPS& GPS::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_gps_2eproto();
  return *default_instance_;
}

GPS* GPS::default_instance_ = NULL;

GPS* GPS::New() const {
  return new GPS;
}

void GPS::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<GPS*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(latitude_deg_, velocity_up_);
    if (has_time()) {
      if (time_ != NULL) time_->::gazebo::msgs::Time::Clear();
    }
    if (has_link_name()) {
      if (link_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        link_name_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GPS::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.GPS)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gazebo.msgs.Time time = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_time()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_link_name;
        break;
      }

      // required string link_name = 2;
      case 2: {
        if (tag == 18) {
         parse_link_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_link_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->link_name().data(), this->link_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "link_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_latitude_deg;
        break;
      }

      // required double latitude_deg = 3;
      case 3: {
        if (tag == 25) {
         parse_latitude_deg:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &latitude_deg_)));
          set_has_latitude_deg();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_longitude_deg;
        break;
      }

      // required double longitude_deg = 4;
      case 4: {
        if (tag == 33) {
         parse_longitude_deg:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &longitude_deg_)));
          set_has_longitude_deg();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_altitude;
        break;
      }

      // required double altitude = 5;
      case 5: {
        if (tag == 41) {
         parse_altitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &altitude_)));
          set_has_altitude();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(49)) goto parse_velocity_east;
        break;
      }

      // optional double velocity_east = 6;
      case 6: {
        if (tag == 49) {
         parse_velocity_east:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &velocity_east_)));
          set_has_velocity_east();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(57)) goto parse_velocity_north;
        break;
      }

      // optional double velocity_north = 7;
      case 7: {
        if (tag == 57) {
         parse_velocity_north:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &velocity_north_)));
          set_has_velocity_north();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(65)) goto parse_velocity_up;
        break;
      }

      // optional double velocity_up = 8;
      case 8: {
        if (tag == 65) {
         parse_velocity_up:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &velocity_up_)));
          set_has_velocity_up();
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.GPS)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.GPS)
  return false;
#undef DO_
}

void GPS::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.GPS)
  // required .gazebo.msgs.Time time = 1;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->time(), output);
  }

  // required string link_name = 2;
  if (has_link_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->link_name().data(), this->link_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "link_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->link_name(), output);
  }

  // required double latitude_deg = 3;
  if (has_latitude_deg()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->latitude_deg(), output);
  }

  // required double longitude_deg = 4;
  if (has_longitude_deg()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->longitude_deg(), output);
  }

  // required double altitude = 5;
  if (has_altitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->altitude(), output);
  }

  // optional double velocity_east = 6;
  if (has_velocity_east()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->velocity_east(), output);
  }

  // optional double velocity_north = 7;
  if (has_velocity_north()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->velocity_north(), output);
  }

  // optional double velocity_up = 8;
  if (has_velocity_up()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->velocity_up(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.GPS)
}

::google::protobuf::uint8* GPS::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.GPS)
  // required .gazebo.msgs.Time time = 1;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->time(), target);
  }

  // required string link_name = 2;
  if (has_link_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->link_name().data(), this->link_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "link_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->link_name(), target);
  }

  // required double latitude_deg = 3;
  if (has_latitude_deg()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->latitude_deg(), target);
  }

  // required double longitude_deg = 4;
  if (has_longitude_deg()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->longitude_deg(), target);
  }

  // required double altitude = 5;
  if (has_altitude()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->altitude(), target);
  }

  // optional double velocity_east = 6;
  if (has_velocity_east()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->velocity_east(), target);
  }

  // optional double velocity_north = 7;
  if (has_velocity_north()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->velocity_north(), target);
  }

  // optional double velocity_up = 8;
  if (has_velocity_up()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->velocity_up(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.GPS)
  return target;
}

int GPS::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .gazebo.msgs.Time time = 1;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->time());
    }

    // required string link_name = 2;
    if (has_link_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->link_name());
    }

    // required double latitude_deg = 3;
    if (has_latitude_deg()) {
      total_size += 1 + 8;
    }

    // required double longitude_deg = 4;
    if (has_longitude_deg()) {
      total_size += 1 + 8;
    }

    // required double altitude = 5;
    if (has_altitude()) {
      total_size += 1 + 8;
    }

    // optional double velocity_east = 6;
    if (has_velocity_east()) {
      total_size += 1 + 8;
    }

    // optional double velocity_north = 7;
    if (has_velocity_north()) {
      total_size += 1 + 8;
    }

    // optional double velocity_up = 8;
    if (has_velocity_up()) {
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

void GPS::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GPS* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GPS*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GPS::MergeFrom(const GPS& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time()) {
      mutable_time()->::gazebo::msgs::Time::MergeFrom(from.time());
    }
    if (from.has_link_name()) {
      set_link_name(from.link_name());
    }
    if (from.has_latitude_deg()) {
      set_latitude_deg(from.latitude_deg());
    }
    if (from.has_longitude_deg()) {
      set_longitude_deg(from.longitude_deg());
    }
    if (from.has_altitude()) {
      set_altitude(from.altitude());
    }
    if (from.has_velocity_east()) {
      set_velocity_east(from.velocity_east());
    }
    if (from.has_velocity_north()) {
      set_velocity_north(from.velocity_north());
    }
    if (from.has_velocity_up()) {
      set_velocity_up(from.velocity_up());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GPS::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GPS::CopyFrom(const GPS& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GPS::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;

  if (has_time()) {
    if (!this->time().IsInitialized()) return false;
  }
  return true;
}

void GPS::Swap(GPS* other) {
  if (other != this) {
    std::swap(time_, other->time_);
    std::swap(link_name_, other->link_name_);
    std::swap(latitude_deg_, other->latitude_deg_);
    std::swap(longitude_deg_, other->longitude_deg_);
    std::swap(altitude_, other->altitude_);
    std::swap(velocity_east_, other->velocity_east_);
    std::swap(velocity_north_, other->velocity_north_);
    std::swap(velocity_up_, other->velocity_up_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GPS::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GPS_descriptor_;
  metadata.reflection = GPS_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
