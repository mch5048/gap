// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: camera_utils_response.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "camera_utils_response.pb.h"

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

const ::google::protobuf::Descriptor* CameraUtilsResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CameraUtilsResponse_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* CameraUtilsResponse_Type_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_camera_5futils_5fresponse_2eproto() {
  protobuf_AddDesc_camera_5futils_5fresponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "camera_utils_response.proto");
  GOOGLE_CHECK(file != NULL);
  CameraUtilsResponse_descriptor_ = file->message_type(0);
  static const int CameraUtilsResponse_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CameraUtilsResponse, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CameraUtilsResponse, filename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CameraUtilsResponse, success_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CameraUtilsResponse, pose_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CameraUtilsResponse, projections_),
  };
  CameraUtilsResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CameraUtilsResponse_descriptor_,
      CameraUtilsResponse::default_instance_,
      CameraUtilsResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CameraUtilsResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CameraUtilsResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CameraUtilsResponse));
  CameraUtilsResponse_Type_descriptor_ = CameraUtilsResponse_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_camera_5futils_5fresponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CameraUtilsResponse_descriptor_, &CameraUtilsResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_camera_5futils_5fresponse_2eproto() {
  delete CameraUtilsResponse::default_instance_;
  delete CameraUtilsResponse_reflection_;
}

void protobuf_AddDesc_camera_5futils_5fresponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_pose_2eproto();
  ::gap::msgs::protobuf_AddDesc_point_5fprojection_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033camera_utils_response.proto\022\010gap.msgs\032"
    "\npose.proto\032\026point_projection.proto\"\363\001\n\023"
    "CameraUtilsResponse\0220\n\004type\030\001 \001(\0162\".gap."
    "msgs.CameraUtilsResponse.Type\022\020\n\010filenam"
    "e\030\002 \001(\t\022\017\n\007success\030\003 \001(\010\022\037\n\004pose\030\004 \001(\0132\021"
    ".gazebo.msgs.Pose\022.\n\013projections\030\005 \003(\0132\031"
    ".gap.msgs.PointProjection\"6\n\004Type\022\013\n\007CAP"
    "TURE\020\001\022\007\n\003DIR\020\002\022\010\n\004MOVE\020\003\022\016\n\nPROJECTION\020"
    "\004", 321);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "camera_utils_response.proto", &protobuf_RegisterTypes);
  CameraUtilsResponse::default_instance_ = new CameraUtilsResponse();
  CameraUtilsResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_camera_5futils_5fresponse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_camera_5futils_5fresponse_2eproto {
  StaticDescriptorInitializer_camera_5futils_5fresponse_2eproto() {
    protobuf_AddDesc_camera_5futils_5fresponse_2eproto();
  }
} static_descriptor_initializer_camera_5futils_5fresponse_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* CameraUtilsResponse_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CameraUtilsResponse_Type_descriptor_;
}
bool CameraUtilsResponse_Type_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const CameraUtilsResponse_Type CameraUtilsResponse::CAPTURE;
const CameraUtilsResponse_Type CameraUtilsResponse::DIR;
const CameraUtilsResponse_Type CameraUtilsResponse::MOVE;
const CameraUtilsResponse_Type CameraUtilsResponse::PROJECTION;
const CameraUtilsResponse_Type CameraUtilsResponse::Type_MIN;
const CameraUtilsResponse_Type CameraUtilsResponse::Type_MAX;
const int CameraUtilsResponse::Type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int CameraUtilsResponse::kTypeFieldNumber;
const int CameraUtilsResponse::kFilenameFieldNumber;
const int CameraUtilsResponse::kSuccessFieldNumber;
const int CameraUtilsResponse::kPoseFieldNumber;
const int CameraUtilsResponse::kProjectionsFieldNumber;
#endif  // !_MSC_VER

CameraUtilsResponse::CameraUtilsResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gap.msgs.CameraUtilsResponse)
}

void CameraUtilsResponse::InitAsDefaultInstance() {
  pose_ = const_cast< ::gazebo::msgs::Pose*>(&::gazebo::msgs::Pose::default_instance());
}

CameraUtilsResponse::CameraUtilsResponse(const CameraUtilsResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gap.msgs.CameraUtilsResponse)
}

void CameraUtilsResponse::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_ = 1;
  filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  success_ = false;
  pose_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CameraUtilsResponse::~CameraUtilsResponse() {
  // @@protoc_insertion_point(destructor:gap.msgs.CameraUtilsResponse)
  SharedDtor();
}

void CameraUtilsResponse::SharedDtor() {
  if (filename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete filename_;
  }
  if (this != default_instance_) {
    delete pose_;
  }
}

void CameraUtilsResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CameraUtilsResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CameraUtilsResponse_descriptor_;
}

