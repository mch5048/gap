// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sonar.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "sonar.pb.h"

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

const ::google::protobuf::Descriptor* Sonar_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Sonar_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_sonar_2eproto() {
  protobuf_AddDesc_sonar_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "sonar.proto");
  GOOGLE_CHECK(file != NULL);
  Sonar_descriptor_ = file->message_type(0);
  static const int Sonar_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sonar, frame_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sonar, world_pose_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sonar, range_min_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sonar, range_max_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sonar, radius_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sonar, range_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sonar, contact_),
  };
  Sonar_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Sonar_descriptor_,
      Sonar::default_instance_,
      Sonar_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sonar, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sonar, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Sonar));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_sonar_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Sonar_descriptor_, &Sonar::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_sonar_2eproto() {
  delete Sonar::default_instance_;
  delete Sonar_reflection_;
}

void protobuf_AddDesc_sonar_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_pose_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_vector3d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013sonar.proto\022\013gazebo.msgs\032\npose.proto\032\016"
    "vector3d.proto\"\252\001\n\005Sonar\022\r\n\005frame\030\001 \002(\t\022"
    "%\n\nworld_pose\030\002 \002(\0132\021.gazebo.msgs.Pose\022\021"
    "\n\trange_min\030\003 \002(\001\022\021\n\trange_max\030\004 \002(\001\022\016\n\006"
    "radius\030\005 \002(\001\022\r\n\005range\030\006 \002(\001\022&\n\007contact\030\007"
    " \001(\0132\025.gazebo.msgs.Vector3d", 227);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "sonar.proto", &protobuf_RegisterTypes);
  Sonar::default_instance_ = new Sonar();
  Sonar::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_sonar_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_sonar_2eproto {
  StaticDescriptorInitializer_sonar_2eproto() {
    protobuf_AddDesc_sonar_2eproto();
  }
} static_descriptor_initializer_sonar_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Sonar::kFrameFieldNumber;
const int Sonar::kWorldPoseFieldNumber;
const int Sonar::kRangeMinFieldNumber;
const int Sonar::kRangeMaxFieldNumber;
const int Sonar::kRadiusFieldNumber;
const int Sonar::kRangeFieldNumber;
const int Sonar::kContactFieldNumber;
#endif  // !_MSC_VER

Sonar::Sonar()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Sonar)
}

void Sonar::InitAsDefaultInstance() {
  world_pose_ = const_cast< ::gazebo::msgs::Pose*>(&::gazebo::msgs::Pose::default_instance());
  contact_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
}

Sonar::Sonar(const Sonar& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Sonar)
}

void Sonar::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  frame_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  world_pose_ = NULL;
  range_min_ = 0;
  range_max_ = 0;
  radius_ = 0;
  range_ = 0;
  contact_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Sonar::~Sonar() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Sonar)
  SharedDtor();
}

void Sonar::SharedDtor() {
  if (frame_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete frame_;
  }
  if (this != default_instance_) {
    delete world_pose_;
    delete contact_;
  }
}

void Sonar::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Sonar::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Sonar_descriptor_;
}

const Sonar& Sonar::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_sonar_2eproto();
  return *default_instance_;
}

Sonar* Sonar::default_instance_ = NULL;

Sonar* Sonar::New() const {
  return new Sonar;
}

void Sonar::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Sonar*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 127) {
    ZR_(range_min_, range_);
    if (has_frame()) {
      if (frame_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        frame_->clear();
      }
    }
    if (has_world_pose()) {
      if (world_pose_ != NULL) world_pose_->::gazebo::msgs::Pose::Clear();
    }
    if (has_contact()) {
      if (contact_ != NULL) contact_->::gazebo::msgs::Vector3d::Clear();
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Sonar::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.Sonar)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string frame = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_frame()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->frame().data(), this->frame().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "frame");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_world_pose;
        break;
      }

      // required .gazebo.msgs.Pose world_pose = 2;
      case 2: {
        if (tag == 18) {
         parse_world_pose:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_world_pose()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_range_min;
        break;
      }

      // required double range_min = 3;
      case 3: {
        if (tag == 25) {
         parse_range_min:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &range_min_)));
          set_has_range_min();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_range_max;
        break;
      }

      // required double range_max = 4;
      case 4: {
        if (tag == 33) {
         parse_range_max:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &range_max_)));
          set_has_range_max();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_radius;
        break;
      }

      // required double radius = 5;
      case 5: {
        if (tag == 41) {
         parse_radius:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &radius_)));
          set_has_radius();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(49)) goto parse_range;
        break;
      }

      // required double range = 6;
      case 6: {
        if (tag == 49) {
         parse_range:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &range_)));
          set_has_range();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_contact;
        break;
      }

      // optional .gazebo.msgs.Vector3d contact = 7;
      case 7: {
        if (tag == 58) {
         parse_contact:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_contact()));
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.Sonar)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.Sonar)
  return false;
