// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Security.Claims.ClaimsPrincipal
#include "System/Security/Claims/ClaimsPrincipal.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: WindowsIdentity
  class WindowsIdentity;
}
// Completed forward declares
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Autogenerated type: System.Security.Principal.WindowsPrincipal
  class WindowsPrincipal : public System::Security::Claims::ClaimsPrincipal {
    public:
    // private System.Security.Principal.WindowsIdentity _identity
    // Offset: 0x28
    System::Security::Principal::WindowsIdentity* identity;
    // public System.Void .ctor(System.Security.Principal.WindowsIdentity ntIdentity)
    // Offset: 0xDD759C
    static WindowsPrincipal* New_ctor(System::Security::Principal::WindowsIdentity* ntIdentity);
  }; // System.Security.Principal.WindowsPrincipal
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::WindowsPrincipal*, "System.Security.Principal", "WindowsPrincipal");
#pragma pack(pop)
