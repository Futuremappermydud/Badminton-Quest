// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.AbstractEventData
  class AbstractEventData : public ::Il2CppObject {
    public:
    // protected System.Boolean m_Used
    // Offset: 0x10
    bool m_Used;
    // public System.Void Reset()
    // Offset: 0xDE27D8
    void Reset();
    // public System.Void Use()
    // Offset: 0xDE27E0
    void Use();
    // public System.Boolean get_used()
    // Offset: 0xDE27EC
    bool get_used();
    // protected System.Void .ctor()
    // Offset: 0xDE27F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AbstractEventData* New_ctor();
  }; // UnityEngine.EventSystems.AbstractEventData
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::AbstractEventData*, "UnityEngine.EventSystems", "AbstractEventData");
#pragma pack(pop)
