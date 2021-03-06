// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.UI.ILayoutElement
#include "UnityEngine/UI/ILayoutElement.hpp"
// Including type: UnityEngine.UI.ILayoutGroup
#include "UnityEngine/UI/ILayoutGroup.hpp"
// Including type: UnityEngine.TextAnchor
#include "UnityEngine/TextAnchor.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectOffset
  class RectOffset;
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.LayoutGroup
  class LayoutGroup : public UnityEngine::EventSystems::UIBehaviour, public UnityEngine::UI::ILayoutElement, public UnityEngine::UI::ILayoutGroup, public UnityEngine::UI::ILayoutController {
    public:
    // Nested type: UnityEngine::UI::LayoutGroup::$DelayedSetDirty$d__56
    class $DelayedSetDirty$d__56;
    // protected UnityEngine.RectOffset m_Padding
    // Offset: 0x18
    UnityEngine::RectOffset* m_Padding;
    // protected UnityEngine.TextAnchor m_ChildAlignment
    // Offset: 0x20
    UnityEngine::TextAnchor m_ChildAlignment;
    // private UnityEngine.RectTransform m_Rect
    // Offset: 0x28
    UnityEngine::RectTransform* m_Rect;
    // protected UnityEngine.DrivenRectTransformTracker m_Tracker
    // Offset: 0x30
    UnityEngine::DrivenRectTransformTracker m_Tracker;
    // private UnityEngine.Vector2 m_TotalMinSize
    // Offset: 0x34
    UnityEngine::Vector2 m_TotalMinSize;
    // private UnityEngine.Vector2 m_TotalPreferredSize
    // Offset: 0x3C
    UnityEngine::Vector2 m_TotalPreferredSize;
    // private UnityEngine.Vector2 m_TotalFlexibleSize
    // Offset: 0x44
    UnityEngine::Vector2 m_TotalFlexibleSize;
    // private System.Collections.Generic.List`1<UnityEngine.RectTransform> m_RectChildren
    // Offset: 0x50
    System::Collections::Generic::List_1<UnityEngine::RectTransform*>* m_RectChildren;
    // public UnityEngine.RectOffset get_padding()
    // Offset: 0x11E84A0
    UnityEngine::RectOffset* get_padding();
    // public System.Void set_padding(UnityEngine.RectOffset value)
    // Offset: 0x11E84A8
    void set_padding(UnityEngine::RectOffset* value);
    // public UnityEngine.TextAnchor get_childAlignment()
    // Offset: 0x11E850C
    UnityEngine::TextAnchor get_childAlignment();
    // public System.Void set_childAlignment(UnityEngine.TextAnchor value)
    // Offset: 0x11E8514
    void set_childAlignment(UnityEngine::TextAnchor value);
    // protected UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x11E8578
    UnityEngine::RectTransform* get_rectTransform();
    // protected System.Collections.Generic.List`1<UnityEngine.RectTransform> get_rectChildren()
    // Offset: 0x11E8624
    System::Collections::Generic::List_1<UnityEngine::RectTransform*>* get_rectChildren();
    // protected System.Single GetTotalMinSize(System.Int32 axis)
    // Offset: 0x11E894C
    float GetTotalMinSize(int axis);
    // protected System.Single GetTotalPreferredSize(System.Int32 axis)
    // Offset: 0x11E8968
    float GetTotalPreferredSize(int axis);
    // protected System.Single GetTotalFlexibleSize(System.Int32 axis)
    // Offset: 0x11E8984
    float GetTotalFlexibleSize(int axis);
    // protected System.Single GetStartOffset(System.Int32 axis, System.Single requiredSpaceWithoutPadding)
    // Offset: 0x11E8CA4
    float GetStartOffset(int axis, float requiredSpaceWithoutPadding);
    // protected System.Single GetAlignmentOnAxis(System.Int32 axis)
    // Offset: 0x11E8DC8
    float GetAlignmentOnAxis(int axis);
    // protected System.Void SetLayoutInputForAxis(System.Single totalMin, System.Single totalPreferred, System.Single totalFlexible, System.Int32 axis)
    // Offset: 0x11E8E14
    void SetLayoutInputForAxis(float totalMin, float totalPreferred, float totalFlexible, int axis);
    // protected System.Void SetChildAlongAxis(UnityEngine.RectTransform rect, System.Int32 axis, System.Single pos)
    // Offset: 0x11E8E74
    void SetChildAlongAxis(UnityEngine::RectTransform* rect, int axis, float pos);
    // protected System.Void SetChildAlongAxisWithScale(UnityEngine.RectTransform rect, System.Int32 axis, System.Single pos, System.Single scaleFactor)
    // Offset: 0x11E8F2C
    void SetChildAlongAxisWithScale(UnityEngine::RectTransform* rect, int axis, float pos, float scaleFactor);
    // protected System.Void SetChildAlongAxis(UnityEngine.RectTransform rect, System.Int32 axis, System.Single pos, System.Single size)
    // Offset: 0x11E90EC
    void SetChildAlongAxis(UnityEngine::RectTransform* rect, int axis, float pos, float size);
    // protected System.Void SetChildAlongAxisWithScale(UnityEngine.RectTransform rect, System.Int32 axis, System.Single pos, System.Single size, System.Single scaleFactor)
    // Offset: 0x11E91AC
    void SetChildAlongAxisWithScale(UnityEngine::RectTransform* rect, int axis, float pos, float size, float scaleFactor);
    // private System.Boolean get_isRootLayoutGroup()
    // Offset: 0x11E9380
    bool get_isRootLayoutGroup();
    // protected System.Void OnTransformChildrenChanged()
    // Offset: 0x11E950C
    void OnTransformChildrenChanged();
    // protected System.Void SetProperty(T currentValue, T newValue)
    // Offset: 0xC4D4EC
    template<class T>
    void SetProperty(T& currentValue, T newValue) {
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod(this, "SetProperty", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, currentValue, newValue));
    }
    // protected System.Void SetDirty()
    // Offset: 0x11E8B24
    void SetDirty();
    // private System.Collections.IEnumerator DelayedSetDirty(UnityEngine.RectTransform rectTransform)
    // Offset: 0x11E9510
    System::Collections::IEnumerator* DelayedSetDirty(UnityEngine::RectTransform* rectTransform);
    // public System.Void CalculateLayoutInputHorizontal()
    // Offset: 0x11E862C
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputHorizontal()
    void CalculateLayoutInputHorizontal();
    // public System.Void CalculateLayoutInputVertical()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputVertical()
    void CalculateLayoutInputVertical();
    // public System.Single get_minWidth()
    // Offset: 0x11E893C
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_minWidth()
    float get_minWidth();
    // public System.Single get_preferredWidth()
    // Offset: 0x11E8958
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_preferredWidth()
    float get_preferredWidth();
    // public System.Single get_flexibleWidth()
    // Offset: 0x11E8974
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_flexibleWidth()
    float get_flexibleWidth();
    // public System.Single get_minHeight()
    // Offset: 0x11E8990
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_minHeight()
    float get_minHeight();
    // public System.Single get_preferredHeight()
    // Offset: 0x11E89A0
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_preferredHeight()
    float get_preferredHeight();
    // public System.Single get_flexibleHeight()
    // Offset: 0x11E89B0
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_flexibleHeight()
    float get_flexibleHeight();
    // public System.Int32 get_layoutPriority()
    // Offset: 0x11E89C0
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Int32 ILayoutElement::get_layoutPriority()
    int get_layoutPriority();
    // public System.Void SetLayoutHorizontal()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.UI.ILayoutController
    // Base method: System.Void ILayoutController::SetLayoutHorizontal()
    void SetLayoutHorizontal();
    // public System.Void SetLayoutVertical()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.UI.ILayoutController
    // Base method: System.Void ILayoutController::SetLayoutVertical()
    void SetLayoutVertical();
    // protected System.Void .ctor()
    // Offset: 0x11E89C8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LayoutGroup* New_ctor();
    // protected override System.Void OnEnable()
    // Offset: 0x11E8AFC
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x11E8C14
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x11E8CA0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x11E94CC
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
  }; // UnityEngine.UI.LayoutGroup
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::LayoutGroup*, "UnityEngine.UI", "LayoutGroup");
#pragma pack(pop)
