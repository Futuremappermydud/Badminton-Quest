// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Security.Cryptography.OidGroup
#include "System/Security/Cryptography/OidGroup.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.Oid
  class Oid : public ::Il2CppObject {
    public:
    // private System.String m_value
    // Offset: 0x10
    ::Il2CppString* m_value;
    // private System.String m_friendlyName
    // Offset: 0x18
    ::Il2CppString* m_friendlyName;
    // private System.Security.Cryptography.OidGroup m_group
    // Offset: 0x20
    System::Security::Cryptography::OidGroup m_group;
    // public System.Void .ctor(System.String oid)
    // Offset: 0x1203620
    static Oid* New_ctor(::Il2CppString* oid);
    // System.Void .ctor(System.String oid, System.Security.Cryptography.OidGroup group, System.Boolean lookupFriendlyName)
    // Offset: 0x120362C
    static Oid* New_ctor(::Il2CppString* oid, System::Security::Cryptography::OidGroup group, bool lookupFriendlyName);
    // public System.Void .ctor(System.String value, System.String friendlyName)
    // Offset: 0x12036F8
    static Oid* New_ctor(::Il2CppString* value, ::Il2CppString* friendlyName);
    // public System.Void .ctor(System.Security.Cryptography.Oid oid)
    // Offset: 0x1201278
    static Oid* New_ctor(System::Security::Cryptography::Oid* oid);
    // public System.String get_Value()
    // Offset: 0x1203748
    ::Il2CppString* get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x1203750
    void set_Value(::Il2CppString* value);
  }; // System.Security.Cryptography.Oid
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::Oid*, "System.Security.Cryptography", "Oid");
#pragma pack(pop)
