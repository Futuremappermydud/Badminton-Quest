// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: BeatmapLevelSO
#include "GlobalNamespace/BeatmapLevelSO.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelSO/<GetBeatmapLevelDataAsync>d__68
  struct BeatmapLevelSO::$GetBeatmapLevelDataAsync$d__68 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BeatmapLevelSO/GetBeatmapLevelDataResult> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult> $$t__builder;
    // public BeatmapLevelSO <>4__this
    // Offset: 0x20
    GlobalNamespace::BeatmapLevelSO* $$4__this;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<BeatmapLevelSO/GetBeatmapLevelDataResult> <>u__1
    // Offset: 0x28
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult> $$u__1;
    // Creating value type constructor for type: $GetBeatmapLevelDataAsync$d__68
    $GetBeatmapLevelDataAsync$d__68(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult> $$t__builder_ = {}, GlobalNamespace::BeatmapLevelSO* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2BBDC
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2BBE4
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapLevelSO/<GetBeatmapLevelDataAsync>d__68
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelSO::$GetBeatmapLevelDataAsync$d__68, "", "BeatmapLevelSO/<GetBeatmapLevelDataAsync>d__68");
#pragma pack(pop)
