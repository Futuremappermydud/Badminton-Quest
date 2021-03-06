// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PointLight
  class PointLight : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Color color
    // Offset: 0x18
    UnityEngine::Color color;
    // public System.Single intensity
    // Offset: 0x28
    float intensity;
    // static field const value: static public System.Int32 kMaxLights
    static constexpr const int kMaxLights = 1;
    // Get static field: static public System.Int32 kMaxLights
    static int _get_kMaxLights();
    // Set static field: static public System.Int32 kMaxLights
    static void _set_kMaxLights(int value);
    // Get static field: static private System.Collections.Generic.List`1<PointLight> _lights
    static System::Collections::Generic::List_1<GlobalNamespace::PointLight*>* _get__lights();
    // Set static field: static private System.Collections.Generic.List`1<PointLight> _lights
    static void _set__lights(System::Collections::Generic::List_1<GlobalNamespace::PointLight*>* value);
    // static public System.Collections.Generic.List`1<PointLight> get_lights()
    // Offset: 0x182F1B0
    static System::Collections::Generic::List_1<GlobalNamespace::PointLight*>* get_lights();
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x182F218
    static void NoDomainReloadInit();
    // protected System.Void OnEnable()
    // Offset: 0x182F2AC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x182F330
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x182F3B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PointLight* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x182F3BC
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // PointLight
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PointLight*, "", "PointLight");
#pragma pack(pop)
