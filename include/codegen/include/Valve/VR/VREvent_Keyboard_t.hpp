// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.VREvent_Keyboard_t
  struct VREvent_Keyboard_t : public System::ValueType {
    public:
    // public System.Byte cNewInput0
    // Offset: 0x0
    uint8_t cNewInput0;
    // public System.Byte cNewInput1
    // Offset: 0x1
    uint8_t cNewInput1;
    // public System.Byte cNewInput2
    // Offset: 0x2
    uint8_t cNewInput2;
    // public System.Byte cNewInput3
    // Offset: 0x3
    uint8_t cNewInput3;
    // public System.Byte cNewInput4
    // Offset: 0x4
    uint8_t cNewInput4;
    // public System.Byte cNewInput5
    // Offset: 0x5
    uint8_t cNewInput5;
    // public System.Byte cNewInput6
    // Offset: 0x6
    uint8_t cNewInput6;
    // public System.Byte cNewInput7
    // Offset: 0x7
    uint8_t cNewInput7;
    // public System.UInt64 uUserValue
    // Offset: 0x8
    uint64_t uUserValue;
    // Creating value type constructor for type: VREvent_Keyboard_t
    VREvent_Keyboard_t(uint8_t cNewInput0_ = {}, uint8_t cNewInput1_ = {}, uint8_t cNewInput2_ = {}, uint8_t cNewInput3_ = {}, uint8_t cNewInput4_ = {}, uint8_t cNewInput5_ = {}, uint8_t cNewInput6_ = {}, uint8_t cNewInput7_ = {}, uint64_t uUserValue_ = {}) : cNewInput0{cNewInput0_}, cNewInput1{cNewInput1_}, cNewInput2{cNewInput2_}, cNewInput3{cNewInput3_}, cNewInput4{cNewInput4_}, cNewInput5{cNewInput5_}, cNewInput6{cNewInput6_}, cNewInput7{cNewInput7_}, uUserValue{uUserValue_} {}
  }; // Valve.VR.VREvent_Keyboard_t
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_Keyboard_t, "Valve.VR", "VREvent_Keyboard_t");
#pragma pack(pop)
