// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodReturnMessage
#include "System/Runtime/Remoting/Messaging/IMethodReturnMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.IInternalMessage
#include "System/Runtime/Remoting/Messaging/IInternalMessage.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
  // Forward declaring type: MethodReturnDictionary
  class MethodReturnDictionary;
  // Forward declaring type: ArgInfo
  class ArgInfo;
  // Forward declaring type: IMethodCallMessage
  class IMethodCallMessage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: Identity
  class Identity;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.ReturnMessage
  class ReturnMessage : public ::Il2CppObject, public System::Runtime::Remoting::Messaging::IMethodReturnMessage, public System::Runtime::Remoting::Messaging::IMethodMessage, public System::Runtime::Remoting::Messaging::IMessage, public System::Runtime::Remoting::Messaging::IInternalMessage {
    public:
    // private System.Object[] _outArgs
    // Offset: 0x10
    ::Array<::Il2CppObject*>* outArgs;
    // private System.Object[] _args
    // Offset: 0x18
    ::Array<::Il2CppObject*>* args;
    // private System.Runtime.Remoting.Messaging.LogicalCallContext _callCtx
    // Offset: 0x20
    System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx;
    // private System.Object _returnValue
    // Offset: 0x28
    ::Il2CppObject* returnValue;
    // private System.String _uri
    // Offset: 0x30
    ::Il2CppString* uri;
    // private System.Exception _exception
    // Offset: 0x38
    System::Exception* exception;
    // private System.Reflection.MethodBase _methodBase
    // Offset: 0x40
    System::Reflection::MethodBase* methodBase;
    // private System.String _methodName
    // Offset: 0x48
    ::Il2CppString* methodName;
    // private System.Type[] _methodSignature
    // Offset: 0x50
    ::Array<System::Type*>* methodSignature;
    // private System.String _typeName
    // Offset: 0x58
    ::Il2CppString* typeName;
    // private System.Runtime.Remoting.Messaging.MethodReturnDictionary _properties
    // Offset: 0x60
    System::Runtime::Remoting::Messaging::MethodReturnDictionary* properties;
    // private System.Runtime.Remoting.Identity _targetIdentity
    // Offset: 0x68
    System::Runtime::Remoting::Identity* targetIdentity;
    // private System.Runtime.Remoting.Messaging.ArgInfo _inArgInfo
    // Offset: 0x70
    System::Runtime::Remoting::Messaging::ArgInfo* inArgInfo;
    // public System.Void .ctor(System.Object ret, System.Object[] outArgs, System.Int32 outArgsCount, System.Runtime.Remoting.Messaging.LogicalCallContext callCtx, System.Runtime.Remoting.Messaging.IMethodCallMessage mcm)
    // Offset: 0xDFABC4
    static ReturnMessage* New_ctor(::Il2CppObject* ret, ::Array<::Il2CppObject*>* outArgs, int outArgsCount, System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm);
    // public System.Void .ctor(System.Exception e, System.Runtime.Remoting.Messaging.IMethodCallMessage mcm)
    // Offset: 0xDFADA4
    static ReturnMessage* New_ctor(System::Exception* e, System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm);
    // public System.Void set_Uri(System.String value)
    // Offset: 0xDFB294
    void set_Uri(::Il2CppString* value);
    // public System.Int32 get_ArgCount()
    // Offset: 0xDFAF24
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Int32 IMethodMessage::get_ArgCount()
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0xDFAF40
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object[] IMethodMessage::get_Args()
    ::Array<::Il2CppObject*>* get_Args();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0xDFAF48
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Runtime.Remoting.Messaging.LogicalCallContext IMethodMessage::get_LogicalCallContext()
    System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0xDFAFC0
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Reflection.MethodBase IMethodMessage::get_MethodBase()
    System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0xDFAFC8
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_MethodName()
    ::Il2CppString* get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0xDFB030
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object IMethodMessage::get_MethodSignature()
    ::Il2CppObject* get_MethodSignature();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0xDFB188
    // Implemented from: System.Runtime.Remoting.Messaging.IMessage
    // Base method: System.Collections.IDictionary IMessage::get_Properties()
    System::Collections::IDictionary* get_Properties();
    // public System.String get_TypeName()
    // Offset: 0xDFB210
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_TypeName()
    ::Il2CppString* get_TypeName();
    // public System.String get_Uri()
    // Offset: 0xDFB28C
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_Uri()
    ::Il2CppString* get_Uri();
    // private System.String System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri()
    // Offset: 0xDFB29C
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.String IInternalMessage::get_Uri()
    ::Il2CppString* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String value)
    // Offset: 0xDFB2A4
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.Void IInternalMessage::set_Uri(System.String value)
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::Il2CppString* value);
    // public System.Object GetArg(System.Int32 argNum)
    // Offset: 0xDFB2AC
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object IMethodMessage::GetArg(System.Int32 argNum)
    ::Il2CppObject* GetArg(int argNum);
    // public System.Exception get_Exception()
    // Offset: 0xDFB2E8
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodReturnMessage
    // Base method: System.Exception IMethodReturnMessage::get_Exception()
    System::Exception* get_Exception();
    // public System.Object[] get_OutArgs()
    // Offset: 0xDFB2F0
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodReturnMessage
    // Base method: System.Object[] IMethodReturnMessage::get_OutArgs()
    ::Array<::Il2CppObject*>* get_OutArgs();
    // public System.Object get_ReturnValue()
    // Offset: 0xDFB3CC
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodReturnMessage
    // Base method: System.Object IMethodReturnMessage::get_ReturnValue()
    ::Il2CppObject* get_ReturnValue();
    // private System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
    // Offset: 0xDFB3D4
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.Runtime.Remoting.Identity IInternalMessage::get_TargetIdentity()
    System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(System.Runtime.Remoting.Identity value)
    // Offset: 0xDFB3DC
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.Void IInternalMessage::set_TargetIdentity(System.Runtime.Remoting.Identity value)
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity* value);
  }; // System.Runtime.Remoting.Messaging.ReturnMessage
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ReturnMessage*, "System.Runtime.Remoting.Messaging", "ReturnMessage");
#pragma pack(pop)
