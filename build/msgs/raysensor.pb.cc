// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: raysensor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "raysensor.pb.h"

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

const ::google::protobuf::Descriptor* RaySensor_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RaySensor_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_raysensor_2eproto() {
  protobuf_AddDesc_raysensor_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "raysensor.proto");
  GOOGLE_CHECK(file != NULL);
  RaySensor_descriptor_ = file->message_type(0);
  static const int RaySensor_offsets_[12] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RaySensor, display_scan_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RaySensor, horizontal_samples_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RaySensor, horizontal_resolution_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RaySensor, horizontal_min_angle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RaySensor, horizontal_max_angle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RaySensor, vertical_samples_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RaySensor, vertical_resolution_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RaySensor, vertical_min_angle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RaySensor, vertical_max_angle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RaySensor, range_min_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RaySensor, range_max_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RaySensor, range_resolution_),
  };
  RaySensor_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RaySensor_descriptor_,
      RaySensor::default_instance_,
      RaySensor_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RaySensor, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RaySensor, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RaySensor));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_raysensor_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RaySensor_descriptor_, &RaySensor::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_raysensor_2eproto() {
  delete RaySensor::default_instance_;
  delete RaySensor_reflection_;
}

void protobuf_AddDesc_raysensor_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017raysensor.proto\022\013gazebo.msgs\"\307\002\n\tRaySe"
    "nsor\022\024\n\014display_scan\030\001 \001(\010\022\032\n\022horizontal"
    "_samples\030\002 \001(\005\022\035\n\025horizontal_resolution\030"
    "\003 \001(\001\022\034\n\024horizontal_min_angle\030\004 \001(\001\022\034\n\024h"
    "orizontal_max_angle\030\005 \001(\001\022\030\n\020vertical_sa"
    "mples\030\006 \001(\005\022\033\n\023vertical_resolution\030\007 \001(\001"
    "\022\032\n\022vertical_min_angle\030\010 \001(\001\022\032\n\022vertical"
    "_max_angle\030\t \001(\001\022\021\n\trange_min\030\n \001(\001\022\021\n\tr"
    "ange_max\030\013 \001(\001\022\030\n\020range_resolution\030\014 \001(\001", 360);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "raysensor.proto", &protobuf_RegisterTypes);
  RaySensor::default_instance_ = new RaySensor();
  RaySensor::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_raysensor_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_raysensor_2eproto {
  StaticDescriptorInitializer_raysensor_2eproto() {
    protobuf_AddDesc_raysensor_2eproto();
  }
} static_descriptor_initializer_raysensor_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RaySensor::kDisplayScanFieldNumber;
const int RaySensor::kHorizontalSamplesFieldNumber;
const int RaySensor::kHorizontalResolutionFieldNumber;
const int RaySensor::kHorizontalMinAngleFieldNumber;
const int RaySensor::kHorizontalMaxAngleFieldNumber;
const int RaySensor::kVerticalSamplesFieldNumber;
const int RaySensor::kVerticalResolutionFieldNumber;
const int RaySensor::kVerticalMinAngleFieldNumber;
const int RaySensor::kVerticalMaxAngleFieldNumber;
const int RaySensor::kRangeMinFieldNumber;
const int RaySensor::kRangeMaxFieldNumber;
const int RaySensor::kRangeResolutionFieldNumber;
#endif  // !_MSC_VER

RaySensor::RaySensor()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.RaySensor)
}

void RaySensor::InitAsDefaultInstance() {
}

RaySensor::RaySensor(const RaySensor& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.RaySensor)
}

void RaySensor::SharedCtor() {
  _cached_size_ = 0;
  display_scan_ = false;
  horizontal_samples_ = 0;
  horizontal_resolution_ = 0;
  horizontal_min_angle_ = 0;
  horizontal_max_angle_ = 0;
  vertical_samples_ = 0;
  vertical_resolution_ = 0;
  vertical_min_angle_ = 0;
  vertical_max_angle_ = 0;
  range_min_ = 0;
  range_max_ = 0;
  range_resolution_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RaySensor::~RaySensor() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.RaySensor)
  SharedDtor();
}

void RaySensor::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RaySensor::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RaySensor::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RaySensor_descriptor_;
}

const RaySensor& RaySensor::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_raysensor_2eproto();
  return *default_instance_;
}

RaySensor* RaySensor::default_instance_ = NULL;

RaySensor* RaySensor::New() const {
  return new RaySensor;
}

