// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:39 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.EventSystems.IEventSystemHandler
#include "UnityEngine/EventSystems/IEventSystemHandler.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.ISubmitHandler
  class ISubmitHandler : public UnityEngine::EventSystems::IEventSystemHandler {
    public:
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0xFFFFFFFF
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
  }; // UnityEngine.EventSystems.ISubmitHandler
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::ISubmitHandler*, "UnityEngine.EventSystems", "ISubmitHandler");
#pragma pack(pop)
