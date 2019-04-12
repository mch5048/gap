// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: physics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "physics.pb.h"

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

const ::google::protobuf::Descriptor* Physics_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Physics_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Physics_Type_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_physics_2eproto() {
  protobuf_AddDesc_physics_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "physics.proto");
  GOOGLE_CHECK(file != NULL);
  Physics_descriptor_ = file->message_type(0);
  static const int Physics_offsets_[17] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, solver_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, min_step_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, precon_iters_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, iters_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, sor_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, cfm_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, erp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, contact_max_correcting_vel_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, contact_surface_layer_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, gravity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, enable_physics_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, real_time_factor_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, real_time_update_rate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, max_step_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, profile_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, magnetic_field_),
  };
  Physics_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Physics_descriptor_,
      Physics::default_instance_,
      Physics_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Physics, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Physics));
  Physics_Type_descriptor_ = Physics_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_physics_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Physics_descriptor_, &Physics::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_physics_2eproto() {
  delete Physics::default_instance_;
  delete Physics_reflection_;
}

void protobuf_AddDesc_physics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_vector3d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rphysics.proto\022\013gazebo.msgs\032\016vector3d.p"
    "roto\"\373\003\n\007Physics\022,\n\004type\030\001 \001(\0162\031.gazebo."
    "msgs.Physics.Type:\003ODE\022\023\n\013solver_type\030\002 "
    "\001(\t\022\025\n\rmin_step_size\030\003 \001(\001\022\024\n\014precon_ite"
    "rs\030\004 \001(\005\022\r\n\005iters\030\005 \001(\005\022\013\n\003sor\030\006 \001(\001\022\013\n\003"
    "cfm\030\007 \001(\001\022\013\n\003erp\030\010 \001(\001\022\"\n\032contact_max_co"
    "rrecting_vel\030\t \001(\001\022\035\n\025contact_surface_la"
    "yer\030\n \001(\001\022&\n\007gravity\030\013 \001(\0132\025.gazebo.msgs"
    ".Vector3d\022\026\n\016enable_physics\030\014 \001(\010\022\030\n\020rea"
    "l_time_factor\030\r \001(\001\022\035\n\025real_time_update_"
    "rate\030\016 \001(\001\022\025\n\rmax_step_size\030\017 \001(\001\022\024\n\014pro"
    "file_name\030\020 \001(\t\022-\n\016magnetic_field\030\021 \001(\0132"
    "\025.gazebo.msgs.Vector3d\"2\n\004Type\022\007\n\003ODE\020\001\022"
    "\n\n\006BULLET\020\002\022\013\n\007SIMBODY\020\003\022\010\n\004DART\020\004", 554);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "physics.proto", &protobuf_RegisterTypes);
  Physics::default_instance_ = new Physics();
  Physics::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_physics_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_physics_2eproto {
  StaticDescriptorInitializer_physics_2eproto() {
    protobuf_AddDesc_physics_2eproto();
  }
} static_descriptor_initializer_physics_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Physics_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Physics_Type_descriptor_;
}
bool Physics_Type_IsValid(int value) {
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
const Physics_Type Physics::ODE;
const Physics_Type Physics::BULLET;
const Physics_Type Physics::SIMBODY;
const Physics_Type Physics::DART;
const Physics_Type Physics::Type_MIN;
const Physics_Type Physics::Type_MAX;
const int Physics::Type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Physics::kTypeFieldNumber;
const int Physics::kSolverTypeFieldNumber;
const int Physics::kMinStepSizeFieldNumber;
const int Physics::kPreconItersFieldNumber;
const int Physics::kItersFieldNumber;
const int Physics::kSorFieldNumber;
const int Physics::kCfmFieldNumber;
const int Physics::kErpFieldNumber;
const int Physics::kContactMaxCorrectingVelFieldNumber;
const int Physics::kContactSurfaceLayerFieldNumber;
const int Physics::kGravityFieldNumber;
const int Physics::kEnablePhysicsFieldNumber;
const int Physics::kRealTimeFactorFieldNumber;
const int Physics::kRealTimeUpdateRateFieldNumber;
const int Physics::kMaxStepSizeFieldNumber;
const int Physics::kProfileNameFieldNumber;
const int Physics::kMagneticFieldFieldNumber;
#endif  // !_MSC_VER

Physics::Physics()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Physics)
}

void Physics::InitAsDefaultInstance() {
  gravity_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
  magnetic_field_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
}

Physics::Physics(const Physics& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Physics)
}

