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
// Including type: System.Runtime.Serialization.IObjectReference
#include "System/Runtime/Serialization/IObjectReference.hpp"
// Including type: System.Reflection.MemberTypes
#include "System/Reflection/MemberTypes.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: Type
  class Type;
}
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
  // Autogenerated type: System.Reflection.MemberInfoSerializationHolder
  class MemberInfoSerializationHolder : public ::Il2CppObject, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IObjectReference {
    public:
    // private System.String m_memberName
    // Offset: 0x10
    ::Il2CppString* m_memberName;
    // private System.RuntimeType m_reflectedType
    // Offset: 0x18
    System::RuntimeType* m_reflectedType;
    // private System.String m_signature
    // Offset: 0x20
    ::Il2CppString* m_signature;
    // private System.String m_signature2
    // Offset: 0x28
    ::Il2CppString* m_signature2;
    // private System.Reflection.MemberTypes m_memberType
    // Offset: 0x30
    System::Reflection::MemberTypes m_memberType;
    // private System.Runtime.Serialization.SerializationInfo m_info
    // Offset: 0x38
    System::Runtime::Serialization::SerializationInfo* m_info;
    // static public System.Void GetSerializationInfo(System.Runtime.Serialization.SerializationInfo info, System.String name, System.RuntimeType reflectedClass, System.String signature, System.Reflection.MemberTypes type)
    // Offset: 0x135468C
    static void GetSerializationInfo(System::Runtime::Serialization::SerializationInfo* info, ::Il2CppString* name, System::RuntimeType* reflectedClass, ::Il2CppString* signature, System::Reflection::MemberTypes type);
    // static public System.Void GetSerializationInfo(System.Runtime.Serialization.SerializationInfo info, System.String name, System.RuntimeType reflectedClass, System.String signature, System.String signature2, System.Reflection.MemberTypes type, System.Type[] genericArguments)
    // Offset: 0x135469C
    static void GetSerializationInfo(System::Runtime::Serialization::SerializationInfo* info, ::Il2CppString* name, System::RuntimeType* reflectedClass, ::Il2CppString* signature, ::Il2CppString* signature2, System::Reflection::MemberTypes type, ::Array<System::Type*>* genericArguments);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1354928
    static MemberInfoSerializationHolder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1354BF0
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Object GetRealObject(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1354C70
    // Implemented from: System.Runtime.Serialization.IObjectReference
    // Base method: System.Object IObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext context)
    ::Il2CppObject* GetRealObject(System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_IObjectReference_GetRealObject
    // Maps to method: GetRealObject
    ::Il2CppObject* System_Runtime_Serialization_IObjectReference_GetRealObject(System::Runtime::Serialization::StreamingContext context);
  }; // System.Reflection.MemberInfoSerializationHolder
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MemberInfoSerializationHolder*, "System.Reflection", "MemberInfoSerializationHolder");
#pragma pack(pop)
