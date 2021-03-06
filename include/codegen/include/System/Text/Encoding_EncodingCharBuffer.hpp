// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.Encoding/EncodingCharBuffer
  class Encoding::EncodingCharBuffer : public ::Il2CppObject {
    public:
    // private System.Char* chars
    // Offset: 0x10
    ::Il2CppChar* chars;
    // private System.Char* charStart
    // Offset: 0x18
    ::Il2CppChar* charStart;
    // private System.Char* charEnd
    // Offset: 0x20
    ::Il2CppChar* charEnd;
    // private System.Int32 charCountResult
    // Offset: 0x28
    int charCountResult;
    // private System.Text.Encoding enc
    // Offset: 0x30
    System::Text::Encoding* enc;
    // private System.Text.DecoderNLS decoder
    // Offset: 0x38
    System::Text::DecoderNLS* decoder;
    // private System.Byte* byteStart
    // Offset: 0x40
    uint8_t* byteStart;
    // private System.Byte* byteEnd
    // Offset: 0x48
    uint8_t* byteEnd;
    // private System.Byte* bytes
    // Offset: 0x50
    uint8_t* bytes;
    // private System.Text.DecoderFallbackBuffer fallbackBuffer
    // Offset: 0x58
    System::Text::DecoderFallbackBuffer* fallbackBuffer;
    // System.Void .ctor(System.Text.Encoding enc, System.Text.DecoderNLS decoder, System.Char* charStart, System.Int32 charCount, System.Byte* byteStart, System.Int32 byteCount)
    // Offset: 0x12DE914
    static Encoding::EncodingCharBuffer* New_ctor(System::Text::Encoding* enc, System::Text::DecoderNLS* decoder, ::Il2CppChar* charStart, int charCount, uint8_t* byteStart, int byteCount);
    // System.Boolean AddChar(System.Char ch, System.Int32 numBytes)
    // Offset: 0x12DE9F8
    bool AddChar(::Il2CppChar ch, int numBytes);
    // System.Boolean AddChar(System.Char ch)
    // Offset: 0x12DEA6C
    bool AddChar(::Il2CppChar ch);
    // System.Void AdjustBytes(System.Int32 count)
    // Offset: 0x12DEA74
    void AdjustBytes(int count);
    // System.Boolean get_MoreData()
    // Offset: 0x12DEA84
    bool get_MoreData();
    // System.Byte GetNextByte()
    // Offset: 0x12DEA94
    uint8_t GetNextByte();
    // System.Int32 get_BytesUsed()
    // Offset: 0x12DEAB8
    int get_BytesUsed();
    // System.Boolean Fallback(System.Byte fallbackByte)
    // Offset: 0x12DEAC8
    bool Fallback(uint8_t fallbackByte);
    // System.Boolean Fallback(System.Byte[] byteBuffer)
    // Offset: 0x12DEB50
    bool Fallback(::Array<uint8_t>* byteBuffer);
    // System.Int32 get_Count()
    // Offset: 0x12DEC40
    int get_Count();
  }; // System.Text.Encoding/EncodingCharBuffer
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::Encoding::EncodingCharBuffer*, "System.Text", "Encoding/EncodingCharBuffer");
#pragma pack(pop)
