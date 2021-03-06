// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.AudioSettings
#include "UnityEngine/AudioSettings.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AudioSettings/Mobile
  class AudioSettings::Mobile : public ::Il2CppObject {
    public:
    // Get static field: static private System.Boolean <muteState>k__BackingField
    static bool _get_$muteState$k__BackingField();
    // Set static field: static private System.Boolean <muteState>k__BackingField
    static void _set_$muteState$k__BackingField(bool value);
    // Get static field: static private System.Boolean _stopAudioOutputOnMute
    static bool _get__stopAudioOutputOnMute();
    // Set static field: static private System.Boolean _stopAudioOutputOnMute
    static void _set__stopAudioOutputOnMute(bool value);
    // Get static field: static private System.Action`1<System.Boolean> OnMuteStateChanged
    static System::Action_1<bool>* _get_OnMuteStateChanged();
    // Set static field: static private System.Action`1<System.Boolean> OnMuteStateChanged
    static void _set_OnMuteStateChanged(System::Action_1<bool>* value);
    // static public System.Boolean get_muteState()
    // Offset: 0x1943B94
    static bool get_muteState();
    // static private System.Void set_muteState(System.Boolean value)
    // Offset: 0x1943BFC
    static void set_muteState(bool value);
    // static public System.Boolean get_stopAudioOutputOnMute()
    // Offset: 0x1943C6C
    static bool get_stopAudioOutputOnMute();
    // static System.Void InvokeOnMuteStateChanged(System.Boolean mute)
    // Offset: 0x1943CD4
    static void InvokeOnMuteStateChanged(bool mute);
    // static public System.Void StartAudioOutput()
    // Offset: 0x1943F7C
    static void StartAudioOutput();
    // static public System.Void StopAudioOutput()
    // Offset: 0x1943F48
    static void StopAudioOutput();
    // static private System.Void .cctor()
    // Offset: 0x1943FB0
    static void _cctor();
  }; // UnityEngine.AudioSettings/Mobile
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioSettings::Mobile*, "UnityEngine", "AudioSettings/Mobile");
#pragma pack(pop)
