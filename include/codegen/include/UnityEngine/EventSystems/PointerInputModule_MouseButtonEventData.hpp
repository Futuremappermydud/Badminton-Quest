// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:39 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine/EventSystems/PointerInputModule.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData/FramePressState
#include "UnityEngine/EventSystems/PointerEventData_FramePressState.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Skipping declaration: PointerEventData because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
  class PointerInputModule::MouseButtonEventData : public ::Il2CppObject {
    public:
    // public UnityEngine.EventSystems.PointerEventData/FramePressState buttonState
    // Offset: 0x10
    UnityEngine::EventSystems::PointerEventData::FramePressState buttonState;
    // public UnityEngine.EventSystems.PointerEventData buttonData
    // Offset: 0x18
    UnityEngine::EventSystems::PointerEventData* buttonData;
    // public System.Boolean PressedThisFrame()
    // Offset: 0xDEA900
    bool PressedThisFrame();
    // public System.Boolean ReleasedThisFrame()
    // Offset: 0xDEA914
    bool ReleasedThisFrame();
    // public System.Void .ctor()
    // Offset: 0xDEA928
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PointerInputModule::MouseButtonEventData* New_ctor();
  }; // UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*, "UnityEngine.EventSystems", "PointerInputModule/MouseButtonEventData");
#pragma pack(pop)
