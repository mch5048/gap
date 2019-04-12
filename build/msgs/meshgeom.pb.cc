// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: meshgeom.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "meshgeom.pb.h"

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

const ::google::protobuf::Descriptor* MeshGeom_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MeshGeom_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_meshgeom_2eproto() {
  protobuf_AddDesc_meshgeom_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "meshgeom.proto");
  GOOGLE_CHECK(file != NULL);
  MeshGeom_descriptor_ = file->message_type(0);
  static const int MeshGeom_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MeshGeom, filename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MeshGeom, scale_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MeshGeom, submesh_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MeshGeom, center_submesh_),
  };
  MeshGeom_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MeshGeom_descriptor_,
      MeshGeom::default_instance_,
      MeshGeom_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MeshGeom, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MeshGeom, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MeshGeom));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_meshgeom_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MeshGeom_descriptor_, &MeshGeom::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_meshgeom_2eproto() {
  delete MeshGeom::default_instance_;
  delete MeshGeom_reflection_;
}

void protobuf_AddDesc_meshgeom_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_vector3d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016meshgeom.proto\022\013gazebo.msgs\032\016vector3d."
    "proto\"k\n\010MeshGeom\022\020\n\010filename\030\001 \002(\t\022$\n\005s"
    "cale\030\002 \001(\0132\025.gazebo.msgs.Vector3d\022\017\n\007sub"
    "mesh\030\003 \001(\t\022\026\n\016center_submesh\030\004 \001(\010", 154);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "meshgeom.proto", &protobuf_RegisterTypes);
  MeshGeom::default_instance_ = new MeshGeom();
  MeshGeom::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_meshgeom_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_meshgeom_2eproto {
  StaticDescriptorInitializer_meshgeom_2eproto() {
    protobuf_AddDesc_meshgeom_2eproto();
  }
} static_descriptor_initializer_meshgeom_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MeshGeom::kFilenameFieldNumber;
const int MeshGeom::kScaleFieldNumber;
const int MeshGeom::kSubmeshFieldNumber;
const int MeshGeom::kCenterSubmeshFieldNumber;
#endif  // !_MSC_VER

MeshGeom::MeshGeom()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.MeshGeom)
}

void MeshGeom::InitAsDefaultInstance() {
  scale_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
}

MeshGeom::MeshGeom(const MeshGeom& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.MeshGeom)
}

void MeshGeom::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  scale_ = NULL;
  submesh_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  center_submesh_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MeshGeom::~MeshGeom() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.MeshGeom)
  SharedDtor();
}

void MeshGeom::SharedDtor() {
  if (filename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete filename_;
  }
  if (submesh_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete submesh_;
  }
  if (this != default_instance_) {
    delete scale_;
  }
}

void MeshGeom::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MeshGeom::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MeshGeom_descriptor_;
}

const MeshGeom& MeshGeom::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_meshgeom_2eproto();
  return *default_instance_;
}

MeshGeom* MeshGeom::default_instance_ = NULL;

MeshGeom* MeshGeom::New() const {
  return new MeshGeom;
}

void MeshGeom::Clear() {
  if (_has_bits_[0 / 32] & 15) {
    if (has_filename()) {
      if (filename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        filename_->clear();
      }
    }
    if (has_scale()) {
      if (scale_ != NULL) scale_->::gazebo::msgs::Vector3d::Clear();
    }
    if (has_submesh()) {
      if (submesh_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        submesh_->clear();
      }
    }
    center_submesh_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MeshGeom::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.MeshGeom)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string filename = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_filename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->filename().data(), this->filename().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "filename");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_scale;
        break;
      }

      // optional .gazebo.msgs.Vector3d scale = 2;
      case 2: {
        if (tag == 18) {
         parse_scale:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_scale()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_submesh;
        break;
      }

      // optional string submesh = 3;
      case 3: {
        if (tag == 26) {
         parse_submesh:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_submesh()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->submesh().data(), this->submesh().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "submesh");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_center_submesh;
        break;
      }

      // optional bool center_submesh = 4;
      case 4: {
        if (tag == 32) {
         parse_center_submesh:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &center_submesh_)));
          set_has_center_submesh();
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.MeshGeom)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.MeshGeom)
  return false;
#undef DO_
}

void MeshGeom::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.MeshGeom)
  // required string filename = 1;
  if (has_filename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->filename().data(), this->filename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "filename");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->filename(), output);
  }

  // optional .gazebo.msgs.Vector3d scale = 2;
  if (has_scale()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->scale(), output);
  }

  // optional string submesh = 3;
  if (has_submesh()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->submesh().data(), this->submesh().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "submesh");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->submesh(), output);
  }

  // optional bool center_submesh = 4;
  if (has_center_submesh()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->center_submesh(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.MeshGeom)
}

::google::protobuf::uint8* MeshGeom::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.MeshGeom)
  // required string filename = 1;
  if (has_filename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->filename().data(), this->filename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "filename");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->filename(), target);
  }

  // optional .gazebo.msgs.Vector3d scale = 2;
  if (has_scale()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->scale(), target);
  }

  // optional string submesh = 3;
  if (has_submesh()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->submesh().data(), this->submesh().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "submesh");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->submesh(), target);
  }

  // optional bool center_submesh = 4;
  if (has_center_submesh()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->center_submesh(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.MeshGeom)
  return target;
}

int MeshGeom::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string filename = 1;
    if (has_filename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->filename());
    }

    // optional .gazebo.msgs.Vector3d scale = 2;
    if (has_scale()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->scale());
    }

    // optional string submesh = 3;
    if (has_submesh()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->submesh());
    }

    // optional bool center_submesh = 4;
    if (has_center_submesh()) {
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

void MeshGeom::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MeshGeom* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MeshGeom*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MeshGeom::MergeFrom(const MeshGeom& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_filename()) {
      set_filename(from.filename());
    }
    if (from.has_scale()) {
      mutable_scale()->::gazebo::msgs::Vector3d::MergeFrom(from.scale());
    }
    if (from.has_submesh()) {
      set_submesh(from.submesh());
    }
    if (from.has_center_submesh()) {
      set_center_submesh(from.center_submesh());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MeshGeom::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MeshGeom::CopyFrom(const MeshGeom& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MeshGeom::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_scale()) {
    if (!this->scale().IsInitialized()) return false;
  }
  return true;
}

void MeshGeom::Swap(MeshGeom* other) {
  if (other != this) {
    std::swap(filename_, other->filename_);
    std::swap(scale_, other->scale_);
    std::swap(submesh_, other->submesh_);
    std::swap(center_submesh_, other->center_submesh_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MeshGeom::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MeshGeom_descriptor_;
  metadata.reflection = MeshGeom_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
