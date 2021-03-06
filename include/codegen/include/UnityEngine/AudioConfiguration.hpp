// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.AudioSpeakerMode
#include "UnityEngine/AudioSpeakerMode.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AudioConfiguration
  struct AudioConfiguration : public System::ValueType {
    public:
    // public UnityEngine.AudioSpeakerMode speakerMode
    // Offset: 0x0
    UnityEngine::AudioSpeakerMode speakerMode;
    // public System.Int32 dspBufferSize
    // Offset: 0x4
    int dspBufferSize;
    // public System.Int32 sampleRate
    // Offset: 0x8
    int sampleRate;
    // public System.Int32 numRealVoices
    // Offset: 0xC
    int numRealVoices;
    // public System.Int32 numVirtualVoices
    // Offset: 0x10
    int numVirtualVoices;
    // Creating value type constructor for type: AudioConfiguration
    AudioConfiguration(UnityEngine::AudioSpeakerMode speakerMode_ = {}, int dspBufferSize_ = {}, int sampleRate_ = {}, int numRealVoices_ = {}, int numVirtualVoices_ = {}) : speakerMode{speakerMode_}, dspBufferSize{dspBufferSize_}, sampleRate{sampleRate_}, numRealVoices{numRealVoices_}, numVirtualVoices{numVirtualVoices_} {}
  }; // UnityEngine.AudioConfiguration
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioConfiguration, "UnityEngine", "AudioConfiguration");
#pragma pack(pop)
