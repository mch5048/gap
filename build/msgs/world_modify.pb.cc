// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: world_modify.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "world_modify.pb.h"

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

const ::google::protobuf::Descriptor* WorldModify_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WorldModify_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_world_5fmodify_2eproto() {
  protobuf_AddDesc_world_5fmodify_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "world_modify.proto");
  GOOGLE_CHECK(file != NULL);
  WorldModify_descriptor_ = file->message_type(0);
  static const int WorldModify_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorldModify, world_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorldModify, remove_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorldModify, create_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorldModify, cloned_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorldModify, cloned_uri_),
  };
  WorldModify_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      WorldModify_descriptor_,
      WorldModify::default_instance_,
      WorldModify_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorldModify, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorldModify, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(WorldModify));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_world_5fmodify_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    WorldModify_descriptor_, &WorldModify::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_world_5fmodify_2eproto() {
  delete WorldModify::default_instance_;
  delete WorldModify_reflection_;
}

void protobuf_AddDesc_world_5fmodify_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022world_modify.proto\022\013gazebo.msgs\"e\n\013Wor"
    "ldModify\022\022\n\nworld_name\030\001 \002(\t\022\016\n\006remove\030\002"
    " \001(\010\022\016\n\006create\030\003 \001(\010\022\016\n\006cloned\030\004 \001(\010\022\022\n\n"
    "cloned_uri\030\005 \001(\t", 136);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "world_modify.proto", &protobuf_RegisterTypes);
  WorldModify::default_instance_ = new WorldModify();
  WorldModify::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_world_5fmodify_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_world_5fmodify_2eproto {
  StaticDescriptorInitializer_world_5fmodify_2eproto() {
    protobuf_AddDesc_world_5fmodify_2eproto();
  }
} static_descriptor_initializer_world_5fmodify_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int WorldModify::kWorldNameFieldNumber;
const int WorldModify::kRemoveFieldNumber;
const int WorldModify::kCreateFieldNumber;
const int WorldModify::kClonedFieldNumber;
const int WorldModify::kClonedUriFieldNumber;
#endif  // !_MSC_VER

WorldModify::WorldModify()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.WorldModify)
}

void WorldModify::InitAsDefaultInstance() {
}

WorldModify::WorldModify(const WorldModify& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.WorldModify)
}

void WorldModify::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  world_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  remove_ = false;
  create_ = false;
  cloned_ = false;
  cloned_uri_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WorldModify::~WorldModify() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.WorldModify)
  SharedDtor();
}

void WorldModify::SharedDtor() {
  if (world_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete world_name_;
  }
  if (cloned_uri_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete cloned_uri_;
  }
  if (this != default_instance_) {
  }
}

void WorldModify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WorldModify::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WorldModify_descriptor_;
}

const WorldModify& WorldModify::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_world_5fmodify_2eproto();
  return *default_instance_;
}

WorldModify* WorldModify::default_instance_ = NULL;

WorldModify* WorldModify::New() const {
  return new WorldModify;
}

void WorldModify::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<WorldModify*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(remove_, cloned_);
    if (has_world_name()) {
      if (world_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        world_name_->clear();
      }
    }
    if (has_cloned_uri()) {
      if (cloned_uri_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        cloned_uri_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool WorldModify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.WorldModify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string world_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_world_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->world_name().data(), this->world_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "world_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_remove;
        break;
      }

      // optional bool remove = 2;
      case 2: {
        if (tag == 16) {
         parse_remove:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &remove_)));
          set_has_remove();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_create;
        break;
      }

      // optional bool create = 3;
      case 3: {
        if (tag == 24) {
         parse_create:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &create_)));
          set_has_create();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_cloned;
        break;
      }

      // optional bool cloned = 4;
      case 4: {
        if (tag == 32) {
         parse_cloned:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &cloned_)));
          set_has_cloned();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_cloned_uri;
        break;
      }

      // optional string cloned_uri = 5;
      case 5: {
        if (tag == 42) {
         parse_cloned_uri:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_cloned_uri()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->cloned_uri().data(), this->cloned_uri().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "cloned_uri");
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.WorldModify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.WorldModify)
  return false;
#undef DO_
}

void WorldModify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.WorldModify)
  // required string world_name = 1;
  if (has_world_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->world_name().data(), this->world_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "world_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->world_name(), output);
  }

  // optional bool remove = 2;
  if (has_remove()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->remove(), output);
  }

  // optional bool create = 3;
  if (has_create()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->create(), output);
  }

  // optional bool cloned = 4;
  if (has_cloned()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->cloned(), output);
  }

  // optional string cloned_uri = 5;
  if (has_cloned_uri()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->cloned_uri().data(), this->cloned_uri().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "cloned_uri");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->cloned_uri(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.WorldModify)
}

::google::protobuf::uint8* WorldModify::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.WorldModify)
  // required string world_name = 1;
  if (has_world_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->world_name().data(), this->world_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "world_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->world_name(), target);
  }

  // optional bool remove = 2;
  if (has_remove()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->remove(), target);
  }

  // optional bool create = 3;
  if (has_create()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->create(), target);
  }

  // optional bool cloned = 4;
  if (has_cloned()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->cloned(), target);
  }

  // optional string cloned_uri = 5;
  if (has_cloned_uri()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->cloned_uri().data(), this->cloned_uri().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "cloned_uri");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->cloned_uri(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.WorldModify)
  return target;
}

int WorldModify::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string world_name = 1;
    if (has_world_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->world_name());
    }

    // optional bool remove = 2;
    if (has_remove()) {
      total_size += 1 + 1;
    }

    // optional bool create = 3;
    if (has_create()) {
      total_size += 1 + 1;
    }

    // optional bool cloned = 4;
    if (has_cloned()) {
      total_size += 1 + 1;
    }

    // optional string cloned_uri = 5;
    if (has_cloned_uri()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->cloned_uri());
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

void WorldModify::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const WorldModify* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const WorldModify*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void WorldModify::MergeFrom(const WorldModify& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_world_name()) {
      set_world_name(from.world_name());
    }
    if (from.has_remove()) {
      set_remove(from.remove());
    }
    if (from.has_create()) {
      set_create(from.create());
    }
    if (from.has_cloned()) {
      set_cloned(from.cloned());
    }
    if (from.has_cloned_uri()) {
      set_cloned_uri(from.cloned_uri());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void WorldModify::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WorldModify::CopyFrom(const WorldModify& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorldModify::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void WorldModify::Swap(WorldModify* other) {
  if (other != this) {
    std::swap(world_name_, other->world_name_);
    std::swap(remove_, other->remove_);
    std::swap(create_, other->create_);
    std::swap(cloned_, other->cloned_);
    std::swap(cloned_uri_, other->cloned_uri_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata WorldModify::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WorldModify_descriptor_;
  metadata.reflection = WorldModify_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
