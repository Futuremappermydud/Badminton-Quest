// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.AndroidJavaObject
#include "UnityEngine/AndroidJavaObject.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AndroidJavaClass
  class AndroidJavaClass : public UnityEngine::AndroidJavaObject {
    public:
    // public System.Void .ctor(System.String className)
    // Offset: 0x190A024
    static AndroidJavaClass* New_ctor(::Il2CppString* className);
    // private System.Void _AndroidJavaClass(System.String className)
    // Offset: 0x190A0AC
    void _AndroidJavaClass(::Il2CppString* className);
    // System.Void .ctor(System.IntPtr jclass)
    // Offset: 0x190A2D4
    // Implemented from: UnityEngine.AndroidJavaObject
    // Base method: System.Void AndroidJavaObject::.ctor(System.IntPtr jclass)
    static AndroidJavaClass* New_ctor(System::IntPtr jclass);
  }; // UnityEngine.AndroidJavaClass
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaClass*, "UnityEngine", "AndroidJavaClass");
#pragma pack(pop)
