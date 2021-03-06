// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
// Including type: OVRInput/RawTouch
#include "GlobalNamespace/OVRInput_RawTouch.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRInput/OVRControllerBase/VirtualTouchMap
  class OVRInput::OVRControllerBase::VirtualTouchMap : public ::Il2CppObject {
    public:
    // public OVRInput/RawTouch None
    // Offset: 0x10
    GlobalNamespace::OVRInput::RawTouch None;
    // public OVRInput/RawTouch One
    // Offset: 0x14
    GlobalNamespace::OVRInput::RawTouch One;
    // public OVRInput/RawTouch Two
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawTouch Two;
    // public OVRInput/RawTouch Three
    // Offset: 0x1C
    GlobalNamespace::OVRInput::RawTouch Three;
    // public OVRInput/RawTouch Four
    // Offset: 0x20
    GlobalNamespace::OVRInput::RawTouch Four;
    // public OVRInput/RawTouch PrimaryIndexTrigger
    // Offset: 0x24
    GlobalNamespace::OVRInput::RawTouch PrimaryIndexTrigger;
    // public OVRInput/RawTouch PrimaryThumbstick
    // Offset: 0x28
    GlobalNamespace::OVRInput::RawTouch PrimaryThumbstick;
    // public OVRInput/RawTouch PrimaryThumbRest
    // Offset: 0x2C
    GlobalNamespace::OVRInput::RawTouch PrimaryThumbRest;
    // public OVRInput/RawTouch PrimaryTouchpad
    // Offset: 0x30
    GlobalNamespace::OVRInput::RawTouch PrimaryTouchpad;
    // public OVRInput/RawTouch SecondaryIndexTrigger
    // Offset: 0x34
    GlobalNamespace::OVRInput::RawTouch SecondaryIndexTrigger;
    // public OVRInput/RawTouch SecondaryThumbstick
    // Offset: 0x38
    GlobalNamespace::OVRInput::RawTouch SecondaryThumbstick;
    // public OVRInput/RawTouch SecondaryThumbRest
    // Offset: 0x3C
    GlobalNamespace::OVRInput::RawTouch SecondaryThumbRest;
    // public OVRInput/RawTouch SecondaryTouchpad
    // Offset: 0x40
    GlobalNamespace::OVRInput::RawTouch SecondaryTouchpad;
    // public OVRInput/RawTouch ToRawMask(OVRInput/Touch virtualMask)
    // Offset: 0xE76614
    GlobalNamespace::OVRInput::RawTouch ToRawMask(GlobalNamespace::OVRInput::Touch virtualMask);
    // public System.Void .ctor()
    // Offset: 0xE758D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVRInput::OVRControllerBase::VirtualTouchMap* New_ctor();
  }; // OVRInput/OVRControllerBase/VirtualTouchMap
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerBase::VirtualTouchMap*, "", "OVRInput/OVRControllerBase/VirtualTouchMap");
#pragma pack(pop)
