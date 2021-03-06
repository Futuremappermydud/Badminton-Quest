// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformAdditionalContentModel
#include "GlobalNamespace/OculusPlatformAdditionalContentModel.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: AdditionalContentModel/UpdateEntitlementsResult
#include "GlobalNamespace/AdditionalContentModel_UpdateEntitlementsResult.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PurchaseList
  class PurchaseList;
  // Forward declaring type: AssetDetailsList
  class AssetDetailsList;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Skipping declaration: Message`1 because it is already included!
  // Skipping declaration: Message`1 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformAdditionalContentModel/<>c__DisplayClass12_0
  class OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0 : public ::Il2CppObject {
    public:
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x10
    System::Threading::CancellationToken cancellationToken;
    // public System.Threading.Tasks.TaskCompletionSource`1<AdditionalContentModel/UpdateEntitlementsResult> getViewerPurchasesTaskSource
    // Offset: 0x18
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult>* getViewerPurchasesTaskSource;
    // public OculusPlatformAdditionalContentModel <>4__this
    // Offset: 0x20
    GlobalNamespace::OculusPlatformAdditionalContentModel* $$4__this;
    // public Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PurchaseList> <>9__1
    // Offset: 0x28
    typename Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList*>::Callback* $$9__1;
    // System.Void <CheckForNewEntitlementsAsync>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.AssetDetailsList> getListMsg)
    // Offset: 0xC3AAFC
    void $CheckForNewEntitlementsAsync$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetailsList*>* getListMsg);
    // System.Void <CheckForNewEntitlementsAsync>b__1(Oculus.Platform.Message`1<Oculus.Platform.Models.PurchaseList> getPurchasesMsg)
    // Offset: 0xC3AF54
    void $CheckForNewEntitlementsAsync$b__1(Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList*>* getPurchasesMsg);
    // public System.Void .ctor()
    // Offset: 0xC3AAF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0* New_ctor();
  }; // OculusPlatformAdditionalContentModel/<>c__DisplayClass12_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0*, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass12_0");
#pragma pack(pop)
