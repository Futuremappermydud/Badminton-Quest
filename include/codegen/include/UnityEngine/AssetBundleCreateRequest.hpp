// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.AsyncOperation
#include "UnityEngine/AsyncOperation.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundle
  class AssetBundle;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AssetBundleCreateRequest
  class AssetBundleCreateRequest : public UnityEngine::AsyncOperation {
    public:
    // public UnityEngine.AssetBundle get_assetBundle()
    // Offset: 0x196328C
    UnityEngine::AssetBundle* get_assetBundle();
    // public System.Void .ctor()
    // Offset: 0x19632CC
    // Implemented from: UnityEngine.AsyncOperation
    // Base method: System.Void AsyncOperation::.ctor()
    // Base method: System.Void YieldInstruction::.ctor()
    // Base method: System.Void Object::.ctor()
    static AssetBundleCreateRequest* New_ctor();
  }; // UnityEngine.AssetBundleCreateRequest
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetBundleCreateRequest*, "UnityEngine", "AssetBundleCreateRequest");
#pragma pack(pop)
