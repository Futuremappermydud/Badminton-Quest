// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.Context
#include "Zenject/Context.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.RunnableContext
  class RunnableContext : public Zenject::Context {
    public:
    // private System.Boolean _autoRun
    // Offset: 0x40
    bool autoRun;
    // Get static field: static private System.Boolean _staticAutoRun
    static bool _get__staticAutoRun();
    // Set static field: static private System.Boolean _staticAutoRun
    static void _set__staticAutoRun(bool value);
    // private System.Boolean <Initialized>k__BackingField
    // Offset: 0x41
    bool Initialized;
    // public System.Boolean get_Initialized()
    // Offset: 0xFB3450
    bool get_Initialized();
    // private System.Void set_Initialized(System.Boolean value)
    // Offset: 0xFB3458
    void set_Initialized(bool value);
    // protected System.Void Initialize()
    // Offset: 0xFB3464
    void Initialize();
    // public System.Void Run()
    // Offset: 0xFB3510
    void Run();
    // protected System.Void RunInternal()
    // Offset: 0xFFFFFFFF
    void RunInternal();
    // static public T CreateComponent(UnityEngine.GameObject gameObject)
    // Offset: 0xD3D134
    template<class T>
    static T CreateComponent(UnityEngine::GameObject* gameObject) {
      static_assert(std::is_convertible_v<T, Zenject::RunnableContext*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<T>("Zenject", "RunnableContext", "CreateComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, gameObject));
    }
    // protected System.Void .ctor()
    // Offset: 0xFB3588
    // Implemented from: Zenject.Context
    // Base method: System.Void Context::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RunnableContext* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xFB3598
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // Zenject.RunnableContext
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::RunnableContext*, "Zenject", "RunnableContext");
#pragma pack(pop)
