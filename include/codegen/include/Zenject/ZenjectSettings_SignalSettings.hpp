// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.ZenjectSettings
#include "Zenject/ZenjectSettings.hpp"
// Including type: Zenject.SignalDefaultSyncModes
#include "Zenject/SignalDefaultSyncModes.hpp"
// Including type: Zenject.SignalMissingHandlerResponses
#include "Zenject/SignalMissingHandlerResponses.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ZenjectSettings/SignalSettings
  class ZenjectSettings::SignalSettings : public ::Il2CppObject {
    public:
    // Get static field: static public Zenject.ZenjectSettings/SignalSettings Default
    static Zenject::ZenjectSettings::SignalSettings* _get_Default();
    // Set static field: static public Zenject.ZenjectSettings/SignalSettings Default
    static void _set_Default(Zenject::ZenjectSettings::SignalSettings* value);
    // private Zenject.SignalDefaultSyncModes _defaultSyncMode
    // Offset: 0x10
    Zenject::SignalDefaultSyncModes defaultSyncMode;
    // private Zenject.SignalMissingHandlerResponses _missingHandlerDefaultResponse
    // Offset: 0x14
    Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse;
    // private System.Boolean _requireStrictUnsubscribe
    // Offset: 0x18
    bool requireStrictUnsubscribe;
    // private System.Int32 _defaultAsyncTickPriority
    // Offset: 0x1C
    int defaultAsyncTickPriority;
    // public System.Void .ctor(Zenject.SignalDefaultSyncModes defaultSyncMode, Zenject.SignalMissingHandlerResponses missingHandlerDefaultResponse, System.Boolean requireStrictUnsubscribe, System.Int32 defaultAsyncTickPriority)
    // Offset: 0x1929738
    static ZenjectSettings::SignalSettings* New_ctor(Zenject::SignalDefaultSyncModes defaultSyncMode, Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse, bool requireStrictUnsubscribe, int defaultAsyncTickPriority);
    // public System.Int32 get_DefaultAsyncTickPriority()
    // Offset: 0x19297C8
    int get_DefaultAsyncTickPriority();
    // public Zenject.SignalDefaultSyncModes get_DefaultSyncMode()
    // Offset: 0x19297D0
    Zenject::SignalDefaultSyncModes get_DefaultSyncMode();
    // public Zenject.SignalMissingHandlerResponses get_MissingHandlerDefaultResponse()
    // Offset: 0x19297D8
    Zenject::SignalMissingHandlerResponses get_MissingHandlerDefaultResponse();
    // public System.Boolean get_RequireStrictUnsubscribe()
    // Offset: 0x19297E0
    bool get_RequireStrictUnsubscribe();
    // static private System.Void .cctor()
    // Offset: 0x19297E8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x192978C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ZenjectSettings::SignalSettings* New_ctor();
  }; // Zenject.ZenjectSettings/SignalSettings
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectSettings::SignalSettings*, "Zenject", "ZenjectSettings/SignalSettings");
#pragma pack(pop)
