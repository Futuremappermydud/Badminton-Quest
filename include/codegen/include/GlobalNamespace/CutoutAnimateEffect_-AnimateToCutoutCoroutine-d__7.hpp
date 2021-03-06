// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CutoutAnimateEffect
#include "GlobalNamespace/CutoutAnimateEffect.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CutoutAnimateEffect/<AnimateToCutoutCoroutine>d__7
  class CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public CutoutAnimateEffect <>4__this
    // Offset: 0x20
    GlobalNamespace::CutoutAnimateEffect* $$4__this;
    // public System.Single duration
    // Offset: 0x28
    float duration;
    // public System.Single cutoutStart
    // Offset: 0x2C
    float cutoutStart;
    // public System.Single cutoutEnd
    // Offset: 0x30
    float cutoutEnd;
    // private System.Single <elapsedTime>5__2
    // Offset: 0x34
    float $elapsedTime$5__2;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xBE4748
    static CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xBE4918
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xBE491C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xBE4A68
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xBE4A70
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xBE4AD0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // CutoutAnimateEffect/<AnimateToCutoutCoroutine>d__7
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7*, "", "CutoutAnimateEffect/<AnimateToCutoutCoroutine>d__7");
#pragma pack(pop)
