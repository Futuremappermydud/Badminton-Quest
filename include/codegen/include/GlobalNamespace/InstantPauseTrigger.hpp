// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ITickable
#include "Zenject/ITickable.hpp"
// Including type: IPauseTrigger
#include "GlobalNamespace/IPauseTrigger.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRControllersInputManager
  class VRControllersInputManager;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: InstantPauseTrigger
  class InstantPauseTrigger : public ::Il2CppObject, public Zenject::ITickable, public GlobalNamespace::IPauseTrigger {
    public:
    // private VRControllersInputManager _vrControllersInputManager
    // Offset: 0x10
    GlobalNamespace::VRControllersInputManager* vrControllersInputManager;
    // private System.Action pauseTriggeredEvent
    // Offset: 0x18
    System::Action* pauseTriggeredEvent;
    // public System.Void add_pauseTriggeredEvent(System.Action value)
    // Offset: 0xB4562C
    // Implemented from: IPauseTrigger
    // Base method: System.Void IPauseTrigger::add_pauseTriggeredEvent(System.Action value)
    void add_pauseTriggeredEvent(System::Action* value);
    // public System.Void remove_pauseTriggeredEvent(System.Action value)
    // Offset: 0xB456D0
    // Implemented from: IPauseTrigger
    // Base method: System.Void IPauseTrigger::remove_pauseTriggeredEvent(System.Action value)
    void remove_pauseTriggeredEvent(System::Action* value);
    // public System.Void Tick()
    // Offset: 0xB45774
    // Implemented from: Zenject.ITickable
    // Base method: System.Void ITickable::Tick()
    void Tick();
    // public System.Void .ctor()
    // Offset: 0xB457C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InstantPauseTrigger* New_ctor();
  }; // InstantPauseTrigger
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InstantPauseTrigger*, "", "InstantPauseTrigger");
#pragma pack(pop)
