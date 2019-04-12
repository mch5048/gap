// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dr_request.proto

#ifndef PROTOBUF_dr_5frequest_2eproto__INCLUDED
#define PROTOBUF_dr_5frequest_2eproto__INCLUDED

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
#include "physics.pb.h"
#include "model.pb.h"
#include "model_cmd.pb.h"
// @@protoc_insertion_point(includes)

namespace gap {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_dr_5frequest_2eproto();
void protobuf_AssignDesc_dr_5frequest_2eproto();
void protobuf_ShutdownFile_dr_5frequest_2eproto();

class DRRequest;

// ===================================================================

class DRRequest : public ::google::protobuf::Message {
 public:
  DRRequest();
  virtual ~DRRequest();

  DRRequest(const DRRequest& from);

  inline DRRequest& operator=(const DRRequest& from) {
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
  static const DRRequest& default_instance();

  void Swap(DRRequest* other);

  // implements Message ----------------------------------------------

  DRRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DRRequest& from);
  void MergeFrom(const DRRequest& from);
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

  // optional .gazebo.msgs.Physics physics = 1;
  inline bool has_physics() const;
  inline void clear_physics();
  static const int kPhysicsFieldNumber = 1;
  inline const ::gazebo::msgs::Physics& physics() const;
  inline ::gazebo::msgs::Physics* mutable_physics();
  inline ::gazebo::msgs::Physics* release_physics();
  inline void set_allocated_physics(::gazebo::msgs::Physics* physics);

  // repeated .gazebo.msgs.Model model = 2;
  inline int model_size() const;
  inline void clear_model();
  static const int kModelFieldNumber = 2;
  inline const ::gazebo::msgs::Model& model(int index) const;
  inline ::gazebo::msgs::Model* mutable_model(int index);
  inline ::gazebo::msgs::Model* add_model();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Model >&
      model() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Model >*
      mutable_model();

  // repeated .gap.msgs.ModelCmd model_cmd = 3;
  inline int model_cmd_size() const;
  inline void clear_model_cmd();
  static const int kModelCmdFieldNumber = 3;
  inline const ::gap::msgs::ModelCmd& model_cmd(int index) const;
  inline ::gap::msgs::ModelCmd* mutable_model_cmd(int index);
  inline ::gap::msgs::ModelCmd* add_model_cmd();
  inline const ::google::protobuf::RepeatedPtrField< ::gap::msgs::ModelCmd >&
      model_cmd() const;
  inline ::google::protobuf::RepeatedPtrField< ::gap::msgs::ModelCmd >*
      mutable_model_cmd();

  // optional bool feedback = 4;
  inline bool has_feedback() const;
  inline void clear_feedback();
  static const int kFeedbackFieldNumber = 4;
  inline bool feedback() const;
  inline void set_feedback(bool value);

  // @@protoc_insertion_point(class_scope:gap.msgs.DRRequest)
 private:
  inline void set_has_physics();
  inline void clear_has_physics();
  inline void set_has_feedback();
  inline void clear_has_feedback();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::gazebo::msgs::Physics* physics_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Model > model_;
  ::google::protobuf::RepeatedPtrField< ::gap::msgs::ModelCmd > model_cmd_;
  bool feedback_;
  friend void  protobuf_AddDesc_dr_5frequest_2eproto();
  friend void protobuf_AssignDesc_dr_5frequest_2eproto();
  friend void protobuf_ShutdownFile_dr_5frequest_2eproto();

