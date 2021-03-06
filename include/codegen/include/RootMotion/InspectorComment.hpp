// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.InspectorComment
  class InspectorComment : public UnityEngine::PropertyAttribute {
    public:
    // public System.String name
    // Offset: 0x10
    ::Il2CppString* name;
    // public System.String color
    // Offset: 0x18
    ::Il2CppString* color;
    // public System.Void .ctor(System.String name)
    // Offset: 0x122AEF4
    static InspectorComment* New_ctor(::Il2CppString* name);
    // public System.Void .ctor(System.String name, System.String color)
    // Offset: 0x122AF84
    static InspectorComment* New_ctor(::Il2CppString* name, ::Il2CppString* color);
  }; // RootMotion.InspectorComment
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::InspectorComment*, "RootMotion", "InspectorComment");
#pragma pack(pop)