void RaySensor::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<RaySensor*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(display_scan_, vertical_min_angle_);
    vertical_samples_ = 0;
  }
  ZR_(vertical_max_angle_, range_resolution_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RaySensor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.RaySensor)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool display_scan = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &display_scan_)));
          set_has_display_scan();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_horizontal_samples;
        break;
      }

      // optional int32 horizontal_samples = 2;
      case 2: {
        if (tag == 16) {
         parse_horizontal_samples:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &horizontal_samples_)));
          set_has_horizontal_samples();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_horizontal_resolution;
        break;
      }

      // optional double horizontal_resolution = 3;
      case 3: {
        if (tag == 25) {
         parse_horizontal_resolution:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &horizontal_resolution_)));
          set_has_horizontal_resolution();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_horizontal_min_angle;
        break;
      }

      // optional double horizontal_min_angle = 4;
      case 4: {
        if (tag == 33) {
         parse_horizontal_min_angle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &horizontal_min_angle_)));
          set_has_horizontal_min_angle();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_horizontal_max_angle;
        break;
      }

      // optional double horizontal_max_angle = 5;
      case 5: {
        if (tag == 41) {
         parse_horizontal_max_angle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &horizontal_max_angle_)));
          set_has_horizontal_max_angle();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_vertical_samples;
        break;
      }

      // optional int32 vertical_samples = 6;
      case 6: {
        if (tag == 48) {
         parse_vertical_samples:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &vertical_samples_)));
          set_has_vertical_samples();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(57)) goto parse_vertical_resolution;
        break;
      }

      // optional double vertical_resolution = 7;
      case 7: {
        if (tag == 57) {
         parse_vertical_resolution:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vertical_resolution_)));
          set_has_vertical_resolution();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(65)) goto parse_vertical_min_angle;
        break;
      }

      // optional double vertical_min_angle = 8;
      case 8: {
        if (tag == 65) {
         parse_vertical_min_angle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vertical_min_angle_)));
          set_has_vertical_min_angle();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(73)) goto parse_vertical_max_angle;
        break;
      }

      // optional double vertical_max_angle = 9;
      case 9: {
        if (tag == 73) {
         parse_vertical_max_angle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vertical_max_angle_)));
          set_has_vertical_max_angle();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(81)) goto parse_range_min;
        break;
      }

      // optional double range_min = 10;
      case 10: {
        if (tag == 81) {
         parse_range_min:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &range_min_)));
          set_has_range_min();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(89)) goto parse_range_max;
        break;
      }

      // optional double range_max = 11;
      case 11: {
        if (tag == 89) {
         parse_range_max:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &range_max_)));
          set_has_range_max();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(97)) goto parse_range_resolution;
        break;
      }

      // optional double range_resolution = 12;
      case 12: {
        if (tag == 97) {
         parse_range_resolution:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &range_resolution_)));
          set_has_range_resolution();
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.RaySensor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.RaySensor)
  return false;
#undef DO_
}

