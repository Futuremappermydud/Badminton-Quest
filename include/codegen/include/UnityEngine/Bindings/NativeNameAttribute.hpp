// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Autogenerated type: UnityEngine.Bindings.NativeNameAttribute
  class NativeNameAttribute : public System::Attribute {
    public:
    // private System.String <Name>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Name;
    // public System.Void set_Name(System.String value)
    // Offset: 0x19590B0
    void set_Name(::Il2CppString* value);
    // public System.Void .ctor(System.String name)
    // Offset: 0x19590B8
    static NativeNameAttribute* New_ctor(::Il2CppString* name);
  }; // UnityEngine.Bindings.NativeNameAttribute
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeNameAttribute*, "UnityEngine.Bindings", "NativeNameAttribute");
#pragma pack(pop)
