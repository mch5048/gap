// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fluid.proto

#ifndef PROTOBUF_fluid_2eproto__INCLUDED
#define PROTOBUF_fluid_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "vector3d.pb.h"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_fluid_2eproto();
void protobuf_AssignDesc_fluid_2eproto();
void protobuf_ShutdownFile_fluid_2eproto();

class Fluid;

// ===================================================================

class Fluid : public ::google::protobuf::Message {
 public:
  Fluid();
  virtual ~Fluid();

  Fluid(const Fluid& from);

  inline Fluid& operator=(const Fluid& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Fluid& default_instance();

  void Swap(Fluid* other);

  // implements Message ----------------------------------------------

  Fluid* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Fluid& from);
  void MergeFrom(const Fluid& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // repeated .gazebo.msgs.Vector3d position = 2;
  inline int position_size() const;
  inline void clear_position();
  static const int kPositionFieldNumber = 2;
  inline const ::gazebo::msgs::Vector3d& position(int index) const;
  inline ::gazebo::msgs::Vector3d* mutable_position(int index);
  inline ::gazebo::msgs::Vector3d* add_position();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >&
      position() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >*
      mutable_position();

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Fluid)
 private:
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d > position_;
  friend void  protobuf_AddDesc_fluid_2eproto();
  friend void protobuf_AssignDesc_fluid_2eproto();
  friend void protobuf_ShutdownFile_fluid_2eproto();

  void InitAsDefaultInstance();
  static Fluid* default_instance_;
};
// ===================================================================


// ===================================================================

// Fluid

// required string name = 1;
inline bool Fluid::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Fluid::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Fluid::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Fluid::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Fluid::name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Fluid.name)
  return *name_;
}
inline void Fluid::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Fluid.name)
}
inline void Fluid::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Fluid.name)
}
inline void Fluid::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Fluid.name)
}
inline ::std::string* Fluid::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Fluid.name)
  return name_;
}
inline ::std::string* Fluid::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Fluid::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Fluid.name)
}

// repeated .gazebo.msgs.Vector3d position = 2;
inline int Fluid::position_size() const {
  return position_.size();
}
inline void Fluid::clear_position() {
  position_.Clear();
}
inline const ::gazebo::msgs::Vector3d& Fluid::position(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Fluid.position)
  return position_.Get(index);
}
inline ::gazebo::msgs::Vector3d* Fluid::mutable_position(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Fluid.position)
  return position_.Mutable(index);
}
inline ::gazebo::msgs::Vector3d* Fluid::add_position() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Fluid.position)
  return position_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >&
Fluid::position() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Fluid.position)
  return position_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >*
Fluid::mutable_position() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Fluid.position)
  return &position_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_fluid_2eproto__INCLUDED