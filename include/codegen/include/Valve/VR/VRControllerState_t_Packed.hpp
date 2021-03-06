// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.VRControllerAxis_t
#include "Valve/VR/VRControllerAxis_t.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.VRControllerState_t_Packed
  struct VRControllerState_t_Packed : public System::ValueType {
    public:
    // public System.UInt32 unPacketNum
    // Offset: 0x0
    uint unPacketNum;
    // public System.UInt64 ulButtonPressed
    // Offset: 0x4
    uint64_t ulButtonPressed;
    // public System.UInt64 ulButtonTouched
    // Offset: 0xC
    uint64_t ulButtonTouched;
    // public Valve.VR.VRControllerAxis_t rAxis0
    // Offset: 0x14
    Valve::VR::VRControllerAxis_t rAxis0;
    // public Valve.VR.VRControllerAxis_t rAxis1
    // Offset: 0x1C
    Valve::VR::VRControllerAxis_t rAxis1;
    // public Valve.VR.VRControllerAxis_t rAxis2
    // Offset: 0x24
    Valve::VR::VRControllerAxis_t rAxis2;
    // public Valve.VR.VRControllerAxis_t rAxis3
    // Offset: 0x2C
    Valve::VR::VRControllerAxis_t rAxis3;
    // public Valve.VR.VRControllerAxis_t rAxis4
    // Offset: 0x34
    Valve::VR::VRControllerAxis_t rAxis4;
    // Creating value type constructor for type: VRControllerState_t_Packed
    VRControllerState_t_Packed(uint unPacketNum_ = {}, uint64_t ulButtonPressed_ = {}, uint64_t ulButtonTouched_ = {}, Valve::VR::VRControllerAxis_t rAxis0_ = {}, Valve::VR::VRControllerAxis_t rAxis1_ = {}, Valve::VR::VRControllerAxis_t rAxis2_ = {}, Valve::VR::VRControllerAxis_t rAxis3_ = {}, Valve::VR::VRControllerAxis_t rAxis4_ = {}) : unPacketNum{unPacketNum_}, ulButtonPressed{ulButtonPressed_}, ulButtonTouched{ulButtonTouched_}, rAxis0{rAxis0_}, rAxis1{rAxis1_}, rAxis2{rAxis2_}, rAxis3{rAxis3_}, rAxis4{rAxis4_} {}
    // public System.Void .ctor(Valve.VR.VRControllerState_t unpacked)
    // Offset: 0xA59BBC
    static VRControllerState_t_Packed* New_ctor(Valve::VR::VRControllerState_t unpacked);
    // public System.Void Unpack(Valve.VR.VRControllerState_t unpacked)
    // Offset: 0xA59BE8
    void Unpack(Valve::VR::VRControllerState_t& unpacked);
  }; // Valve.VR.VRControllerState_t_Packed
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VRControllerState_t_Packed, "Valve.VR", "VRControllerState_t_Packed");
#pragma pack(pop)
