// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.MemberHolder
  class MemberHolder : public ::Il2CppObject {
    public:
    // System.Type memberType
    // Offset: 0x10
    System::Type* memberType;
    // System.Runtime.Serialization.StreamingContext context
    // Offset: 0x18
    System::Runtime::Serialization::StreamingContext context;
    // System.Void .ctor(System.Type type, System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0xFFA728
    static MemberHolder* New_ctor(System::Type* type, System::Runtime::Serialization::StreamingContext ctx);
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFA780
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFA7A0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // System.Runtime.Serialization.MemberHolder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::MemberHolder*, "System.Runtime.Serialization", "MemberHolder");
#pragma pack(pop)