#undef DO_
}

void Sonar::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.Sonar)
  // required string frame = 1;
  if (has_frame()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->frame().data(), this->frame().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "frame");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->frame(), output);
  }

  // required .gazebo.msgs.Pose world_pose = 2;
  if (has_world_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->world_pose(), output);
  }

  // required double range_min = 3;
  if (has_range_min()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->range_min(), output);
  }

  // required double range_max = 4;
  if (has_range_max()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->range_max(), output);
  }

  // required double radius = 5;
  if (has_radius()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->radius(), output);
  }

  // required double range = 6;
  if (has_range()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->range(), output);
  }

  // optional .gazebo.msgs.Vector3d contact = 7;
  if (has_contact()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->contact(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.Sonar)
}

::google::protobuf::uint8* Sonar::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Sonar)
  // required string frame = 1;
  if (has_frame()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->frame().data(), this->frame().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "frame");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->frame(), target);
  }

  // required .gazebo.msgs.Pose world_pose = 2;
  if (has_world_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->world_pose(), target);
  }

  // required double range_min = 3;
  if (has_range_min()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->range_min(), target);
  }

  // required double range_max = 4;
  if (has_range_max()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->range_max(), target);
  }

  // required double radius = 5;
  if (has_radius()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->radius(), target);
  }

  // required double range = 6;
  if (has_range()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->range(), target);
  }

  // optional .gazebo.msgs.Vector3d contact = 7;
  if (has_contact()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->contact(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Sonar)
  return target;
}

int Sonar::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string frame = 1;
    if (has_frame()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->frame());
    }

    // required .gazebo.msgs.Pose world_pose = 2;
    if (has_world_pose()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->world_pose());
    }

    // required double range_min = 3;
    if (has_range_min()) {
      total_size += 1 + 8;
    }

    // required double range_max = 4;
    if (has_range_max()) {
      total_size += 1 + 8;
    }

    // required double radius = 5;
    if (has_radius()) {
      total_size += 1 + 8;
    }

    // required double range = 6;
    if (has_range()) {
      total_size += 1 + 8;
    }

    // optional .gazebo.msgs.Vector3d contact = 7;
    if (has_contact()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->contact());
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

void Sonar::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Sonar* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Sonar*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Sonar::MergeFrom(const Sonar& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_frame()) {
      set_frame(from.frame());
    }
    if (from.has_world_pose()) {
      mutable_world_pose()->::gazebo::msgs::Pose::MergeFrom(from.world_pose());
    }
    if (from.has_range_min()) {
      set_range_min(from.range_min());
    }
    if (from.has_range_max()) {
      set_range_max(from.range_max());
    }
    if (from.has_radius()) {
      set_radius(from.radius());
    }
    if (from.has_range()) {
      set_range(from.range());
    }
    if (from.has_contact()) {
      mutable_contact()->::gazebo::msgs::Vector3d::MergeFrom(from.contact());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Sonar::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sonar::CopyFrom(const Sonar& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sonar::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;

  if (has_world_pose()) {
    if (!this->world_pose().IsInitialized()) return false;
  }
  if (has_contact()) {
    if (!this->contact().IsInitialized()) return false;
  }
  return true;
}

void Sonar::Swap(Sonar* other) {
  if (other != this) {
    std::swap(frame_, other->frame_);
    std::swap(world_pose_, other->world_pose_);
    std::swap(range_min_, other->range_min_);
    std::swap(range_max_, other->range_max_);
    std::swap(radius_, other->radius_);
    std::swap(range_, other->range_);
    std::swap(contact_, other->contact_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Sonar::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Sonar_descriptor_;
  metadata.reflection = Sonar_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
