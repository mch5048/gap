// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: visual_utils_response.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "visual_utils_response.pb.h"

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

namespace gap {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* VisualUtilsResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  VisualUtilsResponse_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* VisualUtilsResponse_Type_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_visual_5futils_5fresponse_2eproto() {
  protobuf_AddDesc_visual_5futils_5fresponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "visual_utils_response.proto");
  GOOGLE_CHECK(file != NULL);
  VisualUtilsResponse_descriptor_ = file->message_type(0);
  static const int VisualUtilsResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VisualUtilsResponse, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VisualUtilsResponse, origin_),
  };
  VisualUtilsResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      VisualUtilsResponse_descriptor_,
      VisualUtilsResponse::default_instance_,
      VisualUtilsResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VisualUtilsResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VisualUtilsResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(VisualUtilsResponse));
  VisualUtilsResponse_Type_descriptor_ = VisualUtilsResponse_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_visual_5futils_5fresponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    VisualUtilsResponse_descriptor_, &VisualUtilsResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_visual_5futils_5fresponse_2eproto() {
  delete VisualUtilsResponse::default_instance_;
  delete VisualUtilsResponse_reflection_;
}

void protobuf_AddDesc_visual_5futils_5fresponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033visual_utils_response.proto\022\010gap.msgs\""
    "l\n\023VisualUtilsResponse\0220\n\004type\030\001 \001(\0162\".g"
    "ap.msgs.VisualUtilsResponse.Type\022\016\n\006orig"
    "in\030\002 \001(\t\"\023\n\004Type\022\013\n\007UPDATED\020\001", 149);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "visual_utils_response.proto", &protobuf_RegisterTypes);
  VisualUtilsResponse::default_instance_ = new VisualUtilsResponse();
  VisualUtilsResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_visual_5futils_5fresponse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_visual_5futils_5fresponse_2eproto {
  StaticDescriptorInitializer_visual_5futils_5fresponse_2eproto() {
    protobuf_AddDesc_visual_5futils_5fresponse_2eproto();
  }
} static_descriptor_initializer_visual_5futils_5fresponse_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* VisualUtilsResponse_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return VisualUtilsResponse_Type_descriptor_;
}
bool VisualUtilsResponse_Type_IsValid(int value) {
  switch(value) {
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const VisualUtilsResponse_Type VisualUtilsResponse::UPDATED;
const VisualUtilsResponse_Type VisualUtilsResponse::Type_MIN;
const VisualUtilsResponse_Type VisualUtilsResponse::Type_MAX;
const int VisualUtilsResponse::Type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int VisualUtilsResponse::kTypeFieldNumber;
const int VisualUtilsResponse::kOriginFieldNumber;
#endif  // !_MSC_VER

VisualUtilsResponse::VisualUtilsResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gap.msgs.VisualUtilsResponse)
}

void VisualUtilsResponse::InitAsDefaultInstance() {
}

VisualUtilsResponse::VisualUtilsResponse(const VisualUtilsResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gap.msgs.VisualUtilsResponse)
}

void VisualUtilsResponse::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_ = 1;
  origin_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

VisualUtilsResponse::~VisualUtilsResponse() {
  // @@protoc_insertion_point(destructor:gap.msgs.VisualUtilsResponse)
  SharedDtor();
}

void VisualUtilsResponse::SharedDtor() {
  if (origin_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete origin_;
  }
  if (this != default_instance_) {
  }
}

void VisualUtilsResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VisualUtilsResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return VisualUtilsResponse_descriptor_;
}

const VisualUtilsResponse& VisualUtilsResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_visual_5futils_5fresponse_2eproto();
  return *default_instance_;
}

VisualUtilsResponse* VisualUtilsResponse::default_instance_ = NULL;

VisualUtilsResponse* VisualUtilsResponse::New() const {
  return new VisualUtilsResponse;
}

void VisualUtilsResponse::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    type_ = 1;
    if (has_origin()) {
      if (origin_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        origin_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool VisualUtilsResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gap.msgs.VisualUtilsResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .gap.msgs.VisualUtilsResponse.Type type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::gap::msgs::VisualUtilsResponse_Type_IsValid(value)) {
            set_type(static_cast< ::gap::msgs::VisualUtilsResponse_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_origin;
        break;
      }

      // optional string origin = 2;
      case 2: {
        if (tag == 18) {
         parse_origin:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_origin()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->origin().data(), this->origin().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "origin");
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
  // @@protoc_insertion_point(parse_success:gap.msgs.VisualUtilsResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gap.msgs.VisualUtilsResponse)
  return false;
#undef DO_
}

void VisualUtilsResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gap.msgs.VisualUtilsResponse)
  // optional .gap.msgs.VisualUtilsResponse.Type type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional string origin = 2;
  if (has_origin()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->origin().data(), this->origin().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "origin");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->origin(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gap.msgs.VisualUtilsResponse)
}

::google::protobuf::uint8* VisualUtilsResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gap.msgs.VisualUtilsResponse)
  // optional .gap.msgs.VisualUtilsResponse.Type type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional string origin = 2;
  if (has_origin()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->origin().data(), this->origin().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "origin");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->origin(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gap.msgs.VisualUtilsResponse)
  return target;
}

int VisualUtilsResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .gap.msgs.VisualUtilsResponse.Type type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional string origin = 2;
    if (has_origin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->origin());
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

void VisualUtilsResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const VisualUtilsResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const VisualUtilsResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void VisualUtilsResponse::MergeFrom(const VisualUtilsResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_origin()) {
      set_origin(from.origin());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void VisualUtilsResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VisualUtilsResponse::CopyFrom(const VisualUtilsResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VisualUtilsResponse::IsInitialized() const {

  return true;
}

void VisualUtilsResponse::Swap(VisualUtilsResponse* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(origin_, other->origin_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata VisualUtilsResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = VisualUtilsResponse_descriptor_;
  metadata.reflection = VisualUtilsResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gap

// @@protoc_insertion_point(global_scope)