void Physics::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_ = 1;
  solver_type_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  min_step_size_ = 0;
  precon_iters_ = 0;
  iters_ = 0;
  sor_ = 0;
  cfm_ = 0;
  erp_ = 0;
  contact_max_correcting_vel_ = 0;
  contact_surface_layer_ = 0;
  gravity_ = NULL;
  enable_physics_ = false;
  real_time_factor_ = 0;
  real_time_update_rate_ = 0;
  max_step_size_ = 0;
  profile_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  magnetic_field_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Physics::~Physics() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Physics)
  SharedDtor();
}

void Physics::SharedDtor() {
  if (solver_type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete solver_type_;
  }
  if (profile_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete profile_name_;
  }
  if (this != default_instance_) {
    delete gravity_;
    delete magnetic_field_;
  }
}

void Physics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Physics::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Physics_descriptor_;
}

const Physics& Physics::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_physics_2eproto();
  return *default_instance_;
}

Physics* Physics::default_instance_ = NULL;

Physics* Physics::New() const {
  return new Physics;
}

void Physics::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Physics*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(precon_iters_, iters_);
    type_ = 1;
    if (has_solver_type()) {
      if (solver_type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        solver_type_->clear();
      }
    }
  }
  if (_has_bits_[8 / 32] & 65280) {
    ZR_(enable_physics_, contact_surface_layer_);
    ZR_(real_time_factor_, max_step_size_);
    if (has_gravity()) {
      if (gravity_ != NULL) gravity_->::gazebo::msgs::Vector3d::Clear();
    }
    if (has_profile_name()) {
      if (profile_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        profile_name_->clear();
      }
    }
  }
  if (has_magnetic_field()) {
    if (magnetic_field_ != NULL) magnetic_field_->::gazebo::msgs::Vector3d::Clear();
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Physics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.Physics)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .gazebo.msgs.Physics.Type type = 1 [default = ODE];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::gazebo::msgs::Physics_Type_IsValid(value)) {
            set_type(static_cast< ::gazebo::msgs::Physics_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_solver_type;
        break;
      }

      // optional string solver_type = 2;
      case 2: {
        if (tag == 18) {
         parse_solver_type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_solver_type()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->solver_type().data(), this->solver_type().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "solver_type");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_min_step_size;
        break;
      }

      // optional double min_step_size = 3;
      case 3: {
        if (tag == 25) {
         parse_min_step_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &min_step_size_)));
          set_has_min_step_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_precon_iters;
        break;
      }

      // optional int32 precon_iters = 4;
      case 4: {
        if (tag == 32) {
         parse_precon_iters:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &precon_iters_)));
          set_has_precon_iters();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_iters;
        break;
      }

      // optional int32 iters = 5;
      case 5: {
        if (tag == 40) {
         parse_iters:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &iters_)));
          set_has_iters();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(49)) goto parse_sor;
        break;
      }

      // optional double sor = 6;
      case 6: {
        if (tag == 49) {
         parse_sor:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &sor_)));
          set_has_sor();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(57)) goto parse_cfm;
        break;
      }

      // optional double cfm = 7;
      case 7: {
        if (tag == 57) {
         parse_cfm:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &cfm_)));
          set_has_cfm();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(65)) goto parse_erp;
        break;
      }

      // optional double erp = 8;
      case 8: {
        if (tag == 65) {
         parse_erp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &erp_)));
          set_has_erp();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(73)) goto parse_contact_max_correcting_vel;
        break;
      }

      // optional double contact_max_correcting_vel = 9;
      case 9: {
        if (tag == 73) {
         parse_contact_max_correcting_vel:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &contact_max_correcting_vel_)));
          set_has_contact_max_correcting_vel();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(81)) goto parse_contact_surface_layer;
        break;
      }

      // optional double contact_surface_layer = 10;
      case 10: {
        if (tag == 81) {
         parse_contact_surface_layer:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &contact_surface_layer_)));
          set_has_contact_surface_layer();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(90)) goto parse_gravity;
        break;
      }

      // optional .gazebo.msgs.Vector3d gravity = 11;
      case 11: {
        if (tag == 90) {
         parse_gravity:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_gravity()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(96)) goto parse_enable_physics;
        break;
      }

      // optional bool enable_physics = 12;
      case 12: {
        if (tag == 96) {
         parse_enable_physics:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &enable_physics_)));
          set_has_enable_physics();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(105)) goto parse_real_time_factor;
        break;
      }

      // optional double real_time_factor = 13;
      case 13: {
        if (tag == 105) {
         parse_real_time_factor:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &real_time_factor_)));
          set_has_real_time_factor();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(113)) goto parse_real_time_update_rate;
        break;
      }

      // optional double real_time_update_rate = 14;
      case 14: {
        if (tag == 113) {
         parse_real_time_update_rate:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &real_time_update_rate_)));
          set_has_real_time_update_rate();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(121)) goto parse_max_step_size;
        break;
      }

      // optional double max_step_size = 15;
      case 15: {
        if (tag == 121) {
         parse_max_step_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &max_step_size_)));
          set_has_max_step_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(130)) goto parse_profile_name;
        break;
      }

      // optional string profile_name = 16;
      case 16: {
        if (tag == 130) {
         parse_profile_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_profile_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->profile_name().data(), this->profile_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "profile_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(138)) goto parse_magnetic_field;
        break;
      }

      // optional .gazebo.msgs.Vector3d magnetic_field = 17;
      case 17: {
        if (tag == 138) {
         parse_magnetic_field:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_magnetic_field()));
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.Physics)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.Physics)
  return false;
