// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:30 PM
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
// Type namespace: UnityEngine._Scripting.APIUpdating
namespace UnityEngine::_Scripting::APIUpdating {
  // Autogenerated type: UnityEngine._Scripting.APIUpdating.APIUpdaterRuntimeHelpers
  class APIUpdaterRuntimeHelpers : public ::Il2CppObject {
    public:
    // static System.Boolean GetMovedFromAttributeDataForType(System.Type sourceType, System.String assembly, System.String nsp, System.String klass)
    // Offset: 0x1384310
    static bool GetMovedFromAttributeDataForType(System::Type* sourceType, ::Il2CppString*& assembly, ::Il2CppString*& nsp, ::Il2CppString*& klass);
    // static System.Boolean GetObsoleteTypeRedirection(System.Type sourceType, System.String assemblyName, System.String nsp, System.String className)
    // Offset: 0x1384484
    static bool GetObsoleteTypeRedirection(System::Type* sourceType, ::Il2CppString*& assemblyName, ::Il2CppString*& nsp, ::Il2CppString*& className);
  }; // UnityEngine._Scripting.APIUpdating.APIUpdaterRuntimeHelpers
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*, "UnityEngine._Scripting.APIUpdating", "APIUpdaterRuntimeHelpers");
#pragma pack(pop)
