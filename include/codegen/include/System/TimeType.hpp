// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.TimeType
  class TimeType : public ::Il2CppObject {
    public:
    // public readonly System.Int32 Offset
    // Offset: 0x10
    int Offset;
    // public readonly System.Boolean IsDst
    // Offset: 0x14
    bool IsDst;
    // public System.String Name
    // Offset: 0x18
    ::Il2CppString* Name;
    // public System.Void .ctor(System.Int32 offset, System.Boolean is_dst, System.String abbrev)
    // Offset: 0xCF15CC
    static TimeType* New_ctor(int offset, bool is_dst, ::Il2CppString* abbrev);
    // public override System.String ToString()
    // Offset: 0xCF161C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.TimeType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TimeType*, "System", "TimeType");
#pragma pack(pop)
