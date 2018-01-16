// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lulu.proto

#include "lulu.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace lulu {
class ask_meDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ask_me>
      _instance;
} _ask_me_default_instance_;
class tell_youDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<tell_you>
      _instance;
} _tell_you_default_instance_;
}  // namespace lulu
namespace protobuf_lulu_2eproto {
void InitDefaultsask_meImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::lulu::_ask_me_default_instance_;
    new (ptr) ::lulu::ask_me();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::lulu::ask_me::InitAsDefaultInstance();
}

void InitDefaultsask_me() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsask_meImpl);
}

void InitDefaultstell_youImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::lulu::_tell_you_default_instance_;
    new (ptr) ::lulu::tell_you();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::lulu::tell_you::InitAsDefaultInstance();
}

void InitDefaultstell_you() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultstell_youImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lulu::ask_me, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lulu::ask_me, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lulu::ask_me, name_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lulu::tell_you, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lulu::tell_you, ret_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lulu::tell_you, answer_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::lulu::ask_me)},
  { 7, -1, sizeof(::lulu::tell_you)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::lulu::_ask_me_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::lulu::_tell_you_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "lulu.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\nlulu.proto\022\004lulu\"\"\n\006ask_me\022\n\n\002id\030\001 \001(\r"
      "\022\014\n\004name\030\002 \003(\t\"\'\n\010tell_you\022\013\n\003ret\030\001 \001(\r\022"
      "\016\n\006answer\030\002 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 103);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "lulu.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_lulu_2eproto
namespace lulu {

// ===================================================================

void ask_me::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ask_me::kIdFieldNumber;
const int ask_me::kNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ask_me::ask_me()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_lulu_2eproto::InitDefaultsask_me();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:lulu.ask_me)
}
ask_me::ask_me(const ask_me& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      name_(from.name_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:lulu.ask_me)
}

void ask_me::SharedCtor() {
  id_ = 0u;
  _cached_size_ = 0;
}

ask_me::~ask_me() {
  // @@protoc_insertion_point(destructor:lulu.ask_me)
  SharedDtor();
}

void ask_me::SharedDtor() {
}

void ask_me::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ask_me::descriptor() {
  ::protobuf_lulu_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_lulu_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ask_me& ask_me::default_instance() {
  ::protobuf_lulu_2eproto::InitDefaultsask_me();
  return *internal_default_instance();
}

ask_me* ask_me::New(::google::protobuf::Arena* arena) const {
  ask_me* n = new ask_me;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ask_me::Clear() {
// @@protoc_insertion_point(message_clear_start:lulu.ask_me)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.Clear();
  id_ = 0u;
  _internal_metadata_.Clear();
}

bool ask_me::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:lulu.ask_me)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name(this->name_size() - 1).data(),
            static_cast<int>(this->name(this->name_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "lulu.ask_me.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:lulu.ask_me)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:lulu.ask_me)
  return false;
#undef DO_
}

void ask_me::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:lulu.ask_me)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // repeated string name = 2;
  for (int i = 0, n = this->name_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name(i).data(), static_cast<int>(this->name(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "lulu.ask_me.name");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->name(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:lulu.ask_me)
}

::google::protobuf::uint8* ask_me::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:lulu.ask_me)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // repeated string name = 2;
  for (int i = 0, n = this->name_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name(i).data(), static_cast<int>(this->name(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "lulu.ask_me.name");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->name(i), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:lulu.ask_me)
  return target;
}

size_t ask_me::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:lulu.ask_me)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated string name = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->name_size());
  for (int i = 0, n = this->name_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->name(i));
  }

  // uint32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ask_me::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:lulu.ask_me)
  GOOGLE_DCHECK_NE(&from, this);
  const ask_me* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ask_me>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:lulu.ask_me)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:lulu.ask_me)
    MergeFrom(*source);
  }
}

void ask_me::MergeFrom(const ask_me& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:lulu.ask_me)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  name_.MergeFrom(from.name_);
  if (from.id() != 0) {
    set_id(from.id());
  }
}

