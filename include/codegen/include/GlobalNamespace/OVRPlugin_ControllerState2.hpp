// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Vector2f
#include "GlobalNamespace/OVRPlugin_Vector2f.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/ControllerState2
  struct OVRPlugin::ControllerState2 : public System::ValueType {
    public:
    // public System.UInt32 ConnectedControllers
    // Offset: 0x0
    uint ConnectedControllers;
    // public System.UInt32 Buttons
    // Offset: 0x4
    uint Buttons;
    // public System.UInt32 Touches
    // Offset: 0x8
    uint Touches;
    // public System.UInt32 NearTouches
    // Offset: 0xC
    uint NearTouches;
    // public System.Single LIndexTrigger
    // Offset: 0x10
    float LIndexTrigger;
    // public System.Single RIndexTrigger
    // Offset: 0x14
    float RIndexTrigger;
    // public System.Single LHandTrigger
    // Offset: 0x18
    float LHandTrigger;
    // public System.Single RHandTrigger
    // Offset: 0x1C
    float RHandTrigger;
    // public OVRPlugin/Vector2f LThumbstick
    // Offset: 0x20
    GlobalNamespace::OVRPlugin::Vector2f LThumbstick;
    // public OVRPlugin/Vector2f RThumbstick
    // Offset: 0x28
    GlobalNamespace::OVRPlugin::Vector2f RThumbstick;
    // public OVRPlugin/Vector2f LTouchpad
    // Offset: 0x30
    GlobalNamespace::OVRPlugin::Vector2f LTouchpad;
    // public OVRPlugin/Vector2f RTouchpad
    // Offset: 0x38
    GlobalNamespace::OVRPlugin::Vector2f RTouchpad;
    // Creating value type constructor for type: ControllerState2
    ControllerState2(uint ConnectedControllers_ = {}, uint Buttons_ = {}, uint Touches_ = {}, uint NearTouches_ = {}, float LIndexTrigger_ = {}, float RIndexTrigger_ = {}, float LHandTrigger_ = {}, float RHandTrigger_ = {}, GlobalNamespace::OVRPlugin::Vector2f LThumbstick_ = {}, GlobalNamespace::OVRPlugin::Vector2f RThumbstick_ = {}, GlobalNamespace::OVRPlugin::Vector2f LTouchpad_ = {}, GlobalNamespace::OVRPlugin::Vector2f RTouchpad_ = {}) : ConnectedControllers{ConnectedControllers_}, Buttons{Buttons_}, Touches{Touches_}, NearTouches{NearTouches_}, LIndexTrigger{LIndexTrigger_}, RIndexTrigger{RIndexTrigger_}, LHandTrigger{LHandTrigger_}, RHandTrigger{RHandTrigger_}, LThumbstick{LThumbstick_}, RThumbstick{RThumbstick_}, LTouchpad{LTouchpad_}, RTouchpad{RTouchpad_} {}
    // public System.Void .ctor(OVRPlugin/ControllerState cs)
    // Offset: 0xA39E3C
    static OVRPlugin::ControllerState2* New_ctor(GlobalNamespace::OVRPlugin::ControllerState cs);
  }; // OVRPlugin/ControllerState2
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::ControllerState2, "", "OVRPlugin/ControllerState2");
#pragma pack(pop)
