// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:29 PM
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
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.PropertyName
  struct PropertyName : public System::ValueType, public System::IEquatable_1<UnityEngine::PropertyName> {
    public:
    // System.Int32 id
    // Offset: 0x0
    int id;
    // Creating value type constructor for type: PropertyName
    PropertyName(int id_ = {}) : id{id_} {}
    // public System.Void .ctor(System.String name)
    // Offset: 0xA45438
    static PropertyName* New_ctor(::Il2CppString* name);
    // public System.Void .ctor(UnityEngine.PropertyName other)
    // Offset: 0xA45498
    static PropertyName* New_ctor(UnityEngine::PropertyName other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA454A0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xA454A8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.PropertyName other)
    // Offset: 0xA454B0
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.PropertyName other)
    bool Equals(UnityEngine::PropertyName other);
    // public override System.String ToString()
    // Offset: 0xA454C0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.PropertyName
  // static public System.Boolean op_Equality(UnityEngine.PropertyName lhs, UnityEngine.PropertyName rhs)
  // Offset: 0x1404E98
  bool operator ==(const UnityEngine::PropertyName& lhs, const UnityEngine::PropertyName& rhs);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PropertyName, "UnityEngine", "PropertyName");
#pragma pack(pop)