void ask_me::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:lulu.ask_me)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ask_me::CopyFrom(const ask_me& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:lulu.ask_me)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ask_me::IsInitialized() const {
  return true;
}

void ask_me::Swap(ask_me* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ask_me::InternalSwap(ask_me* other) {
  using std::swap;
  name_.InternalSwap(&other->name_);
  swap(id_, other->id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ask_me::GetMetadata() const {
  protobuf_lulu_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_lulu_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void tell_you::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int tell_you::kRetFieldNumber;
const int tell_you::kAnswerFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

tell_you::tell_you()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_lulu_2eproto::InitDefaultstell_you();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:lulu.tell_you)
}
tell_you::tell_you(const tell_you& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  answer_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.answer().size() > 0) {
    answer_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.answer_);
  }
  ret_ = from.ret_;
  // @@protoc_insertion_point(copy_constructor:lulu.tell_you)
}

void tell_you::SharedCtor() {
  answer_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ret_ = 0u;
  _cached_size_ = 0;
}

tell_you::~tell_you() {
  // @@protoc_insertion_point(destructor:lulu.tell_you)
  SharedDtor();
}

void tell_you::SharedDtor() {
  answer_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void tell_you::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* tell_you::descriptor() {
  ::protobuf_lulu_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_lulu_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const tell_you& tell_you::default_instance() {
  ::protobuf_lulu_2eproto::InitDefaultstell_you();
  return *internal_default_instance();
}

tell_you* tell_you::New(::google::protobuf::Arena* arena) const {
  tell_you* n = new tell_you;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void tell_you::Clear() {
// @@protoc_insertion_point(message_clear_start:lulu.tell_you)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  answer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ret_ = 0u;
  _internal_metadata_.Clear();
}

bool tell_you::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:lulu.tell_you)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 ret = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ret_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string answer = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_answer()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->answer().data(), static_cast<int>(this->answer().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "lulu.tell_you.answer"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:lulu.tell_you)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:lulu.tell_you)
  return false;
#undef DO_
}

void tell_you::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:lulu.tell_you)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 ret = 1;
  if (this->ret() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->ret(), output);
  }

  // string answer = 2;
  if (this->answer().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->answer().data(), static_cast<int>(this->answer().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "lulu.tell_you.answer");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->answer(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:lulu.tell_you)
}

::google::protobuf::uint8* tell_you::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:lulu.tell_you)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 ret = 1;
  if (this->ret() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->ret(), target);
  }

  // string answer = 2;
  if (this->answer().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->answer().data(), static_cast<int>(this->answer().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "lulu.tell_you.answer");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->answer(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:lulu.tell_you)
  return target;
}

size_t tell_you::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:lulu.tell_you)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string answer = 2;
  if (this->answer().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->answer());
  }

  // uint32 ret = 1;
  if (this->ret() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->ret());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void tell_you::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:lulu.tell_you)
  GOOGLE_DCHECK_NE(&from, this);
  const tell_you* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const tell_you>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:lulu.tell_you)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:lulu.tell_you)
    MergeFrom(*source);
  }
}

void tell_you::MergeFrom(const tell_you& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:lulu.tell_you)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.answer().size() > 0) {

    answer_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.answer_);
  }
  if (from.ret() != 0) {
    set_ret(from.ret());
  }
}

void tell_you::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:lulu.tell_you)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void tell_you::CopyFrom(const tell_you& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:lulu.tell_you)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool tell_you::IsInitialized() const {
  return true;
}

void tell_you::Swap(tell_you* other) {
  if (other == this) return;
  InternalSwap(other);
}
void tell_you::InternalSwap(tell_you* other) {
  using std::swap;
  answer_.Swap(&other->answer_);
  swap(ret_, other->ret_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata tell_you::GetMetadata() const {
  protobuf_lulu_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_lulu_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace lulu

// @@protoc_insertion_point(global_scope)