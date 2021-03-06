// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:57 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NUnit.Framework.Constraints.ToleranceMode
#include "NUnit/Framework/Constraints/ToleranceMode.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Autogenerated type: NUnit.Framework.Constraints.Tolerance
  class Tolerance : public ::Il2CppObject {
    public:
    // private readonly NUnit.Framework.Constraints.ToleranceMode mode
    // Offset: 0x10
    NUnit::Framework::Constraints::ToleranceMode mode;
    // private readonly System.Object amount
    // Offset: 0x18
    ::Il2CppObject* amount;
    // static public NUnit.Framework.Constraints.Tolerance get_Default()
    // Offset: 0x105F158
    static NUnit::Framework::Constraints::Tolerance* get_Default();
    // static public NUnit.Framework.Constraints.Tolerance get_Exact()
    // Offset: 0x1066EF4
    static NUnit::Framework::Constraints::Tolerance* get_Exact();
    // public System.Void .ctor(System.Object amount)
    // Offset: 0x1069E00
    static Tolerance* New_ctor(::Il2CppObject* amount);
    // private System.Void .ctor(System.Object amount, NUnit.Framework.Constraints.ToleranceMode mode)
    // Offset: 0x106A6AC
    static Tolerance* New_ctor(::Il2CppObject* amount, NUnit::Framework::Constraints::ToleranceMode mode);
    // public NUnit.Framework.Constraints.ToleranceMode get_Mode()
    // Offset: 0x10612A4
    NUnit::Framework::Constraints::ToleranceMode get_Mode();
    // public System.Object get_Value()
    // Offset: 0x106129C
    ::Il2CppObject* get_Value();
    // public System.Boolean get_IsUnsetOrDefault()
    // Offset: 0x106128C
    bool get_IsUnsetOrDefault();
  }; // NUnit.Framework.Constraints.Tolerance
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::Tolerance*, "NUnit.Framework.Constraints", "Tolerance");
#pragma pack(pop)
