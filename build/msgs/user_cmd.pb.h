// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user_cmd.proto

#ifndef PROTOBUF_user_5fcmd_2eproto__INCLUDED
#define PROTOBUF_user_5fcmd_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "light.pb.h"
#include "model.pb.h"
#include "world_control.pb.h"
#include "wrench.pb.h"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_user_5fcmd_2eproto();
void protobuf_AssignDesc_user_5fcmd_2eproto();
void protobuf_ShutdownFile_user_5fcmd_2eproto();

class UserCmd;

enum UserCmd_Type {
  UserCmd_Type_MOVING = 1,
  UserCmd_Type_WORLD_CONTROL = 2,
  UserCmd_Type_WRENCH = 3,
  UserCmd_Type_SCALING = 4
};
bool UserCmd_Type_IsValid(int value);
const UserCmd_Type UserCmd_Type_Type_MIN = UserCmd_Type_MOVING;
const UserCmd_Type UserCmd_Type_Type_MAX = UserCmd_Type_SCALING;
const int UserCmd_Type_Type_ARRAYSIZE = UserCmd_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* UserCmd_Type_descriptor();
inline const ::std::string& UserCmd_Type_Name(UserCmd_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    UserCmd_Type_descriptor(), value);
}
inline bool UserCmd_Type_Parse(
    const ::std::string& name, UserCmd_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<UserCmd_Type>(
    UserCmd_Type_descriptor(), name, value);
}
// ===================================================================

class UserCmd : public ::google::protobuf::Message {
 public:
  UserCmd();
  virtual ~UserCmd();

  UserCmd(const UserCmd& from);

  inline UserCmd& operator=(const UserCmd& from) {
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
  static const UserCmd& default_instance();

  void Swap(UserCmd* other);

  // implements Message ----------------------------------------------

  UserCmd* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserCmd& from);
  void MergeFrom(const UserCmd& from);
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

  typedef UserCmd_Type Type;
  static const Type MOVING = UserCmd_Type_MOVING;
  static const Type WORLD_CONTROL = UserCmd_Type_WORLD_CONTROL;
  static const Type WRENCH = UserCmd_Type_WRENCH;
  static const Type SCALING = UserCmd_Type_SCALING;
  static inline bool Type_IsValid(int value) {
    return UserCmd_Type_IsValid(value);
  }
  static const Type Type_MIN =
    UserCmd_Type_Type_MIN;
  static const Type Type_MAX =
    UserCmd_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    UserCmd_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return UserCmd_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return UserCmd_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return UserCmd_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional uint32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // required string description = 2;
  inline bool has_description() const;
  inline void clear_description();
  static const int kDescriptionFieldNumber = 2;
  inline const ::std::string& description() const;
  inline void set_description(const ::std::string& value);
  inline void set_description(const char* value);
  inline void set_description(const char* value, size_t size);
  inline ::std::string* mutable_description();
  inline ::std::string* release_description();
  inline void set_allocated_description(::std::string* description);

  // required .gazebo.msgs.UserCmd.Type type = 3;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 3;
  inline ::gazebo::msgs::UserCmd_Type type() const;
  inline void set_type(::gazebo::msgs::UserCmd_Type value);

  // repeated .gazebo.msgs.Model model = 4;
  inline int model_size() const;
  inline void clear_model();
  static const int kModelFieldNumber = 4;
  inline const ::gazebo::msgs::Model& model(int index) const;
  inline ::gazebo::msgs::Model* mutable_model(int index);
  inline ::gazebo::msgs::Model* add_model();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Model >&
      model() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Model >*
      mutable_model();

  // repeated .gazebo.msgs.Light light = 5;
  inline int light_size() const;
  inline void clear_light();
  static const int kLightFieldNumber = 5;
  inline const ::gazebo::msgs::Light& light(int index) const;
  inline ::gazebo::msgs::Light* mutable_light(int index);
  inline ::gazebo::msgs::Light* add_light();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Light >&
      light() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Light >*
      mutable_light();

  // optional string entity_name = 6;
  inline bool has_entity_name() const;
  inline void clear_entity_name();
  static const int kEntityNameFieldNumber = 6;
  inline const ::std::string& entity_name() const;
  inline void set_entity_name(const ::std::string& value);
  inline void set_entity_name(const char* value);
  inline void set_entity_name(const char* value, size_t size);
  inline ::std::string* mutable_entity_name();
  inline ::std::string* release_entity_name();
  inline void set_allocated_entity_name(::std::string* entity_name);

