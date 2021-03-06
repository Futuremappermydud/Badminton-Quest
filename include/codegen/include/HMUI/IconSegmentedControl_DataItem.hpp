// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: HMUI.IconSegmentedControl
#include "HMUI/IconSegmentedControl.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.IconSegmentedControl/DataItem
  class IconSegmentedControl::DataItem : public ::Il2CppObject {
    public:
    // private UnityEngine.Sprite <icon>k__BackingField
    // Offset: 0x10
    UnityEngine::Sprite* icon;
    // private System.String <hintText>k__BackingField
    // Offset: 0x18
    ::Il2CppString* hintText;
    // public UnityEngine.Sprite get_icon()
    // Offset: 0xECCC68
    UnityEngine::Sprite* get_icon();
    // private System.Void set_icon(UnityEngine.Sprite value)
    // Offset: 0xECCC70
    void set_icon(UnityEngine::Sprite* value);
    // public System.String get_hintText()
    // Offset: 0xECCC78
    ::Il2CppString* get_hintText();
    // private System.Void set_hintText(System.String value)
    // Offset: 0xECCC80
    void set_hintText(::Il2CppString* value);
    // public System.Void .ctor(UnityEngine.Sprite icon, System.String hintText)
    // Offset: 0xECCC88
    static IconSegmentedControl::DataItem* New_ctor(UnityEngine::Sprite* icon, ::Il2CppString* hintText);
  }; // HMUI.IconSegmentedControl/DataItem
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::IconSegmentedControl::DataItem*, "HMUI", "IconSegmentedControl/DataItem");
#pragma pack(pop)
