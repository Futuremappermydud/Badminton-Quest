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
  // Autogenerated type: Valve.VR.VREvent_ApplicationLaunch_t
  struct VREvent_ApplicationLaunch_t : public System::ValueType {
    public:
    // public System.UInt32 pid
    // Offset: 0x0
    uint pid;
    // public System.UInt32 unArgsHandle
    // Offset: 0x4
    uint unArgsHandle;
    // Creating value type constructor for type: VREvent_ApplicationLaunch_t
    VREvent_ApplicationLaunch_t(uint pid_ = {}, uint unArgsHandle_ = {}) : pid{pid_}, unArgsHandle{unArgsHandle_} {}
  }; // Valve.VR.VREvent_ApplicationLaunch_t
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_ApplicationLaunch_t, "Valve.VR", "VREvent_ApplicationLaunch_t");
#pragma pack(pop)
