// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: polylinegeom.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "polylinegeom.pb.h"

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

const ::google::protobuf::Descriptor* Polyline_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Polyline_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_polylinegeom_2eproto() {
  protobuf_AddDesc_polylinegeom_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "polylinegeom.proto");
  GOOGLE_CHECK(file != NULL);
  Polyline_descriptor_ = file->message_type(0);
  static const int Polyline_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Polyline, height_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Polyline, point_),
  };
  Polyline_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Polyline_descriptor_,
      Polyline::default_instance_,
      Polyline_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Polyline, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Polyline, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Polyline));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_polylinegeom_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Polyline_descriptor_, &Polyline::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_polylinegeom_2eproto() {
  delete Polyline::default_instance_;
  delete Polyline_reflection_;
}

void protobuf_AddDesc_polylinegeom_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_vector2d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022polylinegeom.proto\022\013gazebo.msgs\032\016vecto"
    "r2d.proto\"@\n\010Polyline\022\016\n\006height\030\001 \002(\001\022$\n"
    "\005point\030\002 \003(\0132\025.gazebo.msgs.Vector2d", 115);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "polylinegeom.proto", &protobuf_RegisterTypes);
  Polyline::default_instance_ = new Polyline();
  Polyline::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_polylinegeom_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_polylinegeom_2eproto {
  StaticDescriptorInitializer_polylinegeom_2eproto() {
    protobuf_AddDesc_polylinegeom_2eproto();
  }
} static_descriptor_initializer_polylinegeom_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Polyline::kHeightFieldNumber;
const int Polyline::kPointFieldNumber;
#endif  // !_MSC_VER

Polyline::Polyline()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Polyline)
}

void Polyline::InitAsDefaultInstance() {
}

Polyline::Polyline(const Polyline& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Polyline)
}

void Polyline::SharedCtor() {
  _cached_size_ = 0;
  height_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Polyline::~Polyline() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Polyline)
  SharedDtor();
}

void Polyline::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Polyline::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Polyline::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Polyline_descriptor_;
}

const Polyline& Polyline::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_polylinegeom_2eproto();
  return *default_instance_;
}

Polyline* Polyline::default_instance_ = NULL;

Polyline* Polyline::New() const {
  return new Polyline;
}

void Polyline::Clear() {
  height_ = 0;
  point_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Polyline::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.Polyline)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required double height = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &height_)));
          set_has_height();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_point;
        break;
      }

      // repeated .gazebo.msgs.Vector2d point = 2;
      case 2: {
        if (tag == 18) {
         parse_point:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_point()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_point;
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.Polyline)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.Polyline)
  return false;
#undef DO_
}

void Polyline::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.Polyline)
  // required double height = 1;
  if (has_height()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->height(), output);
  }

  // repeated .gazebo.msgs.Vector2d point = 2;
  for (int i = 0; i < this->point_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->point(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.Polyline)
}

::google::protobuf::uint8* Polyline::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Polyline)
  // required double height = 1;
  if (has_height()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->height(), target);
  }

  // repeated .gazebo.msgs.Vector2d point = 2;
  for (int i = 0; i < this->point_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->point(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Polyline)
  return target;
}

int Polyline::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required double height = 1;
    if (has_height()) {
      total_size += 1 + 8;
    }

  }
  // repeated .gazebo.msgs.Vector2d point = 2;
  total_size += 1 * this->point_size();
  for (int i = 0; i < this->point_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->point(i));
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

void Polyline::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Polyline* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Polyline*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Polyline::MergeFrom(const Polyline& from) {
  GOOGLE_CHECK_NE(&from, this);
  point_.MergeFrom(from.point_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_height()) {
      set_height(from.height());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Polyline::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Polyline::CopyFrom(const Polyline& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Polyline::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->point())) return false;
  return true;
}

void Polyline::Swap(Polyline* other) {
  if (other != this) {
    std::swap(height_, other->height_);
    point_.Swap(&other->point_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Polyline::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Polyline_descriptor_;
  metadata.reflection = Polyline_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
