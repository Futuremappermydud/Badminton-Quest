// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: JetBrains.Annotations.AssertionConditionType
#include "JetBrains/Annotations/AssertionConditionType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.AssertionConditionAttribute
  class AssertionConditionAttribute : public System::Attribute {
    public:
    // private JetBrains.Annotations.AssertionConditionType <ConditionType>k__BackingField
    // Offset: 0x10
    JetBrains::Annotations::AssertionConditionType ConditionType;
    // public System.Void .ctor(JetBrains.Annotations.AssertionConditionType conditionType)
    // Offset: 0x1945228
    static AssertionConditionAttribute* New_ctor(JetBrains::Annotations::AssertionConditionType conditionType);
    // public JetBrains.Annotations.AssertionConditionType get_ConditionType()
    // Offset: 0x1945254
    JetBrains::Annotations::AssertionConditionType get_ConditionType();
    // private System.Void set_ConditionType(JetBrains.Annotations.AssertionConditionType value)
    // Offset: 0x194525C
    void set_ConditionType(JetBrains::Annotations::AssertionConditionType value);
  }; // JetBrains.Annotations.AssertionConditionAttribute
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AssertionConditionAttribute*, "JetBrains.Annotations", "AssertionConditionAttribute");
#pragma pack(pop)
