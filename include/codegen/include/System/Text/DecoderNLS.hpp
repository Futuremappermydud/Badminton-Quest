// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Text.Decoder
#include "System/Text/Decoder.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.DecoderNLS
  class DecoderNLS : public System::Text::Decoder, public System::Runtime::Serialization::ISerializable {
    public:
    // protected System.Text.Encoding m_encoding
    // Offset: 0x20
    System::Text::Encoding* m_encoding;
    // protected System.Boolean m_mustFlush
    // Offset: 0x28
    bool m_mustFlush;
    // System.Boolean m_throwOnOverflow
    // Offset: 0x29
    bool m_throwOnOverflow;
    // System.Int32 m_bytesUsed
    // Offset: 0x2C
    int m_bytesUsed;
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x12D6718
    static DecoderNLS* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void .ctor(System.Text.Encoding encoding)
    // Offset: 0x12D53BC
    static DecoderNLS* New_ctor(System::Text::Encoding* encoding);
    // public System.Boolean get_MustFlush()
    // Offset: 0x12D7084
    bool get_MustFlush();
    // System.Boolean get_HasState()
    // Offset: 0x12D708C
    bool get_HasState();
    // System.Void ClearMustFlush()
    // Offset: 0x12D7094
    void ClearMustFlush();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x12D6800
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void .ctor()
    // Offset: 0x12D68C0
    // Implemented from: System.Text.Decoder
    // Base method: System.Void Decoder::.ctor()
    // Base method: System.Void Object::.ctor()
    static DecoderNLS* New_ctor();
    // public override System.Void Reset()
    // Offset: 0x12D6900
    // Implemented from: System.Text.Decoder
    // Base method: System.Void Decoder::Reset()
    void Reset();
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x12D6918
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count, System.Boolean flush)
    // Offset: 0x12D6928
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count, System.Boolean flush)
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count, bool flush);
    // public override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Boolean flush)
    // Offset: 0x12D6B08
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetCharCount(System.Byte* bytes, System.Int32 count, System.Boolean flush)
    int GetCharCount(uint8_t* bytes, int count, bool flush);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0x12D6C48
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Boolean flush)
    // Offset: 0x12D6C58
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Boolean flush)
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex, bool flush);
    // public override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Boolean flush)
    // Offset: 0x12D6EFC
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Boolean flush)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, bool flush);
  }; // System.Text.DecoderNLS
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderNLS*, "System.Text", "DecoderNLS");
#pragma pack(pop)
