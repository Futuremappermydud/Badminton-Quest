// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusBeatmapDataAssetFileModel
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: GetAssetBundleFileResult
#include "GlobalNamespace/GetAssetBundleFileResult.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__14
  struct OculusBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__14 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GetAssetBundleFileResult> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> $$t__builder;
    // public IPreviewBeatmapLevel previewBeatmapLevel
    // Offset: 0x20
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // public OculusBeatmapDataAssetFileModel <>4__this
    // Offset: 0x28
    GlobalNamespace::OculusBeatmapDataAssetFileModel* $$4__this;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x30
    System::Threading::CancellationToken cancellationToken;
    // private System.String <levelId>5__2
    // Offset: 0x38
    ::Il2CppString* $levelId$5__2;
    // private System.String <assetFile>5__3
    // Offset: 0x40
    ::Il2CppString* $assetFile$5__3;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Offset: 0x48
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__2
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<GetAssetBundleFileResult> <>u__3
    // Offset: 0x58
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> $$u__3;
    // Creating value type constructor for type: $GetAssetBundleFileForPreviewLevelAsync$d__14
    $GetAssetBundleFileForPreviewLevelAsync$d__14(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> $$t__builder_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}, GlobalNamespace::OculusBeatmapDataAssetFileModel* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, ::Il2CppString* $levelId$5__2_ = {}, ::Il2CppString* $assetFile$5__3_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> $$u__3_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, previewBeatmapLevel{previewBeatmapLevel_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, $levelId$5__2{$levelId$5__2_}, $assetFile$5__3{$assetFile$5__3_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2C850
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2C858
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OculusBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__14
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__14, "", "OculusBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__14");
#pragma pack(pop)
