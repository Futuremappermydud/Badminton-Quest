// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AudioClip/PCMReaderCallback
  class AudioClip::PCMReaderCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19434A4
    static AudioClip::PCMReaderCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Single[] data)
    // Offset: 0x1942E70
    void Invoke(::Array<float>* data);
    // public System.IAsyncResult BeginInvoke(System.Single[] data, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19434B8
    System::IAsyncResult* BeginInvoke(::Array<float>* data, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x19434DC
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.AudioClip/PCMReaderCallback
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioClip::PCMReaderCallback*, "UnityEngine", "AudioClip/PCMReaderCallback");
#pragma pack(pop)
