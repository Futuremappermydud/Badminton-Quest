// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.JsonUtility
  class JsonUtility : public ::Il2CppObject {
    public:
    // static private System.String ToJsonInternal(System.Object obj, System.Boolean prettyPrint)
    // Offset: 0x1967468
    static ::Il2CppString* ToJsonInternal(::Il2CppObject* obj, bool prettyPrint);
    // static private System.Object FromJsonInternal(System.String json, System.Object objectToOverwrite, System.Type type)
    // Offset: 0x19674B8
    static ::Il2CppObject* FromJsonInternal(::Il2CppString* json, ::Il2CppObject* objectToOverwrite, System::Type* type);
    // static public System.String ToJson(System.Object obj)
    // Offset: 0x1967510
    static ::Il2CppString* ToJson(::Il2CppObject* obj);
    // static public System.String ToJson(System.Object obj, System.Boolean prettyPrint)
    // Offset: 0x1967518
    static ::Il2CppString* ToJson(::Il2CppObject* obj, bool prettyPrint);
    // static public T FromJson(System.String json)
    // Offset: 0xD39D88
    template<class T>
    static T FromJson(::Il2CppString* json) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<T>("UnityEngine", "JsonUtility", "FromJson", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, json));
    }
    // static public System.Object FromJson(System.String json, System.Type type)
    // Offset: 0x196766C
    static ::Il2CppObject* FromJson(::Il2CppString* json, System::Type* type);
  }; // UnityEngine.JsonUtility
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::JsonUtility*, "UnityEngine", "JsonUtility");
#pragma pack(pop)
