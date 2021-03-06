// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IO.WatcherChangeTypes
#include "System/IO/WatcherChangeTypes.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.WaitForChangedResult
  struct WaitForChangedResult : public System::ValueType {
    public:
    // private System.IO.WatcherChangeTypes changeType
    // Offset: 0x0
    System::IO::WatcherChangeTypes changeType;
    // private System.String name
    // Offset: 0x8
    ::Il2CppString* name;
    // private System.String oldName
    // Offset: 0x10
    ::Il2CppString* oldName;
    // private System.Boolean timedOut
    // Offset: 0x18
    bool timedOut;
    // Creating value type constructor for type: WaitForChangedResult
    WaitForChangedResult(System::IO::WatcherChangeTypes changeType_ = {}, ::Il2CppString* name_ = {}, ::Il2CppString* oldName_ = {}, bool timedOut_ = {}) : changeType{changeType_}, name{name_}, oldName{oldName_}, timedOut{timedOut_} {}
    // public System.Void set_ChangeType(System.IO.WatcherChangeTypes value)
    // Offset: 0xA37500
    void set_ChangeType(System::IO::WatcherChangeTypes value);
    // public System.Void set_Name(System.String value)
    // Offset: 0xA37508
    void set_Name(::Il2CppString* value);
    // public System.Void set_OldName(System.String value)
    // Offset: 0xA37510
    void set_OldName(::Il2CppString* value);
  }; // System.IO.WaitForChangedResult
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::WaitForChangedResult, "System.IO", "WaitForChangedResult");
#pragma pack(pop)
