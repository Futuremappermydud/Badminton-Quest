// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IDeeplinkManager
#include "GlobalNamespace/IDeeplinkManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Deeplink
  class Deeplink;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TestDeeplinkManager
  class TestDeeplinkManager : public ::Il2CppObject, public GlobalNamespace::IDeeplinkManager {
    public:
    // private System.Action`1<Deeplink> didReceiveDeeplinkEvent
    // Offset: 0x10
    System::Action_1<GlobalNamespace::Deeplink*>* didReceiveDeeplinkEvent;
    // private Deeplink _currentDeeplink
    // Offset: 0x18
    GlobalNamespace::Deeplink* currentDeeplink;
    // Get static field: static public TestDeeplinkManager instance
    static GlobalNamespace::TestDeeplinkManager* _get_instance();
    // Set static field: static public TestDeeplinkManager instance
    static void _set_instance(GlobalNamespace::TestDeeplinkManager* value);
    // public System.Void set_currentDeeplink(Deeplink value)
    // Offset: 0xBAA7EC
    void set_currentDeeplink(GlobalNamespace::Deeplink* value);
    // static private System.Void .cctor()
    // Offset: 0xBAA8BC
    static void _cctor();
    // public System.Void add_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    // Offset: 0xBAA69C
    // Implemented from: IDeeplinkManager
    // Base method: System.Void IDeeplinkManager::add_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    void add_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink*>* value);
    // public System.Void remove_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    // Offset: 0xBAA740
    // Implemented from: IDeeplinkManager
    // Base method: System.Void IDeeplinkManager::remove_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    void remove_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink*>* value);
    // public Deeplink get_currentDeeplink()
    // Offset: 0xBAA7E4
    // Implemented from: IDeeplinkManager
    // Base method: Deeplink IDeeplinkManager::get_currentDeeplink()
    GlobalNamespace::Deeplink* get_currentDeeplink();
    // public System.Void .ctor()
    // Offset: 0xBAA8B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestDeeplinkManager* New_ctor();
  }; // TestDeeplinkManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestDeeplinkManager*, "", "TestDeeplinkManager");
#pragma pack(pop)
