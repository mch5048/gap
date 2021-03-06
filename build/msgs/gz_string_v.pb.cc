// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz_string_v.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "gz_string_v.pb.h"

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

const ::google::protobuf::Descriptor* GzString_V_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GzString_V_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_gz_5fstring_5fv_2eproto() {
  protobuf_AddDesc_gz_5fstring_5fv_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "gz_string_v.proto");
  GOOGLE_CHECK(file != NULL);
  GzString_V_descriptor_ = file->message_type(0);
  static const int GzString_V_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GzString_V, data_),
  };
  GzString_V_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GzString_V_descriptor_,
      GzString_V::default_instance_,
      GzString_V_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GzString_V, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GzString_V, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GzString_V));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_gz_5fstring_5fv_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GzString_V_descriptor_, &GzString_V::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_gz_5fstring_5fv_2eproto() {
  delete GzString_V::default_instance_;
  delete GzString_V_reflection_;
}

void protobuf_AddDesc_gz_5fstring_5fv_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021gz_string_v.proto\022\013gazebo.msgs\"\032\n\nGzSt"
    "ring_V\022\014\n\004data\030\001 \003(\t", 60);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz_string_v.proto", &protobuf_RegisterTypes);
  GzString_V::default_instance_ = new GzString_V();
  GzString_V::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_gz_5fstring_5fv_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_gz_5fstring_5fv_2eproto {
  StaticDescriptorInitializer_gz_5fstring_5fv_2eproto() {
    protobuf_AddDesc_gz_5fstring_5fv_2eproto();
  }
} static_descriptor_initializer_gz_5fstring_5fv_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int GzString_V::kDataFieldNumber;
#endif  // !_MSC_VER

GzString_V::GzString_V()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.GzString_V)
}

void GzString_V::InitAsDefaultInstance() {
}

GzString_V::GzString_V(const GzString_V& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.GzString_V)
}

void GzString_V::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GzString_V::~GzString_V() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.GzString_V)
  SharedDtor();
}

void GzString_V::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GzString_V::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GzString_V::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GzString_V_descriptor_;
}

const GzString_V& GzString_V::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_gz_5fstring_5fv_2eproto();
  return *default_instance_;
}

GzString_V* GzString_V::default_instance_ = NULL;

GzString_V* GzString_V::New() const {
  return new GzString_V;
}

void GzString_V::Clear() {
  data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GzString_V::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.GzString_V)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string data = 1;
      case 1: {
        if (tag == 10) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_data()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->data(this->data_size() - 1).data(),
            this->data(this->data_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "data");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_data;
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.GzString_V)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.GzString_V)
  return false;
#undef DO_
}

void GzString_V::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.GzString_V)
  // repeated string data = 1;
  for (int i = 0; i < this->data_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
    this->data(i).data(), this->data(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE,
    "data");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->data(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.GzString_V)
}

::google::protobuf::uint8* GzString_V::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.GzString_V)
  // repeated string data = 1;
  for (int i = 0; i < this->data_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->data(i).data(), this->data(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "data");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->data(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.GzString_V)
  return target;
}

int GzString_V::ByteSize() const {
  int total_size = 0;

  // repeated string data = 1;
  total_size += 1 * this->data_size();
  for (int i = 0; i < this->data_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->data(i));
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

void GzString_V::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GzString_V* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GzString_V*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GzString_V::MergeFrom(const GzString_V& from) {
  GOOGLE_CHECK_NE(&from, this);
  data_.MergeFrom(from.data_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GzString_V::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GzString_V::CopyFrom(const GzString_V& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GzString_V::IsInitialized() const {

  return true;
}

void GzString_V::Swap(GzString_V* other) {
  if (other != this) {
    data_.Swap(&other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GzString_V::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GzString_V_descriptor_;
  metadata.reflection = GzString_V_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
