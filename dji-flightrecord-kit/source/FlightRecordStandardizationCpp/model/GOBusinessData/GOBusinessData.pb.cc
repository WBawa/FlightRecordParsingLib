// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GOBusinessData/GOBusinessData.proto

#include "GOBusinessData.pb.h"

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
namespace DJIFRProto {
namespace Standard {
class GOBusinessDataDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GOBusinessData>
      _instance;
} _GOBusinessData_default_instance_;
}  // namespace Standard
}  // namespace DJIFRProto
namespace protobuf_GOBusinessData_2fGOBusinessData_2eproto {
void InitDefaultsGOBusinessDataImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::DJIFRProto::Standard::_GOBusinessData_default_instance_;
    new (ptr) ::DJIFRProto::Standard::GOBusinessData();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::DJIFRProto::Standard::GOBusinessData::InitAsDefaultInstance();
}

void InitDefaultsGOBusinessData() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsGOBusinessDataImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GOBusinessData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GOBusinessData, version_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GOBusinessData, tips_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GOBusinessData, warning_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GOBusinessData, seriouswarning_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GOBusinessData, gobusinessdata_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::DJIFRProto::Standard::GOBusinessData)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::DJIFRProto::Standard::_GOBusinessData_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "GOBusinessData/GOBusinessData.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n#GOBusinessData/GOBusinessData.proto\022\023D"
      "JIFRProto.Standard\"p\n\016GOBusinessData\022\017\n\007"
      "version\030\001 \001(\r\022\014\n\004tips\030\002 \001(\t\022\017\n\007warning\030\003"
      " \001(\t\022\026\n\016seriousWarning\030\004 \001(\t\022\026\n\016goBusine"
      "ssData\030\005 \001(\014B\r\242\002\nDJIFRProtob\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 195);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "GOBusinessData/GOBusinessData.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_GOBusinessData_2fGOBusinessData_2eproto
namespace DJIFRProto {
namespace Standard {

// ===================================================================

void GOBusinessData::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GOBusinessData::kVersionFieldNumber;
const int GOBusinessData::kTipsFieldNumber;
const int GOBusinessData::kWarningFieldNumber;
const int GOBusinessData::kSeriousWarningFieldNumber;
const int GOBusinessData::kGoBusinessDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GOBusinessData::GOBusinessData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_GOBusinessData_2fGOBusinessData_2eproto::InitDefaultsGOBusinessData();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:DJIFRProto.Standard.GOBusinessData)
}
GOBusinessData::GOBusinessData(const GOBusinessData& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  tips_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.tips().size() > 0) {
    tips_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tips_);
  }
  warning_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.warning().size() > 0) {
    warning_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.warning_);
  }
  seriouswarning_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.seriouswarning().size() > 0) {
    seriouswarning_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.seriouswarning_);
  }
  gobusinessdata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.gobusinessdata().size() > 0) {
    gobusinessdata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.gobusinessdata_);
  }
  version_ = from.version_;
  // @@protoc_insertion_point(copy_constructor:DJIFRProto.Standard.GOBusinessData)
}

void GOBusinessData::SharedCtor() {
  tips_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  warning_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  seriouswarning_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  gobusinessdata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = 0u;
  _cached_size_ = 0;
}

GOBusinessData::~GOBusinessData() {
  // @@protoc_insertion_point(destructor:DJIFRProto.Standard.GOBusinessData)
  SharedDtor();
}

