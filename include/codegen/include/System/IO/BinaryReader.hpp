// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Decoder
  class Decoder;
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.BinaryReader
  class BinaryReader : public ::Il2CppObject, public System::IDisposable {
    public:
    // private System.IO.Stream m_stream
    // Offset: 0x10
    System::IO::Stream* m_stream;
    // private System.Byte[] m_buffer
    // Offset: 0x18
    ::Array<uint8_t>* m_buffer;
    // private System.Text.Decoder m_decoder
    // Offset: 0x20
    System::Text::Decoder* m_decoder;
    // private System.Byte[] m_charBytes
    // Offset: 0x28
    ::Array<uint8_t>* m_charBytes;
    // private System.Char[] m_singleChar
    // Offset: 0x30
    ::Array<::Il2CppChar>* m_singleChar;
    // private System.Char[] m_charBuffer
    // Offset: 0x38
    ::Array<::Il2CppChar>* m_charBuffer;
    // private System.Int32 m_maxCharsSize
    // Offset: 0x40
    int m_maxCharsSize;
    // private System.Boolean m_2BytesPerChar
    // Offset: 0x44
    bool m_2BytesPerChar;
    // private System.Boolean m_isMemoryStream
    // Offset: 0x45
    bool m_isMemoryStream;
    // private System.Boolean m_leaveOpen
    // Offset: 0x46
    bool m_leaveOpen;
    // public System.Void .ctor(System.IO.Stream input)
    // Offset: 0x1116484
    static BinaryReader* New_ctor(System::IO::Stream* input);
    // public System.Void .ctor(System.IO.Stream input, System.Text.Encoding encoding)
    // Offset: 0x1116778
    static BinaryReader* New_ctor(System::IO::Stream* input, System::Text::Encoding* encoding);
    // public System.Void .ctor(System.IO.Stream input, System.Text.Encoding encoding, System.Boolean leaveOpen)
    // Offset: 0x11164FC
    static BinaryReader* New_ctor(System::IO::Stream* input, System::Text::Encoding* encoding, bool leaveOpen);
    // public System.IO.Stream get_BaseStream()
    // Offset: 0x1116780
    System::IO::Stream* get_BaseStream();
    // public System.Void Close()
    // Offset: 0x1116788
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1116798
    void Dispose(bool disposing);
    // public System.Int32 Read()
    // Offset: 0x1116864
    int Read();
    // public System.Boolean ReadBoolean()
    // Offset: 0x1116B3C
    bool ReadBoolean();
    // public System.Byte ReadByte()
    // Offset: 0x1116B98
    uint8_t ReadByte();
    // public System.SByte ReadSByte()
    // Offset: 0x1116BF4
    int8_t ReadSByte();
    // public System.Char ReadChar()
    // Offset: 0x1116C48
    ::Il2CppChar ReadChar();
    // public System.Int16 ReadInt16()
    // Offset: 0x1116C84
    int16_t ReadInt16();
    // public System.UInt16 ReadUInt16()
    // Offset: 0x1116CE0
    uint16_t ReadUInt16();
    // public System.Int32 ReadInt32()
    // Offset: 0x1116D3C
    int ReadInt32();
    // public System.UInt32 ReadUInt32()
    // Offset: 0x1116F04
    uint ReadUInt32();
    // public System.Int64 ReadInt64()
    // Offset: 0x1116F88
    int64_t ReadInt64();
    // public System.UInt64 ReadUInt64()
    // Offset: 0x111704C
    uint64_t ReadUInt64();
    // public System.Single ReadSingle()
    // Offset: 0x1117110
    float ReadSingle();
    // public System.Double ReadDouble()
    // Offset: 0x111714C
    double ReadDouble();
    // public System.Decimal ReadDecimal()
    // Offset: 0x1117188
    System::Decimal ReadDecimal();
    // public System.String ReadString()
    // Offset: 0x111730C
    ::Il2CppString* ReadString();
    // private System.Int32 InternalReadChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x11176C4
    int InternalReadChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // private System.Int32 InternalReadOneChar()
    // Offset: 0x1116894
    int InternalReadOneChar();
    // public System.Char[] ReadChars(System.Int32 count)
    // Offset: 0x1117A28
    ::Array<::Il2CppChar>* ReadChars(int count);
    // public System.Int32 Read(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1117B88
    int Read(::Array<uint8_t>* buffer, int index, int count);
    // public System.Byte[] ReadBytes(System.Int32 count)
    // Offset: 0x1117D50
    ::Array<uint8_t>* ReadBytes(int count);
    // protected System.Void FillBuffer(System.Int32 numBytes)
    // Offset: 0x1117EE8
    void FillBuffer(int numBytes);
    // protected internal System.Int32 Read7BitEncodedInt()
    // Offset: 0x11175C0
    int Read7BitEncodedInt();
    // public System.Void Dispose()
    // Offset: 0x1116854
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.IO.BinaryReader
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::BinaryReader*, "System.IO", "BinaryReader");
#pragma pack(pop)
