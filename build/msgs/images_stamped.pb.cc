// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: images_stamped.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "images_stamped.pb.h"

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

const ::google::protobuf::Descriptor* ImagesStamped_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ImagesStamped_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_images_5fstamped_2eproto() {
  protobuf_AddDesc_images_5fstamped_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "images_stamped.proto");
  GOOGLE_CHECK(file != NULL);
  ImagesStamped_descriptor_ = file->message_type(0);
  static const int ImagesStamped_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImagesStamped, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImagesStamped, image_),
  };
  ImagesStamped_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ImagesStamped_descriptor_,
      ImagesStamped::default_instance_,
      ImagesStamped_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImagesStamped, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImagesStamped, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ImagesStamped));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_images_5fstamped_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ImagesStamped_descriptor_, &ImagesStamped::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_images_5fstamped_2eproto() {
  delete ImagesStamped::default_instance_;
  delete ImagesStamped_reflection_;
}

void protobuf_AddDesc_images_5fstamped_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_time_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_image_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024images_stamped.proto\022\013gazebo.msgs\032\ntim"
    "e.proto\032\013image.proto\"S\n\rImagesStamped\022\037\n"
    "\004time\030\001 \002(\0132\021.gazebo.msgs.Time\022!\n\005image\030"
    "\002 \003(\0132\022.gazebo.msgs.Image", 145);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "images_stamped.proto", &protobuf_RegisterTypes);
  ImagesStamped::default_instance_ = new ImagesStamped();
  ImagesStamped::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_images_5fstamped_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_images_5fstamped_2eproto {
  StaticDescriptorInitializer_images_5fstamped_2eproto() {
    protobuf_AddDesc_images_5fstamped_2eproto();
  }
} static_descriptor_initializer_images_5fstamped_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ImagesStamped::kTimeFieldNumber;
const int ImagesStamped::kImageFieldNumber;
#endif  // !_MSC_VER

ImagesStamped::ImagesStamped()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.ImagesStamped)
}

void ImagesStamped::InitAsDefaultInstance() {
  time_ = const_cast< ::gazebo::msgs::Time*>(&::gazebo::msgs::Time::default_instance());
}

ImagesStamped::ImagesStamped(const ImagesStamped& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.ImagesStamped)
}

void ImagesStamped::SharedCtor() {
  _cached_size_ = 0;
  time_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ImagesStamped::~ImagesStamped() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.ImagesStamped)
  SharedDtor();
}

void ImagesStamped::SharedDtor() {
  if (this != default_instance_) {
    delete time_;
  }
}

void ImagesStamped::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ImagesStamped::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ImagesStamped_descriptor_;
}

const ImagesStamped& ImagesStamped::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_images_5fstamped_2eproto();
  return *default_instance_;
}

ImagesStamped* ImagesStamped::default_instance_ = NULL;

ImagesStamped* ImagesStamped::New() const {
  return new ImagesStamped;
}

void ImagesStamped::Clear() {
  if (has_time()) {
    if (time_ != NULL) time_->::gazebo::msgs::Time::Clear();
  }
  image_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ImagesStamped::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.ImagesStamped)
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
        if (input->ExpectTag(18)) goto parse_image;
        break;
      }

      // repeated .gazebo.msgs.Image image = 2;
      case 2: {
        if (tag == 18) {
         parse_image:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_image()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_image;
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.ImagesStamped)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.ImagesStamped)
  return false;
#undef DO_
}

void ImagesStamped::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.ImagesStamped)
  // required .gazebo.msgs.Time time = 1;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->time(), output);
  }

  // repeated .gazebo.msgs.Image image = 2;
  for (int i = 0; i < this->image_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->image(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.ImagesStamped)
}

::google::protobuf::uint8* ImagesStamped::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.ImagesStamped)
  // required .gazebo.msgs.Time time = 1;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->time(), target);
  }

  // repeated .gazebo.msgs.Image image = 2;
  for (int i = 0; i < this->image_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->image(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.ImagesStamped)
  return target;
}

int ImagesStamped::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .gazebo.msgs.Time time = 1;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->time());
    }

  }
  // repeated .gazebo.msgs.Image image = 2;
  total_size += 1 * this->image_size();
  for (int i = 0; i < this->image_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->image(i));
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

void ImagesStamped::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ImagesStamped* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ImagesStamped*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ImagesStamped::MergeFrom(const ImagesStamped& from) {
  GOOGLE_CHECK_NE(&from, this);
  image_.MergeFrom(from.image_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time()) {
      mutable_time()->::gazebo::msgs::Time::MergeFrom(from.time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ImagesStamped::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ImagesStamped::CopyFrom(const ImagesStamped& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImagesStamped::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_time()) {
    if (!this->time().IsInitialized()) return false;
  }
  if (!::google::protobuf::internal::AllAreInitialized(this->image())) return false;
  return true;
}

void ImagesStamped::Swap(ImagesStamped* other) {
  if (other != this) {
    std::swap(time_, other->time_);
    image_.Swap(&other->image_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ImagesStamped::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ImagesStamped_descriptor_;
  metadata.reflection = ImagesStamped_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