#undef DO_
}

void Physics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.Physics)
  // optional .gazebo.msgs.Physics.Type type = 1 [default = ODE];
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional string solver_type = 2;
  if (has_solver_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->solver_type().data(), this->solver_type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "solver_type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->solver_type(), output);
  }

  // optional double min_step_size = 3;
  if (has_min_step_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->min_step_size(), output);
  }

  // optional int32 precon_iters = 4;
  if (has_precon_iters()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->precon_iters(), output);
  }

  // optional int32 iters = 5;
  if (has_iters()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->iters(), output);
  }

  // optional double sor = 6;
  if (has_sor()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->sor(), output);
  }

  // optional double cfm = 7;
  if (has_cfm()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->cfm(), output);
  }

  // optional double erp = 8;
  if (has_erp()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->erp(), output);
  }

  // optional double contact_max_correcting_vel = 9;
  if (has_contact_max_correcting_vel()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->contact_max_correcting_vel(), output);
  }

  // optional double contact_surface_layer = 10;
  if (has_contact_surface_layer()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(10, this->contact_surface_layer(), output);
  }

  // optional .gazebo.msgs.Vector3d gravity = 11;
  if (has_gravity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, this->gravity(), output);
  }

  // optional bool enable_physics = 12;
  if (has_enable_physics()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(12, this->enable_physics(), output);
  }

  // optional double real_time_factor = 13;
  if (has_real_time_factor()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(13, this->real_time_factor(), output);
  }

  // optional double real_time_update_rate = 14;
  if (has_real_time_update_rate()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(14, this->real_time_update_rate(), output);
  }

  // optional double max_step_size = 15;
  if (has_max_step_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(15, this->max_step_size(), output);
  }

  // optional string profile_name = 16;
  if (has_profile_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->profile_name().data(), this->profile_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "profile_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      16, this->profile_name(), output);
  }

  // optional .gazebo.msgs.Vector3d magnetic_field = 17;
  if (has_magnetic_field()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      17, this->magnetic_field(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.Physics)
}

::google::protobuf::uint8* Physics::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Physics)
  // optional .gazebo.msgs.Physics.Type type = 1 [default = ODE];
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional string solver_type = 2;
  if (has_solver_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->solver_type().data(), this->solver_type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "solver_type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->solver_type(), target);
  }

  // optional double min_step_size = 3;
  if (has_min_step_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->min_step_size(), target);
  }

  // optional int32 precon_iters = 4;
  if (has_precon_iters()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->precon_iters(), target);
  }

  // optional int32 iters = 5;
  if (has_iters()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->iters(), target);
  }

  // optional double sor = 6;
  if (has_sor()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->sor(), target);
  }

  // optional double cfm = 7;
  if (has_cfm()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->cfm(), target);
  }

  // optional double erp = 8;
  if (has_erp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->erp(), target);
  }

  // optional double contact_max_correcting_vel = 9;
  if (has_contact_max_correcting_vel()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->contact_max_correcting_vel(), target);
  }

  // optional double contact_surface_layer = 10;
  if (has_contact_surface_layer()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(10, this->contact_surface_layer(), target);
  }

  // optional .gazebo.msgs.Vector3d gravity = 11;
  if (has_gravity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        11, this->gravity(), target);
  }

  // optional bool enable_physics = 12;
  if (has_enable_physics()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(12, this->enable_physics(), target);
  }

  // optional double real_time_factor = 13;
  if (has_real_time_factor()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(13, this->real_time_factor(), target);
  }

  // optional double real_time_update_rate = 14;
  if (has_real_time_update_rate()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(14, this->real_time_update_rate(), target);
  }

  // optional double max_step_size = 15;
  if (has_max_step_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(15, this->max_step_size(), target);
  }

  // optional string profile_name = 16;
  if (has_profile_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->profile_name().data(), this->profile_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "profile_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        16, this->profile_name(), target);
  }

  // optional .gazebo.msgs.Vector3d magnetic_field = 17;
  if (has_magnetic_field()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        17, this->magnetic_field(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Physics)
  return target;
}

