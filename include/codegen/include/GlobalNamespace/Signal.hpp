// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: Signal
  class Signal : public UnityEngine::ScriptableObject {
    public:
    // private System.Action _event
    // Offset: 0x18
    System::Action* event;
    // private System.Void add__event(System.Action value)
    // Offset: 0xCBCAC0
    void add__event(System::Action* value);
    // private System.Void remove__event(System.Action value)
    // Offset: 0xCBCB64
    void remove__event(System::Action* value);
    // public System.Void Raise()
    // Offset: 0xCBCC08
    void Raise();
    // public System.Void Subscribe(System.Action foo)
    // Offset: 0xCBCC1C
    void Subscribe(System::Action* foo);
    // public System.Void Unsubscribe(System.Action foo)
    // Offset: 0xCBCC48
    void Unsubscribe(System::Action* foo);
    // public System.Void .ctor()
    // Offset: 0xCBCC4C
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Signal* New_ctor();
  }; // Signal
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Signal*, "", "Signal");
#pragma pack(pop)
