// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:32 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.ScriptableRenderContext
  struct ScriptableRenderContext : public System::ValueType, public System::IEquatable_1<UnityEngine::Rendering::ScriptableRenderContext> {
    public:
    // private System.IntPtr m_Ptr
    // Offset: 0x0
    System::IntPtr m_Ptr;
    // Creating value type constructor for type: ScriptableRenderContext
    ScriptableRenderContext(System::IntPtr m_Ptr_ = {}) : m_Ptr{m_Ptr_} {}
    // private System.Int32 GetNumberOfCameras_Internal()
    // Offset: 0xA43620
    int GetNumberOfCameras_Internal();
    // private UnityEngine.Camera GetCamera_Internal(System.Int32 index)
    // Offset: 0xA43660
    UnityEngine::Camera* GetCamera_Internal(int index);
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0xA436B0
    static ScriptableRenderContext* New_ctor(System::IntPtr ptr);
    // System.Int32 GetNumberOfCameras()
    // Offset: 0xA436B8
    int GetNumberOfCameras();
    // UnityEngine.Camera GetCamera(System.Int32 index)
    // Offset: 0xA436F8
    UnityEngine::Camera* GetCamera(int index);
    // static private System.Int32 GetNumberOfCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext _unity_self)
    // Offset: 0x13745D0
    static int GetNumberOfCameras_Internal_Injected(UnityEngine::Rendering::ScriptableRenderContext& _unity_self);
    // static private UnityEngine.Camera GetCamera_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext _unity_self, System.Int32 index)
    // Offset: 0x1374660
    static UnityEngine::Camera* GetCamera_Internal_Injected(UnityEngine::Rendering::ScriptableRenderContext& _unity_self, int index);
    // public System.Boolean Equals(UnityEngine.Rendering.ScriptableRenderContext other)
    // Offset: 0xA43748
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Rendering.ScriptableRenderContext other)
    bool Equals(UnityEngine::Rendering::ScriptableRenderContext other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA43750
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA43758
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.ScriptableRenderContext
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::ScriptableRenderContext, "UnityEngine.Rendering", "ScriptableRenderContext");
#pragma pack(pop)
