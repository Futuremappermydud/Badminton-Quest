// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.UI.GraphicRaycaster
#include "UnityEngine/UI/GraphicRaycaster.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.GraphicRaycaster/<>c
  class GraphicRaycaster::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UI.GraphicRaycaster/<>c <>9
    static UnityEngine::UI::GraphicRaycaster::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UI.GraphicRaycaster/<>c <>9
    static void _set_$$9(UnityEngine::UI::GraphicRaycaster::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.UI.Graphic> <>9__24_0
    static System::Comparison_1<UnityEngine::UI::Graphic*>* _get_$$9__24_0();
    // Set static field: static public System.Comparison`1<UnityEngine.UI.Graphic> <>9__24_0
    static void _set_$$9__24_0(System::Comparison_1<UnityEngine::UI::Graphic*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1157DE4
    static void _cctor();
    // System.Int32 <Raycast>b__24_0(UnityEngine.UI.Graphic g1, UnityEngine.UI.Graphic g2)
    // Offset: 0x1157E54
    int $Raycast$b__24_0(UnityEngine::UI::Graphic* g1, UnityEngine::UI::Graphic* g2);
    // public System.Void .ctor()
    // Offset: 0x1157E4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GraphicRaycaster::$$c* New_ctor();
  }; // UnityEngine.UI.GraphicRaycaster/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::GraphicRaycaster::$$c*, "UnityEngine.UI", "GraphicRaycaster/<>c");
#pragma pack(pop)
