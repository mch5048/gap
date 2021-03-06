// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: world_reset.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "world_reset.pb.h"

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

const ::google::protobuf::Descriptor* WorldReset_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WorldReset_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_world_5freset_2eproto() {
  protobuf_AddDesc_world_5freset_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "world_reset.proto");
  GOOGLE_CHECK(file != NULL);
  WorldReset_descriptor_ = file->message_type(0);
  static const int WorldReset_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorldReset, all_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorldReset, time_only_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorldReset, model_only_),
  };
  WorldReset_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      WorldReset_descriptor_,
      WorldReset::default_instance_,
      WorldReset_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorldReset, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorldReset, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(WorldReset));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_world_5freset_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    WorldReset_descriptor_, &WorldReset::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_world_5freset_2eproto() {
  delete WorldReset::default_instance_;
  delete WorldReset_reflection_;
}

void protobuf_AddDesc_world_5freset_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021world_reset.proto\022\013gazebo.msgs\"T\n\nWorl"
    "dReset\022\021\n\003all\030\001 \001(\010:\004true\022\030\n\ttime_only\030\002"
    " \001(\010:\005false\022\031\n\nmodel_only\030\003 \001(\010:\005false", 118);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "world_reset.proto", &protobuf_RegisterTypes);
  WorldReset::default_instance_ = new WorldReset();
  WorldReset::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_world_5freset_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_world_5freset_2eproto {
  StaticDescriptorInitializer_world_5freset_2eproto() {
    protobuf_AddDesc_world_5freset_2eproto();
  }
} static_descriptor_initializer_world_5freset_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int WorldReset::kAllFieldNumber;
const int WorldReset::kTimeOnlyFieldNumber;
const int WorldReset::kModelOnlyFieldNumber;
#endif  // !_MSC_VER

WorldReset::WorldReset()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.WorldReset)
}

void WorldReset::InitAsDefaultInstance() {
}

WorldReset::WorldReset(const WorldReset& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.WorldReset)
}

void WorldReset::SharedCtor() {
  _cached_size_ = 0;
  all_ = true;
  time_only_ = false;
  model_only_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WorldReset::~WorldReset() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.WorldReset)
  SharedDtor();
}

void WorldReset::SharedDtor() {
  if (this != default_instance_) {
  }
}

void WorldReset::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WorldReset::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WorldReset_descriptor_;
}

const WorldReset& WorldReset::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_world_5freset_2eproto();
  return *default_instance_;
}

WorldReset* WorldReset::default_instance_ = NULL;

WorldReset* WorldReset::New() const {
  return new WorldReset;
}

void WorldReset::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<WorldReset*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 7) {
    ZR_(time_only_, model_only_);
    all_ = true;
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool WorldReset::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.WorldReset)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool all = 1 [default = true];
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &all_)));
          set_has_all();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_time_only;
        break;
      }

      // optional bool time_only = 2 [default = false];
      case 2: {
        if (tag == 16) {
         parse_time_only:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &time_only_)));
          set_has_time_only();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_model_only;
        break;
      }

      // optional bool model_only = 3 [default = false];
      case 3: {
        if (tag == 24) {
         parse_model_only:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &model_only_)));
          set_has_model_only();
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.WorldReset)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.WorldReset)
  return false;
#undef DO_
}

void WorldReset::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.WorldReset)
  // optional bool all = 1 [default = true];
  if (has_all()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->all(), output);
  }

  // optional bool time_only = 2 [default = false];
  if (has_time_only()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->time_only(), output);
  }

  // optional bool model_only = 3 [default = false];
  if (has_model_only()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->model_only(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.WorldReset)
}

::google::protobuf::uint8* WorldReset::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.WorldReset)
  // optional bool all = 1 [default = true];
  if (has_all()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->all(), target);
  }

  // optional bool time_only = 2 [default = false];
  if (has_time_only()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->time_only(), target);
  }

  // optional bool model_only = 3 [default = false];
  if (has_model_only()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->model_only(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.WorldReset)
  return target;
}

int WorldReset::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool all = 1 [default = true];
    if (has_all()) {
      total_size += 1 + 1;
    }

    // optional bool time_only = 2 [default = false];
    if (has_time_only()) {
      total_size += 1 + 1;
    }

    // optional bool model_only = 3 [default = false];
    if (has_model_only()) {
      total_size += 1 + 1;
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

void WorldReset::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const WorldReset* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const WorldReset*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void WorldReset::MergeFrom(const WorldReset& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_all()) {
      set_all(from.all());
    }
    if (from.has_time_only()) {
      set_time_only(from.time_only());
    }
    if (from.has_model_only()) {
      set_model_only(from.model_only());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void WorldReset::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WorldReset::CopyFrom(const WorldReset& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorldReset::IsInitialized() const {

  return true;
}

void WorldReset::Swap(WorldReset* other) {
  if (other != this) {
    std::swap(all_, other->all_);
    std::swap(time_only_, other->time_only_);
    std::swap(model_only_, other->model_only_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata WorldReset::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WorldReset_descriptor_;
  metadata.reflection = WorldReset_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
