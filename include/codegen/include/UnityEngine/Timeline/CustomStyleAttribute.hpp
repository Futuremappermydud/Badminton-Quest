// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:25 PM
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
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.CustomStyleAttribute
  class CustomStyleAttribute : public System::Attribute {
    public:
    // public readonly System.String ussStyle
    // Offset: 0x10
    ::Il2CppString* ussStyle;
    // public System.Void .ctor(System.String ussStyle)
    // Offset: 0x1083B14
    static CustomStyleAttribute* New_ctor(::Il2CppString* ussStyle);
  }; // UnityEngine.Timeline.CustomStyleAttribute
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::CustomStyleAttribute*, "UnityEngine.Timeline", "CustomStyleAttribute");
#pragma pack(pop)