void RaySensor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.RaySensor)
  // optional bool display_scan = 1;
  if (has_display_scan()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->display_scan(), output);
  }

  // optional int32 horizontal_samples = 2;
  if (has_horizontal_samples()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->horizontal_samples(), output);
  }

  // optional double horizontal_resolution = 3;
  if (has_horizontal_resolution()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->horizontal_resolution(), output);
  }

  // optional double horizontal_min_angle = 4;
  if (has_horizontal_min_angle()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->horizontal_min_angle(), output);
  }

  // optional double horizontal_max_angle = 5;
  if (has_horizontal_max_angle()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->horizontal_max_angle(), output);
  }

  // optional int32 vertical_samples = 6;
  if (has_vertical_samples()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->vertical_samples(), output);
  }

  // optional double vertical_resolution = 7;
  if (has_vertical_resolution()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->vertical_resolution(), output);
  }

  // optional double vertical_min_angle = 8;
  if (has_vertical_min_angle()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->vertical_min_angle(), output);
  }

  // optional double vertical_max_angle = 9;
  if (has_vertical_max_angle()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->vertical_max_angle(), output);
  }

  // optional double range_min = 10;
  if (has_range_min()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(10, this->range_min(), output);
  }

  // optional double range_max = 11;
  if (has_range_max()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(11, this->range_max(), output);
  }

  // optional double range_resolution = 12;
  if (has_range_resolution()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(12, this->range_resolution(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.RaySensor)
}

::google::protobuf::uint8* RaySensor::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.RaySensor)
  // optional bool display_scan = 1;
  if (has_display_scan()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->display_scan(), target);
  }

  // optional int32 horizontal_samples = 2;
  if (has_horizontal_samples()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->horizontal_samples(), target);
  }

  // optional double horizontal_resolution = 3;
  if (has_horizontal_resolution()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->horizontal_resolution(), target);
  }

  // optional double horizontal_min_angle = 4;
  if (has_horizontal_min_angle()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->horizontal_min_angle(), target);
  }

  // optional double horizontal_max_angle = 5;
  if (has_horizontal_max_angle()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->horizontal_max_angle(), target);
  }

  // optional int32 vertical_samples = 6;
  if (has_vertical_samples()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->vertical_samples(), target);
  }

  // optional double vertical_resolution = 7;
  if (has_vertical_resolution()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->vertical_resolution(), target);
  }

  // optional double vertical_min_angle = 8;
  if (has_vertical_min_angle()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->vertical_min_angle(), target);
  }

  // optional double vertical_max_angle = 9;
  if (has_vertical_max_angle()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->vertical_max_angle(), target);
  }

  // optional double range_min = 10;
  if (has_range_min()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(10, this->range_min(), target);
  }

  // optional double range_max = 11;
  if (has_range_max()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(11, this->range_max(), target);
  }

  // optional double range_resolution = 12;
  if (has_range_resolution()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(12, this->range_resolution(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.RaySensor)
  return target;
}

int RaySensor::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool display_scan = 1;
    if (has_display_scan()) {
      total_size += 1 + 1;
    }

    // optional int32 horizontal_samples = 2;
    if (has_horizontal_samples()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->horizontal_samples());
    }

    // optional double horizontal_resolution = 3;
    if (has_horizontal_resolution()) {
      total_size += 1 + 8;
    }

    // optional double horizontal_min_angle = 4;
    if (has_horizontal_min_angle()) {
      total_size += 1 + 8;
    }

    // optional double horizontal_max_angle = 5;
    if (has_horizontal_max_angle()) {
      total_size += 1 + 8;
    }

    // optional int32 vertical_samples = 6;
    if (has_vertical_samples()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->vertical_samples());
    }

    // optional double vertical_resolution = 7;
    if (has_vertical_resolution()) {
      total_size += 1 + 8;
    }

    // optional double vertical_min_angle = 8;
    if (has_vertical_min_angle()) {
      total_size += 1 + 8;
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional double vertical_max_angle = 9;
    if (has_vertical_max_angle()) {
      total_size += 1 + 8;
    }

    // optional double range_min = 10;
    if (has_range_min()) {
      total_size += 1 + 8;
    }

    // optional double range_max = 11;
    if (has_range_max()) {
      total_size += 1 + 8;
    }

    // optional double range_resolution = 12;
    if (has_range_resolution()) {
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

void RaySensor::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RaySensor* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RaySensor*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RaySensor::MergeFrom(const RaySensor& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_display_scan()) {
      set_display_scan(from.display_scan());
    }
    if (from.has_horizontal_samples()) {
      set_horizontal_samples(from.horizontal_samples());
    }
    if (from.has_horizontal_resolution()) {
      set_horizontal_resolution(from.horizontal_resolution());
    }
    if (from.has_horizontal_min_angle()) {
      set_horizontal_min_angle(from.horizontal_min_angle());
    }
    if (from.has_horizontal_max_angle()) {
      set_horizontal_max_angle(from.horizontal_max_angle());
    }
    if (from.has_vertical_samples()) {
      set_vertical_samples(from.vertical_samples());
    }
    if (from.has_vertical_resolution()) {
      set_vertical_resolution(from.vertical_resolution());
    }
    if (from.has_vertical_min_angle()) {
      set_vertical_min_angle(from.vertical_min_angle());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_vertical_max_angle()) {
      set_vertical_max_angle(from.vertical_max_angle());
    }
    if (from.has_range_min()) {
      set_range_min(from.range_min());
    }
    if (from.has_range_max()) {
      set_range_max(from.range_max());
    }
    if (from.has_range_resolution()) {
      set_range_resolution(from.range_resolution());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RaySensor::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RaySensor::CopyFrom(const RaySensor& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RaySensor::IsInitialized() const {

  return true;
}

void RaySensor::Swap(RaySensor* other) {
  if (other != this) {
    std::swap(display_scan_, other->display_scan_);
    std::swap(horizontal_samples_, other->horizontal_samples_);
    std::swap(horizontal_resolution_, other->horizontal_resolution_);
    std::swap(horizontal_min_angle_, other->horizontal_min_angle_);
    std::swap(horizontal_max_angle_, other->horizontal_max_angle_);
    std::swap(vertical_samples_, other->vertical_samples_);
    std::swap(vertical_resolution_, other->vertical_resolution_);
    std::swap(vertical_min_angle_, other->vertical_min_angle_);
    std::swap(vertical_max_angle_, other->vertical_max_angle_);
    std::swap(range_min_, other->range_min_);
    std::swap(range_max_, other->range_max_);
    std::swap(range_resolution_, other->range_resolution_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RaySensor::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RaySensor_descriptor_;
  metadata.reflection = RaySensor_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