int Physics::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .gazebo.msgs.Physics.Type type = 1 [default = ODE];
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional string solver_type = 2;
    if (has_solver_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->solver_type());
    }

    // optional double min_step_size = 3;
    if (has_min_step_size()) {
      total_size += 1 + 8;
    }

    // optional int32 precon_iters = 4;
    if (has_precon_iters()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->precon_iters());
    }

    // optional int32 iters = 5;
    if (has_iters()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->iters());
    }

    // optional double sor = 6;
    if (has_sor()) {
      total_size += 1 + 8;
    }

    // optional double cfm = 7;
    if (has_cfm()) {
      total_size += 1 + 8;
    }

    // optional double erp = 8;
    if (has_erp()) {
      total_size += 1 + 8;
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional double contact_max_correcting_vel = 9;
    if (has_contact_max_correcting_vel()) {
      total_size += 1 + 8;
    }

    // optional double contact_surface_layer = 10;
    if (has_contact_surface_layer()) {
      total_size += 1 + 8;
    }

    // optional .gazebo.msgs.Vector3d gravity = 11;
    if (has_gravity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->gravity());
    }

    // optional bool enable_physics = 12;
    if (has_enable_physics()) {
      total_size += 1 + 1;
    }

    // optional double real_time_factor = 13;
    if (has_real_time_factor()) {
      total_size += 1 + 8;
    }

    // optional double real_time_update_rate = 14;
    if (has_real_time_update_rate()) {
      total_size += 1 + 8;
    }

    // optional double max_step_size = 15;
    if (has_max_step_size()) {
      total_size += 1 + 8;
    }

    // optional string profile_name = 16;
    if (has_profile_name()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->profile_name());
    }

  }
  if (_has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    // optional .gazebo.msgs.Vector3d magnetic_field = 17;
    if (has_magnetic_field()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->magnetic_field());
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

void Physics::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Physics* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Physics*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Physics::MergeFrom(const Physics& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_solver_type()) {
      set_solver_type(from.solver_type());
    }
    if (from.has_min_step_size()) {
      set_min_step_size(from.min_step_size());
    }
    if (from.has_precon_iters()) {
      set_precon_iters(from.precon_iters());
    }
    if (from.has_iters()) {
      set_iters(from.iters());
    }
    if (from.has_sor()) {
      set_sor(from.sor());
    }
    if (from.has_cfm()) {
      set_cfm(from.cfm());
    }
    if (from.has_erp()) {
      set_erp(from.erp());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_contact_max_correcting_vel()) {
      set_contact_max_correcting_vel(from.contact_max_correcting_vel());
    }
    if (from.has_contact_surface_layer()) {
      set_contact_surface_layer(from.contact_surface_layer());
    }
    if (from.has_gravity()) {
      mutable_gravity()->::gazebo::msgs::Vector3d::MergeFrom(from.gravity());
    }
    if (from.has_enable_physics()) {
      set_enable_physics(from.enable_physics());
    }
    if (from.has_real_time_factor()) {
      set_real_time_factor(from.real_time_factor());
    }
    if (from.has_real_time_update_rate()) {
      set_real_time_update_rate(from.real_time_update_rate());
    }
    if (from.has_max_step_size()) {
      set_max_step_size(from.max_step_size());
    }
    if (from.has_profile_name()) {
      set_profile_name(from.profile_name());
    }
  }
  if (from._has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    if (from.has_magnetic_field()) {
      mutable_magnetic_field()->::gazebo::msgs::Vector3d::MergeFrom(from.magnetic_field());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Physics::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Physics::CopyFrom(const Physics& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Physics::IsInitialized() const {

  if (has_gravity()) {
    if (!this->gravity().IsInitialized()) return false;
  }
  if (has_magnetic_field()) {
    if (!this->magnetic_field().IsInitialized()) return false;
  }
  return true;
}

void Physics::Swap(Physics* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(solver_type_, other->solver_type_);
    std::swap(min_step_size_, other->min_step_size_);
    std::swap(precon_iters_, other->precon_iters_);
    std::swap(iters_, other->iters_);
    std::swap(sor_, other->sor_);
    std::swap(cfm_, other->cfm_);
    std::swap(erp_, other->erp_);
    std::swap(contact_max_correcting_vel_, other->contact_max_correcting_vel_);
    std::swap(contact_surface_layer_, other->contact_surface_layer_);
    std::swap(gravity_, other->gravity_);
    std::swap(enable_physics_, other->enable_physics_);
    std::swap(real_time_factor_, other->real_time_factor_);
    std::swap(real_time_update_rate_, other->real_time_update_rate_);
    std::swap(max_step_size_, other->max_step_size_);
    std::swap(profile_name_, other->profile_name_);
    std::swap(magnetic_field_, other->magnetic_field_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Physics::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Physics_descriptor_;
  metadata.reflection = Physics_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
