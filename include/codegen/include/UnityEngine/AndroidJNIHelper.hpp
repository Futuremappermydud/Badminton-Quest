// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaRunnable
  class AndroidJavaRunnable;
  // Forward declaring type: AndroidJavaProxy
  class AndroidJavaProxy;
  // Forward declaring type: jvalue
  struct jvalue;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AndroidJNIHelper
  class AndroidJNIHelper : public ::Il2CppObject {
    public:
    // static public System.Boolean get_debug()
    // Offset: 0x1904198
    static bool get_debug();
    // static public System.Void set_debug(System.Boolean value)
    // Offset: 0x19041CC
    static void set_debug(bool value);
    // static public System.IntPtr GetConstructorID(System.IntPtr javaClass)
    // Offset: 0x190420C
    static System::IntPtr GetConstructorID(System::IntPtr javaClass);
    // static public System.IntPtr GetConstructorID(System.IntPtr javaClass, System.String signature)
    // Offset: 0x190425C
    static System::IntPtr GetConstructorID(System::IntPtr javaClass, ::Il2CppString* signature);
    // static public System.IntPtr GetMethodID(System.IntPtr javaClass, System.String methodName)
    // Offset: 0x1904410
    static System::IntPtr GetMethodID(System::IntPtr javaClass, ::Il2CppString* methodName);
    // static public System.IntPtr GetMethodID(System.IntPtr javaClass, System.String methodName, System.String signature)
    // Offset: 0x190447C
    static System::IntPtr GetMethodID(System::IntPtr javaClass, ::Il2CppString* methodName, ::Il2CppString* signature);
    // static public System.IntPtr GetMethodID(System.IntPtr javaClass, System.String methodName, System.String signature, System.Boolean isStatic)
    // Offset: 0x1904474
    static System::IntPtr GetMethodID(System::IntPtr javaClass, ::Il2CppString* methodName, ::Il2CppString* signature, bool isStatic);
    // static public System.IntPtr GetFieldID(System.IntPtr javaClass, System.String fieldName)
    // Offset: 0x1904648
    static System::IntPtr GetFieldID(System::IntPtr javaClass, ::Il2CppString* fieldName);
    // static public System.IntPtr GetFieldID(System.IntPtr javaClass, System.String fieldName, System.String signature)
    // Offset: 0x19046B4
    static System::IntPtr GetFieldID(System::IntPtr javaClass, ::Il2CppString* fieldName, ::Il2CppString* signature);
    // static public System.IntPtr GetFieldID(System.IntPtr javaClass, System.String fieldName, System.String signature, System.Boolean isStatic)
    // Offset: 0x19046AC
    static System::IntPtr GetFieldID(System::IntPtr javaClass, ::Il2CppString* fieldName, ::Il2CppString* signature, bool isStatic);
    // static public System.IntPtr CreateJavaRunnable(UnityEngine.AndroidJavaRunnable jrunnable)
    // Offset: 0x19049B0
    static System::IntPtr CreateJavaRunnable(UnityEngine::AndroidJavaRunnable* jrunnable);
    // static public System.IntPtr CreateJavaProxy(UnityEngine.AndroidJavaProxy proxy)
    // Offset: 0x1904A14
    static System::IntPtr CreateJavaProxy(UnityEngine::AndroidJavaProxy* proxy);
    // static public System.IntPtr ConvertToJNIArray(System.Array array)
    // Offset: 0x1904BA0
    static System::IntPtr ConvertToJNIArray(System::Array* array);
    // static public UnityEngine.jvalue[] CreateJNIArgArray(System.Object[] args)
    // Offset: 0x19053DC
    static ::Array<UnityEngine::jvalue>* CreateJNIArgArray(::Array<::Il2CppObject*>* args);
    // static public System.Void DeleteJNIArgArray(System.Object[] args, UnityEngine.jvalue[] jniArgs)
    // Offset: 0x19058B4
    static void DeleteJNIArgArray(::Array<::Il2CppObject*>* args, ::Array<UnityEngine::jvalue>* jniArgs);
    // static public System.IntPtr GetConstructorID(System.IntPtr jclass, System.Object[] args)
    // Offset: 0x19059D8
    static System::IntPtr GetConstructorID(System::IntPtr jclass, ::Array<::Il2CppObject*>* args);
    // static public System.IntPtr GetMethodID(System.IntPtr jclass, System.String methodName, System.Object[] args, System.Boolean isStatic)
    // Offset: 0x1905A30
    static System::IntPtr GetMethodID(System::IntPtr jclass, ::Il2CppString* methodName, ::Array<::Il2CppObject*>* args, bool isStatic);
    // static public System.String GetSignature(System.Object obj)
    // Offset: 0x1905AB8
    static ::Il2CppString* GetSignature(::Il2CppObject* obj);
    // static public System.String GetSignature(System.Object[] args)
    // Offset: 0x1906660
    static ::Il2CppString* GetSignature(::Array<::Il2CppObject*>* args);
    // static public ArrayType ConvertFromJNIArray(System.IntPtr array)
    // Offset: 0x14C332C
    template<class ArrayType>
    static ArrayType ConvertFromJNIArray(System::IntPtr array) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<ArrayType>("UnityEngine", "AndroidJNIHelper", "ConvertFromJNIArray", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayType>::get()}, array));
    }
    // static public System.IntPtr GetMethodID(System.IntPtr jclass, System.String methodName, System.Object[] args, System.Boolean isStatic)
    // Offset: 0x11CC1EC
    // ABORTED: conflicts with another method. static System::IntPtr GetMethodID(System::IntPtr jclass, ::Il2CppString* methodName, ::Array<::Il2CppObject*>* args, bool isStatic)
    // static public System.IntPtr GetFieldID(System.IntPtr jclass, System.String fieldName, System.Boolean isStatic)
    // Offset: 0x11CC1D8
    template<class FieldType>
    static System::IntPtr GetFieldID(System::IntPtr jclass, ::Il2CppString* fieldName, bool isStatic) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::IntPtr>("UnityEngine", "AndroidJNIHelper", "GetFieldID", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, jclass, fieldName, isStatic));
    }
    // static public System.String GetSignature(System.Object[] args)
    // Offset: 0xC5ED84
    // ABORTED: conflicts with another method. static ::Il2CppString* GetSignature(::Array<::Il2CppObject*>* args)
  }; // UnityEngine.AndroidJNIHelper
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJNIHelper*, "UnityEngine", "AndroidJNIHelper");
#pragma pack(pop)
