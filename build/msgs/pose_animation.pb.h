// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pose_animation.proto

#ifndef PROTOBUF_pose_5fanimation_2eproto__INCLUDED
#define PROTOBUF_pose_5fanimation_2eproto__INCLUDED

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
#include "pose.pb.h"
#include "time.pb.h"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_pose_5fanimation_2eproto();
void protobuf_AssignDesc_pose_5fanimation_2eproto();
void protobuf_ShutdownFile_pose_5fanimation_2eproto();

class PoseAnimation;

// ===================================================================

class PoseAnimation : public ::google::protobuf::Message {
 public:
  PoseAnimation();
  virtual ~PoseAnimation();

  PoseAnimation(const PoseAnimation& from);

  inline PoseAnimation& operator=(const PoseAnimation& from) {
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
  static const PoseAnimation& default_instance();

  void Swap(PoseAnimation* other);

  // implements Message ----------------------------------------------

  PoseAnimation* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PoseAnimation& from);
  void MergeFrom(const PoseAnimation& from);
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

  // required string model_name = 1;
  inline bool has_model_name() const;
  inline void clear_model_name();
  static const int kModelNameFieldNumber = 1;
  inline const ::std::string& model_name() const;
  inline void set_model_name(const ::std::string& value);
  inline void set_model_name(const char* value);
  inline void set_model_name(const char* value, size_t size);
  inline ::std::string* mutable_model_name();
  inline ::std::string* release_model_name();
  inline void set_allocated_model_name(::std::string* model_name);

  // optional uint32 model_id = 2;
  inline bool has_model_id() const;
  inline void clear_model_id();
  static const int kModelIdFieldNumber = 2;
  inline ::google::protobuf::uint32 model_id() const;
  inline void set_model_id(::google::protobuf::uint32 value);

  // repeated .gazebo.msgs.Pose pose = 3;
  inline int pose_size() const;
  inline void clear_pose();
  static const int kPoseFieldNumber = 3;
  inline const ::gazebo::msgs::Pose& pose(int index) const;
  inline ::gazebo::msgs::Pose* mutable_pose(int index);
  inline ::gazebo::msgs::Pose* add_pose();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Pose >&
      pose() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Pose >*
      mutable_pose();

  // repeated .gazebo.msgs.Time time = 4;
  inline int time_size() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 4;
  inline const ::gazebo::msgs::Time& time(int index) const;
  inline ::gazebo::msgs::Time* mutable_time(int index);
  inline ::gazebo::msgs::Time* add_time();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Time >&
      time() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Time >*
      mutable_time();

  // @@protoc_insertion_point(class_scope:gazebo.msgs.PoseAnimation)
 private:
  inline void set_has_model_name();
  inline void clear_has_model_name();
  inline void set_has_model_id();
  inline void clear_has_model_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* model_name_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Pose > pose_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Time > time_;
  ::google::protobuf::uint32 model_id_;
  friend void  protobuf_AddDesc_pose_5fanimation_2eproto();
  friend void protobuf_AssignDesc_pose_5fanimation_2eproto();
  friend void protobuf_ShutdownFile_pose_5fanimation_2eproto();

  void InitAsDefaultInstance();
  static PoseAnimation* default_instance_;
};
// ===================================================================


// ===================================================================

// PoseAnimation

// required string model_name = 1;
inline bool PoseAnimation::has_model_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PoseAnimation::set_has_model_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PoseAnimation::clear_has_model_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PoseAnimation::clear_model_name() {
  if (model_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    model_name_->clear();
  }
  clear_has_model_name();
}
inline const ::std::string& PoseAnimation::model_name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PoseAnimation.model_name)
  return *model_name_;
}
inline void PoseAnimation::set_model_name(const ::std::string& value) {
  set_has_model_name();
  if (model_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    model_name_ = new ::std::string;
  }
  model_name_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.PoseAnimation.model_name)
}
inline void PoseAnimation::set_model_name(const char* value) {
  set_has_model_name();
  if (model_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    model_name_ = new ::std::string;
  }
  model_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.PoseAnimation.model_name)
}
inline void PoseAnimation::set_model_name(const char* value, size_t size) {
  set_has_model_name();
  if (model_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    model_name_ = new ::std::string;
  }
  model_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.PoseAnimation.model_name)
}
inline ::std::string* PoseAnimation::mutable_model_name() {
  set_has_model_name();
  if (model_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    model_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.PoseAnimation.model_name)
  return model_name_;
}
inline ::std::string* PoseAnimation::release_model_name() {
  clear_has_model_name();
  if (model_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = model_name_;
    model_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void PoseAnimation::set_allocated_model_name(::std::string* model_name) {
  if (model_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete model_name_;
  }
  if (model_name) {
    set_has_model_name();
    model_name_ = model_name;
  } else {
    clear_has_model_name();
    model_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.PoseAnimation.model_name)
}

// optional uint32 model_id = 2;
inline bool PoseAnimation::has_model_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PoseAnimation::set_has_model_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PoseAnimation::clear_has_model_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PoseAnimation::clear_model_id() {
  model_id_ = 0u;
  clear_has_model_id();
}
inline ::google::protobuf::uint32 PoseAnimation::model_id() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PoseAnimation.model_id)
  return model_id_;
}
inline void PoseAnimation::set_model_id(::google::protobuf::uint32 value) {
  set_has_model_id();
  model_id_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.PoseAnimation.model_id)
}

// repeated .gazebo.msgs.Pose pose = 3;
inline int PoseAnimation::pose_size() const {
  return pose_.size();
}
inline void PoseAnimation::clear_pose() {
  pose_.Clear();
}
inline const ::gazebo::msgs::Pose& PoseAnimation::pose(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PoseAnimation.pose)
  return pose_.Get(index);
}
inline ::gazebo::msgs::Pose* PoseAnimation::mutable_pose(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.PoseAnimation.pose)
  return pose_.Mutable(index);
}
inline ::gazebo::msgs::Pose* PoseAnimation::add_pose() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.PoseAnimation.pose)
  return pose_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Pose >&
PoseAnimation::pose() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.PoseAnimation.pose)
  return pose_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Pose >*
PoseAnimation::mutable_pose() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.PoseAnimation.pose)
  return &pose_;
}

// repeated .gazebo.msgs.Time time = 4;
inline int PoseAnimation::time_size() const {
  return time_.size();
}
inline void PoseAnimation::clear_time() {
  time_.Clear();
}
inline const ::gazebo::msgs::Time& PoseAnimation::time(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PoseAnimation.time)
  return time_.Get(index);
}
inline ::gazebo::msgs::Time* PoseAnimation::mutable_time(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.PoseAnimation.time)
  return time_.Mutable(index);
}
inline ::gazebo::msgs::Time* PoseAnimation::add_time() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.PoseAnimation.time)
  return time_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Time >&
PoseAnimation::time() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.PoseAnimation.time)
  return time_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Time >*
PoseAnimation::mutable_time() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.PoseAnimation.time)
  return &time_;
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

#endif  // PROTOBUF_pose_5fanimation_2eproto__INCLUDED
