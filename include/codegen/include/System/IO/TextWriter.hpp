// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.TextWriter
  class TextWriter : public System::MarshalByRefObject, public System::IDisposable {
    public:
    // Nested type: System::IO::TextWriter::NullTextWriter
    class NullTextWriter;
    // Nested type: System::IO::TextWriter::SyncTextWriter
    class SyncTextWriter;
    // Nested type: System::IO::TextWriter::$$c
    class $$c;
    // Get static field: static public readonly System.IO.TextWriter Null
    static System::IO::TextWriter* _get_Null();
    // Set static field: static public readonly System.IO.TextWriter Null
    static void _set_Null(System::IO::TextWriter* value);
    // Get static field: static private System.Action`1<System.Object> _WriteCharDelegate
    static System::Action_1<::Il2CppObject*>* _get__WriteCharDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteCharDelegate
    static void _set__WriteCharDelegate(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteStringDelegate
    static System::Action_1<::Il2CppObject*>* _get__WriteStringDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteStringDelegate
    static void _set__WriteStringDelegate(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteCharArrayRangeDelegate
    static System::Action_1<::Il2CppObject*>* _get__WriteCharArrayRangeDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteCharArrayRangeDelegate
    static void _set__WriteCharArrayRangeDelegate(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteLineCharDelegate
    static System::Action_1<::Il2CppObject*>* _get__WriteLineCharDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteLineCharDelegate
    static void _set__WriteLineCharDelegate(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteLineStringDelegate
    static System::Action_1<::Il2CppObject*>* _get__WriteLineStringDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteLineStringDelegate
    static void _set__WriteLineStringDelegate(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteLineCharArrayRangeDelegate
    static System::Action_1<::Il2CppObject*>* _get__WriteLineCharArrayRangeDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteLineCharArrayRangeDelegate
    static void _set__WriteLineCharArrayRangeDelegate(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _FlushDelegate
    static System::Action_1<::Il2CppObject*>* _get__FlushDelegate();
    // Set static field: static private System.Action`1<System.Object> _FlushDelegate
    static void _set__FlushDelegate(System::Action_1<::Il2CppObject*>* value);
    // protected System.Char[] CoreNewLine
    // Offset: 0x18
    ::Array<::Il2CppChar>* CoreNewLine;
    // private System.IFormatProvider InternalFormatProvider
    // Offset: 0x20
    System::IFormatProvider* InternalFormatProvider;
    // static private System.String get_InitialNewLine()
    // Offset: 0xFF7D00
    static ::Il2CppString* get_InitialNewLine();
    // protected System.Void .ctor(System.IFormatProvider formatProvider)
    // Offset: 0xFF5444
    static TextWriter* New_ctor(System::IFormatProvider* formatProvider);
    // public System.IFormatProvider get_FormatProvider()
    // Offset: 0xFF7DA8
    System::IFormatProvider* get_FormatProvider();
    // public System.Void Close()
    // Offset: 0xFF7DD4
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0xFF6004
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0xFF7ECC
    void Flush();
    // public System.Text.Encoding get_Encoding()
    // Offset: 0xFFFFFFFF
    System::Text::Encoding* get_Encoding();
    // static public System.IO.TextWriter Synchronized(System.IO.TextWriter writer)
    // Offset: 0xFF7ED0
    static System::IO::TextWriter* Synchronized(System::IO::TextWriter* writer);
    // public System.Void Write(System.Char value)
    // Offset: 0xFF801C
    void Write(::Il2CppChar value);
    // public System.Void Write(System.Char[] buffer)
    // Offset: 0xFF8020
    void Write(::Array<::Il2CppChar>* buffer);
    // public System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xFF8040
    void Write(::Array<::Il2CppChar>* buffer, int index, int count);
    // public System.Void Write(System.String value)
    // Offset: 0xFF824C
    void Write(::Il2CppString* value);
    // public System.Void Write(System.String format, System.Object arg0)
    // Offset: 0xFF8290
    void Write(::Il2CppString* format, ::Il2CppObject* arg0);
    // public System.Void WriteLine()
    // Offset: 0xFF82F0
    void WriteLine();
    // public System.Void WriteLine(System.Char value)
    // Offset: 0xFF8304
    void WriteLine(::Il2CppChar value);
    // public System.Void WriteLine(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xFF833C
    void WriteLine(::Array<::Il2CppChar>* buffer, int index, int count);
    // public System.Void WriteLine(System.String value)
    // Offset: 0xFF8378
    void WriteLine(::Il2CppString* value);
    // public System.Void WriteLine(System.String format, System.Object arg0)
    // Offset: 0xFF8520
    void WriteLine(::Il2CppString* format, ::Il2CppObject* arg0);
    // public System.Void WriteLine(System.String format, System.Object arg0, System.Object arg1)
    // Offset: 0xFF8580
    void WriteLine(::Il2CppString* format, ::Il2CppObject* arg0, ::Il2CppObject* arg1);
    // public System.Void WriteLine(System.String format, System.Object[] arg)
    // Offset: 0xFF85E8
    void WriteLine(::Il2CppString* format, ::Array<::Il2CppObject*>* arg);
    // static private System.Void .cctor()
    // Offset: 0xFF8648
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0xFF7D08
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static TextWriter* New_ctor();
    // public System.Void Dispose()
    // Offset: 0xFF7E50
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.IO.TextWriter
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::TextWriter*, "System.IO", "TextWriter");
#pragma pack(pop)
