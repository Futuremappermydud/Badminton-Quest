// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:08 PM
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
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Core
  class Core : public ::Il2CppObject {
    public:
    // Get static field: static private System.Boolean IsPlatformInitialized
    static bool _get_IsPlatformInitialized();
    // Set static field: static private System.Boolean IsPlatformInitialized
    static void _set_IsPlatformInitialized(bool value);
    // Get static field: static public System.Boolean LogMessages
    static bool _get_LogMessages();
    // Set static field: static public System.Boolean LogMessages
    static void _set_LogMessages(bool value);
    // static public System.Boolean IsInitialized()
    // Offset: 0xE821D0
    static bool IsInitialized();
    // static System.Void ForceInitialized()
    // Offset: 0xE82238
    static void ForceInitialized();
    // static private System.String getAppID(System.String appId)
    // Offset: 0xE822A4
    static ::Il2CppString* getAppID(::Il2CppString* appId);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> AsyncInitialize(System.String appId)
    // Offset: 0xE824A0
    static Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(::Il2CppString* appId);
    // static public System.Void Initialize(System.String appId)
    // Offset: 0xE828A0
    static void Initialize(::Il2CppString* appId);
    // static private System.String GetAppIDFromConfig()
    // Offset: 0xE82454
    static ::Il2CppString* GetAppIDFromConfig();
    // static private System.Void .cctor()
    // Offset: 0xE82BBC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xE82BB4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Core* New_ctor();
  }; // Oculus.Platform.Core
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Core*, "Oculus.Platform", "Core");
#pragma pack(pop)