  void InitAsDefaultInstance();
  static DRRequest* default_instance_;
};
// ===================================================================


// ===================================================================

// DRRequest

// optional .gazebo.msgs.Physics physics = 1;
inline bool DRRequest::has_physics() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DRRequest::set_has_physics() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DRRequest::clear_has_physics() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DRRequest::clear_physics() {
  if (physics_ != NULL) physics_->::gazebo::msgs::Physics::Clear();
  clear_has_physics();
}
inline const ::gazebo::msgs::Physics& DRRequest::physics() const {
  // @@protoc_insertion_point(field_get:gap.msgs.DRRequest.physics)
  return physics_ != NULL ? *physics_ : *default_instance_->physics_;
}
inline ::gazebo::msgs::Physics* DRRequest::mutable_physics() {
  set_has_physics();
  if (physics_ == NULL) physics_ = new ::gazebo::msgs::Physics;
  // @@protoc_insertion_point(field_mutable:gap.msgs.DRRequest.physics)
  return physics_;
}
inline ::gazebo::msgs::Physics* DRRequest::release_physics() {
  clear_has_physics();
  ::gazebo::msgs::Physics* temp = physics_;
  physics_ = NULL;
  return temp;
}
inline void DRRequest::set_allocated_physics(::gazebo::msgs::Physics* physics) {
  delete physics_;
  physics_ = physics;
  if (physics) {
    set_has_physics();
  } else {
    clear_has_physics();
  }
  // @@protoc_insertion_point(field_set_allocated:gap.msgs.DRRequest.physics)
}

// repeated .gazebo.msgs.Model model = 2;
inline int DRRequest::model_size() const {
  return model_.size();
}
inline void DRRequest::clear_model() {
  model_.Clear();
}
inline const ::gazebo::msgs::Model& DRRequest::model(int index) const {
  // @@protoc_insertion_point(field_get:gap.msgs.DRRequest.model)
  return model_.Get(index);
}
inline ::gazebo::msgs::Model* DRRequest::mutable_model(int index) {
  // @@protoc_insertion_point(field_mutable:gap.msgs.DRRequest.model)
  return model_.Mutable(index);
}
inline ::gazebo::msgs::Model* DRRequest::add_model() {
  // @@protoc_insertion_point(field_add:gap.msgs.DRRequest.model)
  return model_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Model >&
DRRequest::model() const {
  // @@protoc_insertion_point(field_list:gap.msgs.DRRequest.model)
  return model_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Model >*
DRRequest::mutable_model() {
  // @@protoc_insertion_point(field_mutable_list:gap.msgs.DRRequest.model)
  return &model_;
}

// repeated .gap.msgs.ModelCmd model_cmd = 3;
inline int DRRequest::model_cmd_size() const {
  return model_cmd_.size();
}
inline void DRRequest::clear_model_cmd() {
  model_cmd_.Clear();
}
inline const ::gap::msgs::ModelCmd& DRRequest::model_cmd(int index) const {
  // @@protoc_insertion_point(field_get:gap.msgs.DRRequest.model_cmd)
  return model_cmd_.Get(index);
}
inline ::gap::msgs::ModelCmd* DRRequest::mutable_model_cmd(int index) {
  // @@protoc_insertion_point(field_mutable:gap.msgs.DRRequest.model_cmd)
  return model_cmd_.Mutable(index);
}
inline ::gap::msgs::ModelCmd* DRRequest::add_model_cmd() {
  // @@protoc_insertion_point(field_add:gap.msgs.DRRequest.model_cmd)
  return model_cmd_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gap::msgs::ModelCmd >&
DRRequest::model_cmd() const {
  // @@protoc_insertion_point(field_list:gap.msgs.DRRequest.model_cmd)
  return model_cmd_;
}
inline ::google::protobuf::RepeatedPtrField< ::gap::msgs::ModelCmd >*
DRRequest::mutable_model_cmd() {
  // @@protoc_insertion_point(field_mutable_list:gap.msgs.DRRequest.model_cmd)
  return &model_cmd_;
}

// optional bool feedback = 4;
inline bool DRRequest::has_feedback() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DRRequest::set_has_feedback() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DRRequest::clear_has_feedback() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DRRequest::clear_feedback() {
  feedback_ = false;
  clear_has_feedback();
}
inline bool DRRequest::feedback() const {
  // @@protoc_insertion_point(field_get:gap.msgs.DRRequest.feedback)
  return feedback_;
}
inline void DRRequest::set_feedback(bool value) {
  set_has_feedback();
  feedback_ = value;
  // @@protoc_insertion_point(field_set:gap.msgs.DRRequest.feedback)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gap

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dr_5frequest_2eproto__INCLUDED
