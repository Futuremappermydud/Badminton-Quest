// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.Missing
  class Missing : public ::Il2CppObject, public System::Runtime::Serialization::ISerializable {
    public:
    // Get static field: static public readonly System.Reflection.Missing Value
    static System::Reflection::Missing* _get_Value();
    // Set static field: static public readonly System.Reflection.Missing Value
    static void _set_Value(System::Reflection::Missing* value);
    // static private System.Void .cctor()
    // Offset: 0x113A36C
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x113A2CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Missing* New_ctor();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x113A2D4
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Reflection.Missing
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Missing*, "System.Reflection", "Missing");
#pragma pack(pop)
