// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: im.helloworld.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "im.helloworld.pb.h"

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

namespace im {

namespace {

const ::google::protobuf::Descriptor* helloworld_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  helloworld_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_im_2ehelloworld_2eproto() {
  protobuf_AddDesc_im_2ehelloworld_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "im.helloworld.proto");
  GOOGLE_CHECK(file != NULL);
  helloworld_descriptor_ = file->message_type(0);
  static const int helloworld_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(helloworld, usrname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(helloworld, passwd_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(helloworld, email_),
  };
  helloworld_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      helloworld_descriptor_,
      helloworld::default_instance_,
      helloworld_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(helloworld, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(helloworld, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(helloworld));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_im_2ehelloworld_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    helloworld_descriptor_, &helloworld::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_im_2ehelloworld_2eproto() {
  delete helloworld::default_instance_;
  delete helloworld_reflection_;
}

void protobuf_AddDesc_im_2ehelloworld_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023im.helloworld.proto\022\002im\"<\n\nhelloworld\022"
    "\017\n\007usrname\030\001 \002(\t\022\016\n\006passwd\030\002 \002(\t\022\r\n\005emai"
    "l\030\003 \001(\t", 87);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "im.helloworld.proto", &protobuf_RegisterTypes);
  helloworld::default_instance_ = new helloworld();
  helloworld::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_im_2ehelloworld_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_im_2ehelloworld_2eproto {
  StaticDescriptorInitializer_im_2ehelloworld_2eproto() {
    protobuf_AddDesc_im_2ehelloworld_2eproto();
  }
} static_descriptor_initializer_im_2ehelloworld_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int helloworld::kUsrnameFieldNumber;
const int helloworld::kPasswdFieldNumber;
const int helloworld::kEmailFieldNumber;
#endif  // !_MSC_VER

helloworld::helloworld()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void helloworld::InitAsDefaultInstance() {
}

helloworld::helloworld(const helloworld& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void helloworld::SharedCtor() {
  _cached_size_ = 0;
  usrname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  passwd_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  email_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

helloworld::~helloworld() {
  SharedDtor();
}

void helloworld::SharedDtor() {
  if (usrname_ != &::google::protobuf::internal::kEmptyString) {
    delete usrname_;
  }
  if (passwd_ != &::google::protobuf::internal::kEmptyString) {
    delete passwd_;
  }
  if (email_ != &::google::protobuf::internal::kEmptyString) {
    delete email_;
  }
  if (this != default_instance_) {
  }
}

void helloworld::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* helloworld::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return helloworld_descriptor_;
}

const helloworld& helloworld::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_im_2ehelloworld_2eproto();
  return *default_instance_;
}

helloworld* helloworld::default_instance_ = NULL;

helloworld* helloworld::New() const {
  return new helloworld;
}

void helloworld::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_usrname()) {
      if (usrname_ != &::google::protobuf::internal::kEmptyString) {
        usrname_->clear();
      }
    }
    if (has_passwd()) {
      if (passwd_ != &::google::protobuf::internal::kEmptyString) {
        passwd_->clear();
      }
    }
    if (has_email()) {
      if (email_ != &::google::protobuf::internal::kEmptyString) {
        email_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool helloworld::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string usrname = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_usrname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->usrname().data(), this->usrname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_passwd;
        break;
      }

      // required string passwd = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_passwd:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_passwd()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->passwd().data(), this->passwd().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_email;
        break;
      }

      // optional string email = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_email:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_email()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->email().data(), this->email().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void helloworld::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string usrname = 1;
  if (has_usrname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->usrname().data(), this->usrname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->usrname(), output);
  }

  // required string passwd = 2;
  if (has_passwd()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->passwd().data(), this->passwd().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->passwd(), output);
  }

  // optional string email = 3;
  if (has_email()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->email().data(), this->email().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->email(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* helloworld::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string usrname = 1;
  if (has_usrname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->usrname().data(), this->usrname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->usrname(), target);
  }

  // required string passwd = 2;
  if (has_passwd()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->passwd().data(), this->passwd().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->passwd(), target);
  }

  // optional string email = 3;
  if (has_email()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->email().data(), this->email().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->email(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int helloworld::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string usrname = 1;
    if (has_usrname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->usrname());
    }

    // required string passwd = 2;
    if (has_passwd()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->passwd());
    }

    // optional string email = 3;
    if (has_email()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->email());
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

void helloworld::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const helloworld* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const helloworld*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void helloworld::MergeFrom(const helloworld& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_usrname()) {
      set_usrname(from.usrname());
    }
    if (from.has_passwd()) {
      set_passwd(from.passwd());
    }
    if (from.has_email()) {
      set_email(from.email());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void helloworld::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void helloworld::CopyFrom(const helloworld& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool helloworld::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void helloworld::Swap(helloworld* other) {
  if (other != this) {
    std::swap(usrname_, other->usrname_);
    std::swap(passwd_, other->passwd_);
    std::swap(email_, other->email_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata helloworld::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = helloworld_descriptor_;
  metadata.reflection = helloworld_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace im

// @@protoc_insertion_point(global_scope)
