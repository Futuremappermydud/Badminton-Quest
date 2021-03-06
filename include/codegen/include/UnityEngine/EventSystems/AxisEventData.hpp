// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.EventSystems.BaseEventData
#include "UnityEngine/EventSystems/BaseEventData.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.EventSystems.MoveDirection
#include "UnityEngine/EventSystems/MoveDirection.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.AxisEventData
  class AxisEventData : public UnityEngine::EventSystems::BaseEventData {
    public:
    // private UnityEngine.Vector2 <moveVector>k__BackingField
    // Offset: 0x20
    UnityEngine::Vector2 moveVector;
    // private UnityEngine.EventSystems.MoveDirection <moveDir>k__BackingField
    // Offset: 0x28
    UnityEngine::EventSystems::MoveDirection moveDir;
    // public UnityEngine.Vector2 get_moveVector()
    // Offset: 0xDE27FC
    UnityEngine::Vector2 get_moveVector();
    // public System.Void set_moveVector(UnityEngine.Vector2 value)
    // Offset: 0xDE2804
    void set_moveVector(UnityEngine::Vector2 value);
    // public UnityEngine.EventSystems.MoveDirection get_moveDir()
    // Offset: 0xDE280C
    UnityEngine::EventSystems::MoveDirection get_moveDir();
    // public System.Void set_moveDir(UnityEngine.EventSystems.MoveDirection value)
    // Offset: 0xDE2814
    void set_moveDir(UnityEngine::EventSystems::MoveDirection value);
    // public System.Void .ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    // Offset: 0xDE281C
    // Implemented from: UnityEngine.EventSystems.BaseEventData
    // Base method: System.Void BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    static AxisEventData* New_ctor(UnityEngine::EventSystems::EventSystem* eventSystem);
  }; // UnityEngine.EventSystems.AxisEventData
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::AxisEventData*, "UnityEngine.EventSystems", "AxisEventData");
#pragma pack(pop)
