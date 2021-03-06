// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: link_data.proto

#ifndef PROTOBUF_link_5fdata_2eproto__INCLUDED
#define PROTOBUF_link_5fdata_2eproto__INCLUDED

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
#include "time.pb.h"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_link_5fdata_2eproto();
void protobuf_AssignDesc_link_5fdata_2eproto();
void protobuf_ShutdownFile_link_5fdata_2eproto();

class LinkData;

// ===================================================================

class LinkData : public ::google::protobuf::Message {
 public:
  LinkData();
  virtual ~LinkData();

  LinkData(const LinkData& from);

  inline LinkData& operator=(const LinkData& from) {
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
  static const LinkData& default_instance();

  void Swap(LinkData* other);

  // implements Message ----------------------------------------------

  LinkData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LinkData& from);
  void MergeFrom(const LinkData& from);
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

  // required .gazebo.msgs.Time time = 1;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 1;
  inline const ::gazebo::msgs::Time& time() const;
  inline ::gazebo::msgs::Time* mutable_time();
  inline ::gazebo::msgs::Time* release_time();
  inline void set_allocated_time(::gazebo::msgs::Time* time);

  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional .gazebo.msgs.Vector3d linear_velocity = 3;
  inline bool has_linear_velocity() const;
  inline void clear_linear_velocity();
  static const int kLinearVelocityFieldNumber = 3;
  inline const ::gazebo::msgs::Vector3d& linear_velocity() const;
  inline ::gazebo::msgs::Vector3d* mutable_linear_velocity();
  inline ::gazebo::msgs::Vector3d* release_linear_velocity();
  inline void set_allocated_linear_velocity(::gazebo::msgs::Vector3d* linear_velocity);

  // optional .gazebo.msgs.Vector3d angular_velocity = 4;
  inline bool has_angular_velocity() const;
  inline void clear_angular_velocity();
  static const int kAngularVelocityFieldNumber = 4;
  inline const ::gazebo::msgs::Vector3d& angular_velocity() const;
  inline ::gazebo::msgs::Vector3d* mutable_angular_velocity();
  inline ::gazebo::msgs::Vector3d* release_angular_velocity();
  inline void set_allocated_angular_velocity(::gazebo::msgs::Vector3d* angular_velocity);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.LinkData)
 private:
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_linear_velocity();
  inline void clear_has_linear_velocity();
  inline void set_has_angular_velocity();
  inline void clear_has_angular_velocity();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::gazebo::msgs::Time* time_;
  ::std::string* name_;
  ::gazebo::msgs::Vector3d* linear_velocity_;
  ::gazebo::msgs::Vector3d* angular_velocity_;
  friend void  protobuf_AddDesc_link_5fdata_2eproto();
  friend void protobuf_AssignDesc_link_5fdata_2eproto();
  friend void protobuf_ShutdownFile_link_5fdata_2eproto();

  void InitAsDefaultInstance();
  static LinkData* default_instance_;
};
// ===================================================================


// ===================================================================

// LinkData

// required .gazebo.msgs.Time time = 1;
inline bool LinkData::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LinkData::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LinkData::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LinkData::clear_time() {
  if (time_ != NULL) time_->::gazebo::msgs::Time::Clear();
  clear_has_time();
}
inline const ::gazebo::msgs::Time& LinkData::time() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LinkData.time)
  return time_ != NULL ? *time_ : *default_instance_->time_;
}
inline ::gazebo::msgs::Time* LinkData::mutable_time() {
  set_has_time();
  if (time_ == NULL) time_ = new ::gazebo::msgs::Time;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LinkData.time)
  return time_;
}
inline ::gazebo::msgs::Time* LinkData::release_time() {
  clear_has_time();
  ::gazebo::msgs::Time* temp = time_;
  time_ = NULL;
  return temp;
}
inline void LinkData::set_allocated_time(::gazebo::msgs::Time* time) {
  delete time_;
  time_ = time;
  if (time) {
    set_has_time();
  } else {
    clear_has_time();
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LinkData.time)
}

// required string name = 2;
inline bool LinkData::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LinkData::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LinkData::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LinkData::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& LinkData::name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LinkData.name)
  return *name_;
}
inline void LinkData::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LinkData.name)
}
inline void LinkData::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.LinkData.name)
}
inline void LinkData::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.LinkData.name)
}
inline ::std::string* LinkData::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LinkData.name)
  return name_;
}
inline ::std::string* LinkData::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void LinkData::set_allocated_name(::std::string* name) {
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
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LinkData.name)
}

// optional .gazebo.msgs.Vector3d linear_velocity = 3;
inline bool LinkData::has_linear_velocity() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LinkData::set_has_linear_velocity() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LinkData::clear_has_linear_velocity() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LinkData::clear_linear_velocity() {
  if (linear_velocity_ != NULL) linear_velocity_->::gazebo::msgs::Vector3d::Clear();
  clear_has_linear_velocity();
}
inline const ::gazebo::msgs::Vector3d& LinkData::linear_velocity() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LinkData.linear_velocity)
  return linear_velocity_ != NULL ? *linear_velocity_ : *default_instance_->linear_velocity_;
}
inline ::gazebo::msgs::Vector3d* LinkData::mutable_linear_velocity() {
  set_has_linear_velocity();
  if (linear_velocity_ == NULL) linear_velocity_ = new ::gazebo::msgs::Vector3d;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LinkData.linear_velocity)
  return linear_velocity_;
}
inline ::gazebo::msgs::Vector3d* LinkData::release_linear_velocity() {
  clear_has_linear_velocity();
  ::gazebo::msgs::Vector3d* temp = linear_velocity_;
  linear_velocity_ = NULL;
  return temp;
}
inline void LinkData::set_allocated_linear_velocity(::gazebo::msgs::Vector3d* linear_velocity) {
  delete linear_velocity_;
  linear_velocity_ = linear_velocity;
  if (linear_velocity) {
    set_has_linear_velocity();
  } else {
    clear_has_linear_velocity();
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LinkData.linear_velocity)
}

// optional .gazebo.msgs.Vector3d angular_velocity = 4;
inline bool LinkData::has_angular_velocity() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LinkData::set_has_angular_velocity() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LinkData::clear_has_angular_velocity() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LinkData::clear_angular_velocity() {
  if (angular_velocity_ != NULL) angular_velocity_->::gazebo::msgs::Vector3d::Clear();
  clear_has_angular_velocity();
}
inline const ::gazebo::msgs::Vector3d& LinkData::angular_velocity() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LinkData.angular_velocity)
  return angular_velocity_ != NULL ? *angular_velocity_ : *default_instance_->angular_velocity_;
}
inline ::gazebo::msgs::Vector3d* LinkData::mutable_angular_velocity() {
  set_has_angular_velocity();
  if (angular_velocity_ == NULL) angular_velocity_ = new ::gazebo::msgs::Vector3d;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LinkData.angular_velocity)
  return angular_velocity_;
}
inline ::gazebo::msgs::Vector3d* LinkData::release_angular_velocity() {
  clear_has_angular_velocity();
  ::gazebo::msgs::Vector3d* temp = angular_velocity_;
  angular_velocity_ = NULL;
  return temp;
}
inline void LinkData::set_allocated_angular_velocity(::gazebo::msgs::Vector3d* angular_velocity) {
  delete angular_velocity_;
  angular_velocity_ = angular_velocity;
  if (angular_velocity) {
    set_has_angular_velocity();
  } else {
    clear_has_angular_velocity();
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LinkData.angular_velocity)
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

#endif  // PROTOBUF_link_5fdata_2eproto__INCLUDED
