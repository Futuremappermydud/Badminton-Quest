// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.UI.IClipper
#include "UnityEngine/UI/IClipper.hpp"
// Including type: UnityEngine.ICanvasRaycastFilter
#include "UnityEngine/ICanvasRaycastFilter.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: RectangularVertexClipper
  class RectangularVertexClipper;
  // Forward declaring type: MaskableGraphic
  class MaskableGraphic;
  // Forward declaring type: IClippable
  class IClippable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Canvas
  class Canvas;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.RectMask2D
  class RectMask2D : public UnityEngine::EventSystems::UIBehaviour, public UnityEngine::UI::IClipper, public UnityEngine::ICanvasRaycastFilter {
    public:
    // private readonly UnityEngine.UI.RectangularVertexClipper m_VertexClipper
    // Offset: 0x18
    UnityEngine::UI::RectangularVertexClipper* m_VertexClipper;
    // private UnityEngine.RectTransform m_RectTransform
    // Offset: 0x20
    UnityEngine::RectTransform* m_RectTransform;
    // private System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic> m_MaskableTargets
    // Offset: 0x28
    System::Collections::Generic::HashSet_1<UnityEngine::UI::MaskableGraphic*>* m_MaskableTargets;
    // private System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable> m_ClipTargets
    // Offset: 0x30
    System::Collections::Generic::HashSet_1<UnityEngine::UI::IClippable*>* m_ClipTargets;
    // private System.Boolean m_ShouldRecalculateClipRects
    // Offset: 0x38
    bool m_ShouldRecalculateClipRects;
    // private System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> m_Clippers
    // Offset: 0x40
    System::Collections::Generic::List_1<UnityEngine::UI::RectMask2D*>* m_Clippers;
    // private UnityEngine.Rect m_LastClipRectCanvasSpace
    // Offset: 0x48
    UnityEngine::Rect m_LastClipRectCanvasSpace;
    // private System.Boolean m_ForceClip
    // Offset: 0x58
    bool m_ForceClip;
    // private UnityEngine.Canvas m_Canvas
    // Offset: 0x60
    UnityEngine::Canvas* m_Canvas;
    // private UnityEngine.Vector3[] m_Corners
    // Offset: 0x68
    ::Array<UnityEngine::Vector3>* m_Corners;
    // private UnityEngine.Canvas get_Canvas()
    // Offset: 0x11EFB68
    UnityEngine::Canvas* get_Canvas();
    // public UnityEngine.Rect get_canvasRect()
    // Offset: 0x11EFCB4
    UnityEngine::Rect get_canvasRect();
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x11EFD00
    UnityEngine::RectTransform* get_rectTransform();
    // private UnityEngine.Rect get_rootCanvasRect()
    // Offset: 0x11F026C
    UnityEngine::Rect get_rootCanvasRect();
    // public System.Void AddClippable(UnityEngine.UI.IClippable clippable)
    // Offset: 0x11EE3F0
    void AddClippable(UnityEngine::UI::IClippable* clippable);
    // public System.Void RemoveClippable(UnityEngine.UI.IClippable clippable)
    // Offset: 0x11EE268
    void RemoveClippable(UnityEngine::UI::IClippable* clippable);
    // protected System.Void .ctor()
    // Offset: 0x11EFF08
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RectMask2D* New_ctor();
    // protected override System.Void OnEnable()
    // Offset: 0x11F00C0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x11F00FC
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // public System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    // Offset: 0x11F01A4
    // Implemented from: UnityEngine.ICanvasRaycastFilter
    // Base method: System.Boolean ICanvasRaycastFilter::IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    bool IsRaycastLocationValid(UnityEngine::Vector2 sp, UnityEngine::Camera* eventCamera);
    // public System.Void PerformClipping()
    // Offset: 0x11F03A0
    // Implemented from: UnityEngine.UI.IClipper
    // Base method: System.Void IClipper::PerformClipping()
    void PerformClipping();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0x11F0AB4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected override System.Void OnCanvasHierarchyChanged()
    // Offset: 0x11F0AE0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnCanvasHierarchyChanged()
    void OnCanvasHierarchyChanged();
  }; // UnityEngine.UI.RectMask2D
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::RectMask2D*, "UnityEngine.UI", "RectMask2D");
#pragma pack(pop)