const CameraUtilsResponse& CameraUtilsResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_camera_5futils_5fresponse_2eproto();
  return *default_instance_;
}

CameraUtilsResponse* CameraUtilsResponse::default_instance_ = NULL;

CameraUtilsResponse* CameraUtilsResponse::New() const {
  return new CameraUtilsResponse;
}

void CameraUtilsResponse::Clear() {
  if (_has_bits_[0 / 32] & 15) {
    type_ = 1;
    if (has_filename()) {
      if (filename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        filename_->clear();
      }
    }
    success_ = false;
    if (has_pose()) {
      if (pose_ != NULL) pose_->::gazebo::msgs::Pose::Clear();
    }
  }
  projections_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CameraUtilsResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gap.msgs.CameraUtilsResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .gap.msgs.CameraUtilsResponse.Type type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::gap::msgs::CameraUtilsResponse_Type_IsValid(value)) {
            set_type(static_cast< ::gap::msgs::CameraUtilsResponse_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_filename;
        break;
      }

      // optional string filename = 2;
      case 2: {
        if (tag == 18) {
         parse_filename:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_filename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->filename().data(), this->filename().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "filename");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_success;
        break;
      }

      // optional bool success = 3;
      case 3: {
        if (tag == 24) {
         parse_success:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &success_)));
          set_has_success();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_pose;
        break;
      }

      // optional .gazebo.msgs.Pose pose = 4;
      case 4: {
        if (tag == 34) {
         parse_pose:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pose()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_projections;
        break;
      }

      // repeated .gap.msgs.PointProjection projections = 5;
      case 5: {
        if (tag == 42) {
         parse_projections:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_projections()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_projections;
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
  // @@protoc_insertion_point(parse_success:gap.msgs.CameraUtilsResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gap.msgs.CameraUtilsResponse)
  return false;
#undef DO_
}

void CameraUtilsResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gap.msgs.CameraUtilsResponse)
  // optional .gap.msgs.CameraUtilsResponse.Type type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional string filename = 2;
  if (has_filename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->filename().data(), this->filename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "filename");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->filename(), output);
  }

  // optional bool success = 3;
  if (has_success()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->success(), output);
  }

  // optional .gazebo.msgs.Pose pose = 4;
  if (has_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->pose(), output);
  }

  // repeated .gap.msgs.PointProjection projections = 5;
  for (int i = 0; i < this->projections_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->projections(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gap.msgs.CameraUtilsResponse)
}

::google::protobuf::uint8* CameraUtilsResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gap.msgs.CameraUtilsResponse)
  // optional .gap.msgs.CameraUtilsResponse.Type type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional string filename = 2;
  if (has_filename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->filename().data(), this->filename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "filename");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->filename(), target);
  }

  // optional bool success = 3;
  if (has_success()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->success(), target);
  }

  // optional .gazebo.msgs.Pose pose = 4;
  if (has_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->pose(), target);
  }

  // repeated .gap.msgs.PointProjection projections = 5;
  for (int i = 0; i < this->projections_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->projections(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gap.msgs.CameraUtilsResponse)
  return target;
}

int CameraUtilsResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .gap.msgs.CameraUtilsResponse.Type type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional string filename = 2;
    if (has_filename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->filename());
    }

    // optional bool success = 3;
    if (has_success()) {
      total_size += 1 + 1;
    }

    // optional .gazebo.msgs.Pose pose = 4;
    if (has_pose()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->pose());
    }

  }
  // repeated .gap.msgs.PointProjection projections = 5;
  total_size += 1 * this->projections_size();
  for (int i = 0; i < this->projections_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->projections(i));
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

void CameraUtilsResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CameraUtilsResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CameraUtilsResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CameraUtilsResponse::MergeFrom(const CameraUtilsResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  projections_.MergeFrom(from.projections_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_filename()) {
      set_filename(from.filename());
    }
    if (from.has_success()) {
      set_success(from.success());
    }
    if (from.has_pose()) {
      mutable_pose()->::gazebo::msgs::Pose::MergeFrom(from.pose());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CameraUtilsResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CameraUtilsResponse::CopyFrom(const CameraUtilsResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CameraUtilsResponse::IsInitialized() const {

  if (has_pose()) {
    if (!this->pose().IsInitialized()) return false;
  }
  if (!::google::protobuf::internal::AllAreInitialized(this->projections())) return false;
  return true;
}

void CameraUtilsResponse::Swap(CameraUtilsResponse* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(filename_, other->filename_);
    std::swap(success_, other->success_);
    std::swap(pose_, other->pose_);
    projections_.Swap(&other->projections_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CameraUtilsResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CameraUtilsResponse_descriptor_;
  metadata.reflection = CameraUtilsResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gap

// @@protoc_insertion_point(global_scope)
