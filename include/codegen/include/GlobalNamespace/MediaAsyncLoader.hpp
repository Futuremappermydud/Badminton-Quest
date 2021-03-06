// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MediaAsyncLoader
  class MediaAsyncLoader : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MediaAsyncLoader::$LoadWebpage$d__0
    struct $LoadWebpage$d__0;
    // Nested type: GlobalNamespace::MediaAsyncLoader::$LoadAudioClipAsync$d__1
    struct $LoadAudioClipAsync$d__1;
    // Nested type: GlobalNamespace::MediaAsyncLoader::$LoadImageAsync$d__2
    struct $LoadImageAsync$d__2;
    // static public System.Threading.Tasks.Task`1<System.String> LoadWebpage(System.String uri, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1954384
    static System::Threading::Tasks::Task_1<::Il2CppString*>* LoadWebpage(::Il2CppString* uri, System::Threading::CancellationToken cancellationToken);
    // static public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> LoadAudioClipAsync(System.String path, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x19544BC
    static System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* LoadAudioClipAsync(::Il2CppString* path, System::Threading::CancellationToken cancellationToken);
    // static public System.Threading.Tasks.Task`1<UnityEngine.Texture2D> LoadImageAsync(System.String path, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x19545F4
    static System::Threading::Tasks::Task_1<UnityEngine::Texture2D*>* LoadImageAsync(::Il2CppString* path, System::Threading::CancellationToken cancellationToken);
    // static public System.Void Log(System.String message)
    // Offset: 0x195472C
    static void Log(::Il2CppString* message);
    // public System.Void .ctor()
    // Offset: 0x1954794
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MediaAsyncLoader* New_ctor();
  }; // MediaAsyncLoader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MediaAsyncLoader*, "", "MediaAsyncLoader");
#pragma pack(pop)
