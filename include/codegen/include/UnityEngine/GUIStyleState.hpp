// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.GUIStyleState
  class GUIStyleState : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // private readonly UnityEngine.GUIStyle m_SourceStyle
    // Offset: 0x18
    UnityEngine::GUIStyle* m_SourceStyle;
    // public System.Void set_textColor(UnityEngine.Color value)
    // Offset: 0x125C668
    void set_textColor(UnityEngine::Color value);
    // static private System.IntPtr Init()
    // Offset: 0x125E984
    static System::IntPtr Init();
    // private System.Void Cleanup()
    // Offset: 0x125E9B8
    void Cleanup();
    // private System.Void .ctor(UnityEngine.GUIStyle sourceStyle, System.IntPtr source)
    // Offset: 0x125EA44
    static GUIStyleState* New_ctor(UnityEngine::GUIStyle* sourceStyle, System::IntPtr source);
    // static UnityEngine.GUIStyleState GetGUIStyleState(UnityEngine.GUIStyle sourceStyle, System.IntPtr source)
    // Offset: 0x125DDD0
    static UnityEngine::GUIStyleState* GetGUIStyleState(UnityEngine::GUIStyle* sourceStyle, System::IntPtr source);
    // private System.Void set_textColor_Injected(UnityEngine.Color value)
    // Offset: 0x125E934
    void set_textColor_Injected(UnityEngine::Color& value);
    // public System.Void .ctor()
    // Offset: 0x125E9F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GUIStyleState* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x125EA8C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.GUIStyleState
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIStyleState*, "UnityEngine", "GUIStyleState");
#pragma pack(pop)
