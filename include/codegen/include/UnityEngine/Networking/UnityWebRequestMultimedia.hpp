// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:39 PM
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
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioType
  struct AudioType;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Autogenerated type: UnityEngine.Networking.UnityWebRequestMultimedia
  class UnityWebRequestMultimedia : public ::Il2CppObject {
    public:
    // static public UnityEngine.Networking.UnityWebRequest GetAudioClip(System.String uri, UnityEngine.AudioType audioType)
    // Offset: 0x1963DF8
    static UnityEngine::Networking::UnityWebRequest* GetAudioClip(::Il2CppString* uri, UnityEngine::AudioType audioType);
  }; // UnityEngine.Networking.UnityWebRequestMultimedia
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequestMultimedia*, "UnityEngine.Networking", "UnityWebRequestMultimedia");
#pragma pack(pop)
