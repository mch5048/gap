// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: link_data.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "link_data.pb.h"

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

const ::google::protobuf::Descriptor* LinkData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LinkData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_link_5fdata_2eproto() {
  protobuf_AddDesc_link_5fdata_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "link_data.proto");
  GOOGLE_CHECK(file != NULL);
  LinkData_descriptor_ = file->message_type(0);
  static const int LinkData_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkData, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkData, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkData, linear_velocity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkData, angular_velocity_),
  };
  LinkData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LinkData_descriptor_,
      LinkData::default_instance_,
      LinkData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LinkData));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_link_5fdata_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LinkData_descriptor_, &LinkData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_link_5fdata_2eproto() {
  delete LinkData::default_instance_;
  delete LinkData_reflection_;
}

void protobuf_AddDesc_link_5fdata_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_vector3d_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_time_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017link_data.proto\022\013gazebo.msgs\032\016vector3d"
    ".proto\032\ntime.proto\"\232\001\n\010LinkData\022\037\n\004time\030"
    "\001 \002(\0132\021.gazebo.msgs.Time\022\014\n\004name\030\002 \002(\t\022."
    "\n\017linear_velocity\030\003 \001(\0132\025.gazebo.msgs.Ve"
    "ctor3d\022/\n\020angular_velocity\030\004 \001(\0132\025.gazeb"
    "o.msgs.Vector3d", 215);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "link_data.proto", &protobuf_RegisterTypes);
  LinkData::default_instance_ = new LinkData();
  LinkData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_link_5fdata_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_link_5fdata_2eproto {
  StaticDescriptorInitializer_link_5fdata_2eproto() {
    protobuf_AddDesc_link_5fdata_2eproto();
  }
} static_descriptor_initializer_link_5fdata_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int LinkData::kTimeFieldNumber;
const int LinkData::kNameFieldNumber;
const int LinkData::kLinearVelocityFieldNumber;
const int LinkData::kAngularVelocityFieldNumber;
#endif  // !_MSC_VER

LinkData::LinkData()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.LinkData)
}

void LinkData::InitAsDefaultInstance() {
  time_ = const_cast< ::gazebo::msgs::Time*>(&::gazebo::msgs::Time::default_instance());
  linear_velocity_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
  angular_velocity_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
}

LinkData::LinkData(const LinkData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.LinkData)
}

void LinkData::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  time_ = NULL;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  linear_velocity_ = NULL;
  angular_velocity_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LinkData::~LinkData() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.LinkData)
  SharedDtor();
}

void LinkData::SharedDtor() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (this != default_instance_) {
    delete time_;
    delete linear_velocity_;
    delete angular_velocity_;
  }
}

void LinkData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LinkData_descriptor_;
}

const LinkData& LinkData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_link_5fdata_2eproto();
  return *default_instance_;
}

LinkData* LinkData::default_instance_ = NULL;

LinkData* LinkData::New() const {
  return new LinkData;
}

void LinkData::Clear() {
  if (_has_bits_[0 / 32] & 15) {
    if (has_time()) {
      if (time_ != NULL) time_->::gazebo::msgs::Time::Clear();
    }
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        name_->clear();
      }
    }
    if (has_linear_velocity()) {
      if (linear_velocity_ != NULL) linear_velocity_->::gazebo::msgs::Vector3d::Clear();
    }
    if (has_angular_velocity()) {
      if (angular_velocity_ != NULL) angular_velocity_->::gazebo::msgs::Vector3d::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LinkData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.LinkData)
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
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // required string name = 2;
      case 2: {
        if (tag == 18) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_linear_velocity;
        break;
      }

      // optional .gazebo.msgs.Vector3d linear_velocity = 3;
      case 3: {
        if (tag == 26) {
         parse_linear_velocity:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_linear_velocity()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_angular_velocity;
        break;
      }

      // optional .gazebo.msgs.Vector3d angular_velocity = 4;
      case 4: {
        if (tag == 34) {
         parse_angular_velocity:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_angular_velocity()));
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.LinkData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.LinkData)
  return false;
#undef DO_
}

void LinkData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.LinkData)
  // required .gazebo.msgs.Time time = 1;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->time(), output);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // optional .gazebo.msgs.Vector3d linear_velocity = 3;
  if (has_linear_velocity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->linear_velocity(), output);
  }

  // optional .gazebo.msgs.Vector3d angular_velocity = 4;
  if (has_angular_velocity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->angular_velocity(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.LinkData)
}

::google::protobuf::uint8* LinkData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.LinkData)
  // required .gazebo.msgs.Time time = 1;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->time(), target);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // optional .gazebo.msgs.Vector3d linear_velocity = 3;
  if (has_linear_velocity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->linear_velocity(), target);
  }

  // optional .gazebo.msgs.Vector3d angular_velocity = 4;
  if (has_angular_velocity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->angular_velocity(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.LinkData)
  return target;
}

int LinkData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .gazebo.msgs.Time time = 1;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->time());
    }

    // required string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional .gazebo.msgs.Vector3d linear_velocity = 3;
    if (has_linear_velocity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->linear_velocity());
    }

    // optional .gazebo.msgs.Vector3d angular_velocity = 4;
    if (has_angular_velocity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->angular_velocity());
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

void LinkData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LinkData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LinkData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LinkData::MergeFrom(const LinkData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time()) {
      mutable_time()->::gazebo::msgs::Time::MergeFrom(from.time());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_linear_velocity()) {
      mutable_linear_velocity()->::gazebo::msgs::Vector3d::MergeFrom(from.linear_velocity());
    }
    if (from.has_angular_velocity()) {
      mutable_angular_velocity()->::gazebo::msgs::Vector3d::MergeFrom(from.angular_velocity());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LinkData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkData::CopyFrom(const LinkData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_time()) {
    if (!this->time().IsInitialized()) return false;
  }
  if (has_linear_velocity()) {
    if (!this->linear_velocity().IsInitialized()) return false;
  }
  if (has_angular_velocity()) {
    if (!this->angular_velocity().IsInitialized()) return false;
  }
  return true;
}

void LinkData::Swap(LinkData* other) {
  if (other != this) {
    std::swap(time_, other->time_);
    std::swap(name_, other->name_);
    std::swap(linear_velocity_, other->linear_velocity_);
    std::swap(angular_velocity_, other->angular_velocity_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LinkData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LinkData_descriptor_;
  metadata.reflection = LinkData_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