  // optional .gazebo.msgs.WorldControl world_control = 7;
  inline bool has_world_control() const;
  inline void clear_world_control();
  static const int kWorldControlFieldNumber = 7;
  inline const ::gazebo::msgs::WorldControl& world_control() const;
  inline ::gazebo::msgs::WorldControl* mutable_world_control();
  inline ::gazebo::msgs::WorldControl* release_world_control();
  inline void set_allocated_world_control(::gazebo::msgs::WorldControl* world_control);

  // optional .gazebo.msgs.Wrench wrench = 8;
  inline bool has_wrench() const;
  inline void clear_wrench();
  static const int kWrenchFieldNumber = 8;
  inline const ::gazebo::msgs::Wrench& wrench() const;
  inline ::gazebo::msgs::Wrench* mutable_wrench();
  inline ::gazebo::msgs::Wrench* release_wrench();
  inline void set_allocated_wrench(::gazebo::msgs::Wrench* wrench);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.UserCmd)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_description();
  inline void clear_has_description();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_entity_name();
  inline void clear_has_entity_name();
  inline void set_has_world_control();
  inline void clear_has_world_control();
  inline void set_has_wrench();
  inline void clear_has_wrench();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* description_;
  ::google::protobuf::uint32 id_;
  int type_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Model > model_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Light > light_;
  ::std::string* entity_name_;
  ::gazebo::msgs::WorldControl* world_control_;
  ::gazebo::msgs::Wrench* wrench_;
  friend void  protobuf_AddDesc_user_5fcmd_2eproto();
  friend void protobuf_AssignDesc_user_5fcmd_2eproto();
  friend void protobuf_ShutdownFile_user_5fcmd_2eproto();

  void InitAsDefaultInstance();
  static UserCmd* default_instance_;
};
// ===================================================================


// ===================================================================

// UserCmd

// optional uint32 id = 1;
inline bool UserCmd::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserCmd::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserCmd::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserCmd::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 UserCmd::id() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.UserCmd.id)
  return id_;
}
inline void UserCmd::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.UserCmd.id)
}

// required string description = 2;
inline bool UserCmd::has_description() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserCmd::set_has_description() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserCmd::clear_has_description() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserCmd::clear_description() {
  if (description_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_->clear();
  }
  clear_has_description();
}
inline const ::std::string& UserCmd::description() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.UserCmd.description)
  return *description_;
}
inline void UserCmd::set_description(const ::std::string& value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.UserCmd.description)
}
inline void UserCmd::set_description(const char* value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.UserCmd.description)
}
inline void UserCmd::set_description(const char* value, size_t size) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.UserCmd.description)
}
inline ::std::string* UserCmd::mutable_description() {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.UserCmd.description)
  return description_;
}
inline ::std::string* UserCmd::release_description() {
  clear_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = description_;
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void UserCmd::set_allocated_description(::std::string* description) {
  if (description_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete description_;
  }
  if (description) {
    set_has_description();
    description_ = description;
  } else {
    clear_has_description();
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.UserCmd.description)
}

// required .gazebo.msgs.UserCmd.Type type = 3;
inline bool UserCmd::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UserCmd::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UserCmd::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UserCmd::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::gazebo::msgs::UserCmd_Type UserCmd::type() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.UserCmd.type)
  return static_cast< ::gazebo::msgs::UserCmd_Type >(type_);
}
inline void UserCmd::set_type(::gazebo::msgs::UserCmd_Type value) {
  assert(::gazebo::msgs::UserCmd_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.UserCmd.type)
}

// repeated .gazebo.msgs.Model model = 4;
inline int UserCmd::model_size() const {
  return model_.size();
}
inline void UserCmd::clear_model() {
  model_.Clear();
}
inline const ::gazebo::msgs::Model& UserCmd::model(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.UserCmd.model)
  return model_.Get(index);
}
inline ::gazebo::msgs::Model* UserCmd::mutable_model(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.UserCmd.model)
  return model_.Mutable(index);
}
inline ::gazebo::msgs::Model* UserCmd::add_model() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.UserCmd.model)
  return model_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Model >&
UserCmd::model() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.UserCmd.model)
  return model_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Model >*
UserCmd::mutable_model() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.UserCmd.model)
  return &model_;
}

// repeated .gazebo.msgs.Light light = 5;
inline int UserCmd::light_size() const {
  return light_.size();
}
inline void UserCmd::clear_light() {
  light_.Clear();
}
inline const ::gazebo::msgs::Light& UserCmd::light(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.UserCmd.light)
  return light_.Get(index);
}
inline ::gazebo::msgs::Light* UserCmd::mutable_light(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.UserCmd.light)
  return light_.Mutable(index);
}
inline ::gazebo::msgs::Light* UserCmd::add_light() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.UserCmd.light)
  return light_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Light >&
UserCmd::light() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.UserCmd.light)
  return light_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Light >*
UserCmd::mutable_light() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.UserCmd.light)
  return &light_;
}