void GOBusinessData::SharedDtor() {
  tips_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  warning_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  seriouswarning_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  gobusinessdata_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void GOBusinessData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GOBusinessData::descriptor() {
  ::protobuf_GOBusinessData_2fGOBusinessData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_GOBusinessData_2fGOBusinessData_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GOBusinessData& GOBusinessData::default_instance() {
  ::protobuf_GOBusinessData_2fGOBusinessData_2eproto::InitDefaultsGOBusinessData();
  return *internal_default_instance();
}

GOBusinessData* GOBusinessData::New(::google::protobuf::Arena* arena) const {
  GOBusinessData* n = new GOBusinessData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GOBusinessData::Clear() {
// @@protoc_insertion_point(message_clear_start:DJIFRProto.Standard.GOBusinessData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  tips_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  warning_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  seriouswarning_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  gobusinessdata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = 0u;
  _internal_metadata_.Clear();
}

bool GOBusinessData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:DJIFRProto.Standard.GOBusinessData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 version = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string tips = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tips()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->tips().data(), static_cast<int>(this->tips().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "DJIFRProto.Standard.GOBusinessData.tips"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string warning = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_warning()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->warning().data(), static_cast<int>(this->warning().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "DJIFRProto.Standard.GOBusinessData.warning"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string seriousWarning = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_seriouswarning()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->seriouswarning().data(), static_cast<int>(this->seriouswarning().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "DJIFRProto.Standard.GOBusinessData.seriousWarning"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes goBusinessData = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_gobusinessdata()));
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
  // @@protoc_insertion_point(parse_success:DJIFRProto.Standard.GOBusinessData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:DJIFRProto.Standard.GOBusinessData)
  return false;
#undef DO_
}

void GOBusinessData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:DJIFRProto.Standard.GOBusinessData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 version = 1;
  if (this->version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // string tips = 2;
  if (this->tips().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->tips().data(), static_cast<int>(this->tips().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "DJIFRProto.Standard.GOBusinessData.tips");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->tips(), output);
  }

  // string warning = 3;
  if (this->warning().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->warning().data(), static_cast<int>(this->warning().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "DJIFRProto.Standard.GOBusinessData.warning");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->warning(), output);
  }

  // string seriousWarning = 4;
  if (this->seriouswarning().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->seriouswarning().data(), static_cast<int>(this->seriouswarning().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "DJIFRProto.Standard.GOBusinessData.seriousWarning");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->seriouswarning(), output);
  }

  // bytes goBusinessData = 5;
  if (this->gobusinessdata().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      5, this->gobusinessdata(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:DJIFRProto.Standard.GOBusinessData)
}

::google::protobuf::uint8* GOBusinessData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:DJIFRProto.Standard.GOBusinessData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 version = 1;
  if (this->version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->version(), target);
  }

  // string tips = 2;
  if (this->tips().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->tips().data(), static_cast<int>(this->tips().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "DJIFRProto.Standard.GOBusinessData.tips");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->tips(), target);
  }

  // string warning = 3;
  if (this->warning().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->warning().data(), static_cast<int>(this->warning().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "DJIFRProto.Standard.GOBusinessData.warning");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->warning(), target);
  }

  // string seriousWarning = 4;
  if (this->seriouswarning().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->seriouswarning().data(), static_cast<int>(this->seriouswarning().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "DJIFRProto.Standard.GOBusinessData.seriousWarning");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->seriouswarning(), target);
  }

  // bytes goBusinessData = 5;
  if (this->gobusinessdata().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->gobusinessdata(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:DJIFRProto.Standard.GOBusinessData)
  return target;
}

size_t GOBusinessData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:DJIFRProto.Standard.GOBusinessData)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string tips = 2;
  if (this->tips().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->tips());
  }

  // string warning = 3;
  if (this->warning().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->warning());
  }

  // string seriousWarning = 4;
  if (this->seriouswarning().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->seriouswarning());
  }

  // bytes goBusinessData = 5;
  if (this->gobusinessdata().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->gobusinessdata());
  }

  // uint32 version = 1;
  if (this->version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->version());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GOBusinessData::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:DJIFRProto.Standard.GOBusinessData)
  GOOGLE_DCHECK_NE(&from, this);
  const GOBusinessData* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GOBusinessData>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:DJIFRProto.Standard.GOBusinessData)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:DJIFRProto.Standard.GOBusinessData)
    MergeFrom(*source);
  }
}

void GOBusinessData::MergeFrom(const GOBusinessData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:DJIFRProto.Standard.GOBusinessData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.tips().size() > 0) {

    tips_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tips_);
  }
  if (from.warning().size() > 0) {

    warning_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.warning_);
  }
  if (from.seriouswarning().size() > 0) {

    seriouswarning_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.seriouswarning_);
  }
  if (from.gobusinessdata().size() > 0) {

    gobusinessdata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.gobusinessdata_);
  }
  if (from.version() != 0) {
    set_version(from.version());
  }
}

void GOBusinessData::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:DJIFRProto.Standard.GOBusinessData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GOBusinessData::CopyFrom(const GOBusinessData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:DJIFRProto.Standard.GOBusinessData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GOBusinessData::IsInitialized() const {
  return true;
}

void GOBusinessData::Swap(GOBusinessData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GOBusinessData::InternalSwap(GOBusinessData* other) {
  using std::swap;
  tips_.Swap(&other->tips_);
  warning_.Swap(&other->warning_);
  seriouswarning_.Swap(&other->seriouswarning_);
  gobusinessdata_.Swap(&other->gobusinessdata_);
  swap(version_, other->version_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GOBusinessData::GetMetadata() const {
  protobuf_GOBusinessData_2fGOBusinessData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_GOBusinessData_2fGOBusinessData_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Standard
}  // namespace DJIFRProto

// @@protoc_insertion_point(global_scope)