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
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Size because it is already included!
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_PlayArea
  class SteamVR_PlayArea : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SteamVR_PlayArea::Size
    struct Size;
    // Nested type: GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14
    class $UpdateBounds$d__14;
    // Autogenerated type: SteamVR_PlayArea/Size
    struct Size : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public SteamVR_PlayArea/Size Calibrated
      static constexpr const int Calibrated = 0;
      // Get static field: static public SteamVR_PlayArea/Size Calibrated
      static GlobalNamespace::SteamVR_PlayArea::Size _get_Calibrated();
      // Set static field: static public SteamVR_PlayArea/Size Calibrated
      static void _set_Calibrated(GlobalNamespace::SteamVR_PlayArea::Size value);
      // static field const value: static public SteamVR_PlayArea/Size _400x300
      static constexpr const int _400x300 = 1;
      // Get static field: static public SteamVR_PlayArea/Size _400x300
      static GlobalNamespace::SteamVR_PlayArea::Size _get__400x300();
      // Set static field: static public SteamVR_PlayArea/Size _400x300
      static void _set__400x300(GlobalNamespace::SteamVR_PlayArea::Size value);
      // static field const value: static public SteamVR_PlayArea/Size _300x225
      static constexpr const int _300x225 = 2;
      // Get static field: static public SteamVR_PlayArea/Size _300x225
      static GlobalNamespace::SteamVR_PlayArea::Size _get__300x225();
      // Set static field: static public SteamVR_PlayArea/Size _300x225
      static void _set__300x225(GlobalNamespace::SteamVR_PlayArea::Size value);
      // static field const value: static public SteamVR_PlayArea/Size _200x150
      static constexpr const int _200x150 = 3;
      // Get static field: static public SteamVR_PlayArea/Size _200x150
      static GlobalNamespace::SteamVR_PlayArea::Size _get__200x150();
      // Set static field: static public SteamVR_PlayArea/Size _200x150
      static void _set__200x150(GlobalNamespace::SteamVR_PlayArea::Size value);
      // Creating value type constructor for type: Size
      Size(int value_ = {}) : value{value_} {}
    }; // SteamVR_PlayArea/Size
    // public System.Single borderThickness
    // Offset: 0x18
    float borderThickness;
    // public System.Single wireframeHeight
    // Offset: 0x1C
    float wireframeHeight;
    // public System.Boolean drawWireframeWhenSelectedOnly
    // Offset: 0x20
    bool drawWireframeWhenSelectedOnly;
    // public System.Boolean drawInGame
    // Offset: 0x21
    bool drawInGame;
    // public SteamVR_PlayArea/Size size
    // Offset: 0x24
    GlobalNamespace::SteamVR_PlayArea::Size size;
    // public UnityEngine.Color color
    // Offset: 0x28
    UnityEngine::Color color;
    // public UnityEngine.Vector3[] vertices
    // Offset: 0x38
    ::Array<UnityEngine::Vector3>* vertices;
    // static public System.Boolean GetBounds(SteamVR_PlayArea/Size size, Valve.VR.HmdQuad_t pRect)
    // Offset: 0xD8D79C
    static bool GetBounds(GlobalNamespace::SteamVR_PlayArea::Size size, Valve::VR::HmdQuad_t& pRect);
    // public System.Void BuildMesh()
    // Offset: 0xD8DB20
    void BuildMesh();
    // private System.Void OnDrawGizmos()
    // Offset: 0xD8E378
    void OnDrawGizmos();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0xD8E60C
    void OnDrawGizmosSelected();
    // public System.Void DrawWireframe()
    // Offset: 0xD8E388
    void DrawWireframe();
    // public System.Void OnEnable()
    // Offset: 0xD8E61C
    void OnEnable();
    // private System.Collections.IEnumerator UpdateBounds()
    // Offset: 0xD8E6D0
    System::Collections::IEnumerator* UpdateBounds();
    // public System.Void .ctor()
    // Offset: 0xD8E778
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamVR_PlayArea* New_ctor();
  }; // SteamVR_PlayArea
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_PlayArea*, "", "SteamVR_PlayArea");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_PlayArea::Size, "", "SteamVR_PlayArea/Size");
#pragma pack(pop)