// optional string entity_name = 6;
inline bool UserCmd::has_entity_name() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void UserCmd::set_has_entity_name() {
  _has_bits_[0] |= 0x00000020u;
}
inline void UserCmd::clear_has_entity_name() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void UserCmd::clear_entity_name() {
  if (entity_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entity_name_->clear();
  }
  clear_has_entity_name();
}
inline const ::std::string& UserCmd::entity_name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.UserCmd.entity_name)
  return *entity_name_;
}
inline void UserCmd::set_entity_name(const ::std::string& value) {
  set_has_entity_name();
  if (entity_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entity_name_ = new ::std::string;
  }
  entity_name_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.UserCmd.entity_name)
}
inline void UserCmd::set_entity_name(const char* value) {
  set_has_entity_name();
  if (entity_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entity_name_ = new ::std::string;
  }
  entity_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.UserCmd.entity_name)
}
inline void UserCmd::set_entity_name(const char* value, size_t size) {
  set_has_entity_name();
  if (entity_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entity_name_ = new ::std::string;
  }
  entity_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.UserCmd.entity_name)
}
inline ::std::string* UserCmd::mutable_entity_name() {
  set_has_entity_name();
  if (entity_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entity_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.UserCmd.entity_name)
  return entity_name_;
}
inline ::std::string* UserCmd::release_entity_name() {
  clear_has_entity_name();
  if (entity_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = entity_name_;
    entity_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void UserCmd::set_allocated_entity_name(::std::string* entity_name) {
  if (entity_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete entity_name_;
  }
  if (entity_name) {
    set_has_entity_name();
    entity_name_ = entity_name;
  } else {
    clear_has_entity_name();
    entity_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.UserCmd.entity_name)
}

// optional .gazebo.msgs.WorldControl world_control = 7;
inline bool UserCmd::has_world_control() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void UserCmd::set_has_world_control() {
  _has_bits_[0] |= 0x00000040u;
}
inline void UserCmd::clear_has_world_control() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void UserCmd::clear_world_control() {
  if (world_control_ != NULL) world_control_->::gazebo::msgs::WorldControl::Clear();
  clear_has_world_control();
}
inline const ::gazebo::msgs::WorldControl& UserCmd::world_control() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.UserCmd.world_control)
  return world_control_ != NULL ? *world_control_ : *default_instance_->world_control_;
}
inline ::gazebo::msgs::WorldControl* UserCmd::mutable_world_control() {
  set_has_world_control();
  if (world_control_ == NULL) world_control_ = new ::gazebo::msgs::WorldControl;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.UserCmd.world_control)
  return world_control_;
}
inline ::gazebo::msgs::WorldControl* UserCmd::release_world_control() {
  clear_has_world_control();
  ::gazebo::msgs::WorldControl* temp = world_control_;
  world_control_ = NULL;
  return temp;
}
inline void UserCmd::set_allocated_world_control(::gazebo::msgs::WorldControl* world_control) {
  delete world_control_;
  world_control_ = world_control;
  if (world_control) {
    set_has_world_control();
  } else {
    clear_has_world_control();
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.UserCmd.world_control)
}

// optional .gazebo.msgs.Wrench wrench = 8;
inline bool UserCmd::has_wrench() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void UserCmd::set_has_wrench() {
  _has_bits_[0] |= 0x00000080u;
}
inline void UserCmd::clear_has_wrench() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void UserCmd::clear_wrench() {
  if (wrench_ != NULL) wrench_->::gazebo::msgs::Wrench::Clear();
  clear_has_wrench();
}
inline const ::gazebo::msgs::Wrench& UserCmd::wrench() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.UserCmd.wrench)
  return wrench_ != NULL ? *wrench_ : *default_instance_->wrench_;
}
inline ::gazebo::msgs::Wrench* UserCmd::mutable_wrench() {
  set_has_wrench();
  if (wrench_ == NULL) wrench_ = new ::gazebo::msgs::Wrench;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.UserCmd.wrench)
  return wrench_;
}
inline ::gazebo::msgs::Wrench* UserCmd::release_wrench() {
  clear_has_wrench();
  ::gazebo::msgs::Wrench* temp = wrench_;
  wrench_ = NULL;
  return temp;
}
inline void UserCmd::set_allocated_wrench(::gazebo::msgs::Wrench* wrench) {
  delete wrench_;
  wrench_ = wrench;
  if (wrench) {
    set_has_wrench();
  } else {
    clear_has_wrench();
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.UserCmd.wrench)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::gazebo::msgs::UserCmd_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gazebo::msgs::UserCmd_Type>() {
  return ::gazebo::msgs::UserCmd_Type_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_user_5fcmd_2eproto__INCLUDED
