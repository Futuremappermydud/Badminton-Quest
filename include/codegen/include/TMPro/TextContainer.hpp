// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: TMPro.TextContainerAnchors
#include "TMPro/TextContainerAnchors.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TextContainer
  class TextContainer : public UnityEngine::EventSystems::UIBehaviour {
    public:
    // private System.Boolean m_hasChanged
    // Offset: 0x18
    bool m_hasChanged;
    // private UnityEngine.Vector2 m_pivot
    // Offset: 0x1C
    UnityEngine::Vector2 m_pivot;
    // private TMPro.TextContainerAnchors m_anchorPosition
    // Offset: 0x24
    TMPro::TextContainerAnchors m_anchorPosition;
    // private UnityEngine.Rect m_rect
    // Offset: 0x28
    UnityEngine::Rect m_rect;
    // private System.Boolean m_isDefaultWidth
    // Offset: 0x38
    bool m_isDefaultWidth;
    // private System.Boolean m_isDefaultHeight
    // Offset: 0x39
    bool m_isDefaultHeight;
    // private System.Boolean m_isAutoFitting
    // Offset: 0x3A
    bool m_isAutoFitting;
    // private UnityEngine.Vector3[] m_corners
    // Offset: 0x40
    ::Array<UnityEngine::Vector3>* m_corners;
    // private UnityEngine.Vector3[] m_worldCorners
    // Offset: 0x48
    ::Array<UnityEngine::Vector3>* m_worldCorners;
    // private UnityEngine.Vector4 m_margins
    // Offset: 0x50
    UnityEngine::Vector4 m_margins;
    // private UnityEngine.RectTransform m_rectTransform
    // Offset: 0x60
    UnityEngine::RectTransform* m_rectTransform;
    // Get static field: static private UnityEngine.Vector2 k_defaultSize
    static UnityEngine::Vector2 _get_k_defaultSize();
    // Set static field: static private UnityEngine.Vector2 k_defaultSize
    static void _set_k_defaultSize(UnityEngine::Vector2 value);
    // private TMPro.TextMeshPro m_textMeshPro
    // Offset: 0x68
    TMPro::TextMeshPro* m_textMeshPro;
    // public System.Boolean get_hasChanged()
    // Offset: 0xDB208C
    bool get_hasChanged();
    // public System.Void set_hasChanged(System.Boolean value)
    // Offset: 0xDB2094
    void set_hasChanged(bool value);
    // public UnityEngine.Vector2 get_pivot()
    // Offset: 0xDB20A0
    UnityEngine::Vector2 get_pivot();
    // public System.Void set_pivot(UnityEngine.Vector2 value)
    // Offset: 0xDB20A8
    void set_pivot(UnityEngine::Vector2 value);
    // public TMPro.TextContainerAnchors get_anchorPosition()
    // Offset: 0xDB25D4
    TMPro::TextContainerAnchors get_anchorPosition();
    // public System.Void set_anchorPosition(TMPro.TextContainerAnchors value)
    // Offset: 0xDB25DC
    void set_anchorPosition(TMPro::TextContainerAnchors value);
    // public UnityEngine.Rect get_rect()
    // Offset: 0xDB2730
    UnityEngine::Rect get_rect();
    // public System.Void set_rect(UnityEngine.Rect value)
    // Offset: 0xDB273C
    void set_rect(UnityEngine::Rect value);
    // public UnityEngine.Vector2 get_size()
    // Offset: 0xDB27C8
    UnityEngine::Vector2 get_size();
    // public System.Void set_size(UnityEngine.Vector2 value)
    // Offset: 0xDB282C
    void set_size(UnityEngine::Vector2 value);
    // public System.Single get_width()
    // Offset: 0xDB299C
    float get_width();
    // public System.Void set_width(System.Single value)
    // Offset: 0xDB29A8
    void set_width(float value);
    // public System.Single get_height()
    // Offset: 0xDB2A1C
    float get_height();
    // public System.Void set_height(System.Single value)
    // Offset: 0xDB2A28
    void set_height(float value);
    // public System.Boolean get_isDefaultWidth()
    // Offset: 0xDB2A98
    bool get_isDefaultWidth();
    // public System.Boolean get_isDefaultHeight()
    // Offset: 0xDB2AA0
    bool get_isDefaultHeight();
    // public System.Boolean get_isAutoFitting()
    // Offset: 0xDB2AA8
    bool get_isAutoFitting();
    // public System.Void set_isAutoFitting(System.Boolean value)
    // Offset: 0xDB2AB0
    void set_isAutoFitting(bool value);
    // public UnityEngine.Vector3[] get_corners()
    // Offset: 0xDB2ABC
    ::Array<UnityEngine::Vector3>* get_corners();
    // public UnityEngine.Vector3[] get_worldCorners()
    // Offset: 0xDB2AC4
    ::Array<UnityEngine::Vector3>* get_worldCorners();
    // public UnityEngine.Vector4 get_margins()
    // Offset: 0xDB2ACC
    UnityEngine::Vector4 get_margins();
    // public System.Void set_margins(UnityEngine.Vector4 value)
    // Offset: 0xDB2AD8
    void set_margins(UnityEngine::Vector4 value);
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0xDB2BCC
    UnityEngine::RectTransform* get_rectTransform();
    // public TMPro.TextMeshPro get_textMeshPro()
    // Offset: 0xDB2C78
    TMPro::TextMeshPro* get_textMeshPro();
    // private System.Void OnContainerChanged()
    // Offset: 0xDB2498
    void OnContainerChanged();
    // private System.Void SetRect(UnityEngine.Vector2 size)
    // Offset: 0xDB2918
    void SetRect(UnityEngine::Vector2 size);
    // private System.Void UpdateCorners()
    // Offset: 0xDB2DE4
    void UpdateCorners();
    // private UnityEngine.Vector2 GetPivot(TMPro.TextContainerAnchors anchor)
    // Offset: 0xDB2620
    UnityEngine::Vector2 GetPivot(TMPro::TextContainerAnchors anchor);
    // private TMPro.TextContainerAnchors GetAnchorPosition(UnityEngine.Vector2 pivot)
    // Offset: 0xDB2174
    TMPro::TextContainerAnchors GetAnchorPosition(UnityEngine::Vector2 pivot);
    // protected override System.Void Awake()
    // Offset: 0xDB2D24
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Awake()
    void Awake();
    // protected override System.Void OnEnable()
    // Offset: 0xDB2DDC
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0xDB2DE0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0xDB3054
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // public System.Void .ctor()
    // Offset: 0xDB31F0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TextContainer* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xDB3280
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // TMPro.TextContainer
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextContainer*, "TMPro", "TextContainer");
#pragma pack(pop)
