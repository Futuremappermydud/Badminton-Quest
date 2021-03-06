// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.IObjectReference
#include "System/Runtime/Serialization/IObjectReference.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: SafeSerializationEventArgs
  class SafeSerializationEventArgs;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: EventHandler`1<TEventArgs>
  template<typename TEventArgs>
  class EventHandler_1;
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.SafeSerializationManager
  class SafeSerializationManager : public ::Il2CppObject, public System::Runtime::Serialization::IObjectReference, public System::Runtime::Serialization::ISerializable {
    public:
    // private System.Collections.Generic.IList`1<System.Object> m_serializedStates
    // Offset: 0x10
    System::Collections::Generic::IList_1<::Il2CppObject*>* m_serializedStates;
    // private System.Runtime.Serialization.SerializationInfo m_savedSerializationInfo
    // Offset: 0x18
    System::Runtime::Serialization::SerializationInfo* m_savedSerializationInfo;
    // private System.Object m_realObject
    // Offset: 0x20
    ::Il2CppObject* m_realObject;
    // private System.RuntimeType m_realType
    // Offset: 0x28
    System::RuntimeType* m_realType;
    // private System.EventHandler`1<System.Runtime.Serialization.SafeSerializationEventArgs> SerializeObjectState
    // Offset: 0x30
    System::EventHandler_1<System::Runtime::Serialization::SafeSerializationEventArgs*>* SerializeObjectState;
    // static field const value: static private System.String RealTypeSerializationName
    static constexpr const char* RealTypeSerializationName = "CLR_SafeSerializationManager_RealType";
    // Get static field: static private System.String RealTypeSerializationName
    static ::Il2CppString* _get_RealTypeSerializationName();
    // Set static field: static private System.String RealTypeSerializationName
    static void _set_RealTypeSerializationName(::Il2CppString* value);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFFDB4
    static SafeSerializationManager* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Boolean get_IsActive()
    // Offset: 0x10002B0
    bool get_IsActive();
    // System.Void CompleteSerialization(System.Object serializedObject, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x10002C0
    void CompleteSerialization(::Il2CppObject* serializedObject, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void CompleteDeserialization(System.Object deserializedObject)
    // Offset: 0x1000684
    void CompleteDeserialization(::Il2CppObject* deserializedObject);
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1000D40
    void OnDeserialized(System::Runtime::Serialization::StreamingContext context);
    // System.Void .ctor()
    // Offset: 0xFFFDAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SafeSerializationManager* New_ctor();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x10009B0
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Object System.Runtime.Serialization.IObjectReference.GetRealObject(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1000A58
    // Implemented from: System.Runtime.Serialization.IObjectReference
    // Base method: System.Object IObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext context)
    ::Il2CppObject* System_Runtime_Serialization_IObjectReference_GetRealObject(System::Runtime::Serialization::StreamingContext context);
  }; // System.Runtime.Serialization.SafeSerializationManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SafeSerializationManager*, "System.Runtime.Serialization", "SafeSerializationManager");
#pragma pack(pop)
