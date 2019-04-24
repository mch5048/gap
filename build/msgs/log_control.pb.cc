// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: log_control.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "log_control.pb.h"

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

const ::google::protobuf::Descriptor* LogControl_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LogControl_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_log_5fcontrol_2eproto() {
  protobuf_AddDesc_log_5fcontrol_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "log_control.proto");
  GOOGLE_CHECK(file != NULL);
  LogControl_descriptor_ = file->message_type(0);
  static const int LogControl_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogControl, start_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogControl, stop_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogControl, paused_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogControl, base_path_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogControl, encoding_),
  };
  LogControl_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LogControl_descriptor_,
      LogControl::default_instance_,
      LogControl_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogControl, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogControl, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LogControl));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_log_5fcontrol_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LogControl_descriptor_, &LogControl::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_log_5fcontrol_2eproto() {
  delete LogControl::default_instance_;
  delete LogControl_reflection_;
}

void protobuf_AddDesc_log_5fcontrol_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021log_control.proto\022\013gazebo.msgs\"^\n\nLogC"
    "ontrol\022\r\n\005start\030\001 \001(\010\022\014\n\004stop\030\002 \001(\010\022\016\n\006p"
    "aused\030\003 \001(\010\022\021\n\tbase_path\030\004 \001(\t\022\020\n\010encodi"
    "ng\030\005 \001(\t", 128);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "log_control.proto", &protobuf_RegisterTypes);
  LogControl::default_instance_ = new LogControl();
  LogControl::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_log_5fcontrol_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_log_5fcontrol_2eproto {
  StaticDescriptorInitializer_log_5fcontrol_2eproto() {
    protobuf_AddDesc_log_5fcontrol_2eproto();
  }
} static_descriptor_initializer_log_5fcontrol_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int LogControl::kStartFieldNumber;
const int LogControl::kStopFieldNumber;
const int LogControl::kPausedFieldNumber;
const int LogControl::kBasePathFieldNumber;
const int LogControl::kEncodingFieldNumber;
#endif  // !_MSC_VER

LogControl::LogControl()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.LogControl)
}

void LogControl::InitAsDefaultInstance() {
}

LogControl::LogControl(const LogControl& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.LogControl)
}

void LogControl::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  start_ = false;
  stop_ = false;
  paused_ = false;
  base_path_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  encoding_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LogControl::~LogControl() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.LogControl)
  SharedDtor();
}

void LogControl::SharedDtor() {
  if (base_path_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete base_path_;
  }
  if (encoding_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete encoding_;
  }
  if (this != default_instance_) {
  }
}

void LogControl::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LogControl::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LogControl_descriptor_;
}

const LogControl& LogControl::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_log_5fcontrol_2eproto();
  return *default_instance_;
}

LogControl* LogControl::default_instance_ = NULL;

LogControl* LogControl::New() const {
  return new LogControl;
}

void LogControl::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<LogControl*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(start_, paused_);
    if (has_base_path()) {
      if (base_path_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        base_path_->clear();
      }
    }
    if (has_encoding()) {
      if (encoding_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        encoding_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LogControl::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.LogControl)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool start = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &start_)));
          set_has_start();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_stop;
        break;
      }

      // optional bool stop = 2;
      case 2: {
        if (tag == 16) {
         parse_stop:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &stop_)));
          set_has_stop();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_paused;
        break;
      }

      // optional bool paused = 3;
      case 3: {
        if (tag == 24) {
         parse_paused:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &paused_)));
          set_has_paused();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_base_path;
        break;
      }

      // optional string base_path = 4;
      case 4: {
        if (tag == 34) {
         parse_base_path:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_base_path()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->base_path().data(), this->base_path().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "base_path");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_encoding;
        break;
      }

      // optional string encoding = 5;
      case 5: {
        if (tag == 42) {
         parse_encoding:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_encoding()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->encoding().data(), this->encoding().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "encoding");
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
  // @@protoc_insertion_point(parse_success:gazebo.msgs.LogControl)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.LogControl)
  return false;
#undef DO_
}

void LogControl::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.LogControl)
  // optional bool start = 1;
  if (has_start()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->start(), output);
  }

  // optional bool stop = 2;
  if (has_stop()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->stop(), output);
  }

  // optional bool paused = 3;
  if (has_paused()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->paused(), output);
  }

  // optional string base_path = 4;
  if (has_base_path()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->base_path().data(), this->base_path().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "base_path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->base_path(), output);
  }

  // optional string encoding = 5;
  if (has_encoding()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->encoding().data(), this->encoding().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "encoding");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->encoding(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.LogControl)
}

::google::protobuf::uint8* LogControl::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.LogControl)
  // optional bool start = 1;
  if (has_start()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->start(), target);
  }

  // optional bool stop = 2;
  if (has_stop()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->stop(), target);
  }

  // optional bool paused = 3;
  if (has_paused()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->paused(), target);
  }

  // optional string base_path = 4;
  if (has_base_path()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->base_path().data(), this->base_path().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "base_path");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->base_path(), target);
  }

  // optional string encoding = 5;
  if (has_encoding()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->encoding().data(), this->encoding().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "encoding");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->encoding(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.LogControl)
  return target;
}

int LogControl::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool start = 1;
    if (has_start()) {
      total_size += 1 + 1;
    }

    // optional bool stop = 2;
    if (has_stop()) {
      total_size += 1 + 1;
    }

    // optional bool paused = 3;
    if (has_paused()) {
      total_size += 1 + 1;
    }

    // optional string base_path = 4;
    if (has_base_path()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->base_path());
    }

    // optional string encoding = 5;
    if (has_encoding()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->encoding());
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

void LogControl::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LogControl* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LogControl*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LogControl::MergeFrom(const LogControl& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_start()) {
      set_start(from.start());
    }
    if (from.has_stop()) {
      set_stop(from.stop());
    }
    if (from.has_paused()) {
      set_paused(from.paused());
    }
    if (from.has_base_path()) {
      set_base_path(from.base_path());
    }
    if (from.has_encoding()) {
      set_encoding(from.encoding());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LogControl::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogControl::CopyFrom(const LogControl& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogControl::IsInitialized() const {

  return true;
}

void LogControl::Swap(LogControl* other) {
  if (other != this) {
    std::swap(start_, other->start_);
    std::swap(stop_, other->stop_);
    std::swap(paused_, other->paused_);
    std::swap(base_path_, other->base_path_);
    std::swap(encoding_, other->encoding_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LogControl::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LogControl_descriptor_;
  metadata.reflection = LogControl_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)