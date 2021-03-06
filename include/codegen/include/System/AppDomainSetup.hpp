// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.AppDomainSetup
  class AppDomainSetup : public ::Il2CppObject {
    public:
    // private System.String application_base
    // Offset: 0x10
    ::Il2CppString* application_base;
    // private System.String application_name
    // Offset: 0x18
    ::Il2CppString* application_name;
    // private System.String cache_path
    // Offset: 0x20
    ::Il2CppString* cache_path;
    // private System.String configuration_file
    // Offset: 0x28
    ::Il2CppString* configuration_file;
    // private System.String dynamic_base
    // Offset: 0x30
    ::Il2CppString* dynamic_base;
    // private System.String license_file
    // Offset: 0x38
    ::Il2CppString* license_file;
    // private System.String private_bin_path
    // Offset: 0x40
    ::Il2CppString* private_bin_path;
    // private System.String private_bin_path_probe
    // Offset: 0x48
    ::Il2CppString* private_bin_path_probe;
    // private System.String shadow_copy_directories
    // Offset: 0x50
    ::Il2CppString* shadow_copy_directories;
    // private System.String shadow_copy_files
    // Offset: 0x58
    ::Il2CppString* shadow_copy_files;
    // private System.Boolean publisher_policy
    // Offset: 0x60
    bool publisher_policy;
    // private System.Boolean path_changed
    // Offset: 0x61
    bool path_changed;
    // private System.Int32 loader_optimization
    // Offset: 0x64
    int loader_optimization;
    // private System.Boolean disallow_binding_redirects
    // Offset: 0x68
    bool disallow_binding_redirects;
    // private System.Boolean disallow_code_downloads
    // Offset: 0x69
    bool disallow_code_downloads;
    // private System.Object _activationArguments
    // Offset: 0x70
    ::Il2CppObject* activationArguments;
    // private System.Object domain_initializer
    // Offset: 0x78
    ::Il2CppObject* domain_initializer;
    // private System.Object application_trust
    // Offset: 0x80
    ::Il2CppObject* application_trust;
    // private System.String[] domain_initializer_args
    // Offset: 0x88
    ::Array<::Il2CppString*>* domain_initializer_args;
    // private System.Boolean disallow_appbase_probe
    // Offset: 0x90
    bool disallow_appbase_probe;
    // private System.Byte[] configuration_bytes
    // Offset: 0x98
    ::Array<uint8_t>* configuration_bytes;
    // private System.Byte[] serialized_non_primitives
    // Offset: 0xA0
    ::Array<uint8_t>* serialized_non_primitives;
    // private System.String <TargetFrameworkName>k__BackingField
    // Offset: 0xA8
    ::Il2CppString* TargetFrameworkName;
    // public System.Void .ctor()
    // Offset: 0x10BF884
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AppDomainSetup* New_ctor();
  }; // System.AppDomainSetup
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::AppDomainSetup*, "System", "AppDomainSetup");
#pragma pack(pop)
