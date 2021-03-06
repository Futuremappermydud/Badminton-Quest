// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509Extension
#include "System/Security/Cryptography/X509Certificates/X509Extension.hpp"
// Including type: System.Security.Cryptography.AsnDecodeStatus
#include "System/Security/Cryptography/AsnDecodeStatus.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: OidCollection
  class OidCollection;
  // Skipping declaration: AsnEncodedData because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
  class X509EnhancedKeyUsageExtension : public System::Security::Cryptography::X509Certificates::X509Extension {
    public:
    // private System.Security.Cryptography.OidCollection _enhKeyUsage
    // Offset: 0x28
    System::Security::Cryptography::OidCollection* enhKeyUsage;
    // private System.Security.Cryptography.AsnDecodeStatus _status
    // Offset: 0x30
    System::Security::Cryptography::AsnDecodeStatus status;
    // public System.Void .ctor(System.Security.Cryptography.AsnEncodedData encodedEnhancedKeyUsages, System.Boolean critical)
    // Offset: 0x120238C
    static X509EnhancedKeyUsageExtension* New_ctor(System::Security::Cryptography::AsnEncodedData* encodedEnhancedKeyUsages, bool critical);
    // System.Security.Cryptography.AsnDecodeStatus Decode(System.Byte[] extension)
    // Offset: 0x12047D8
    System::Security::Cryptography::AsnDecodeStatus Decode(::Array<uint8_t>* extension);
    // public override System.Void CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    // Offset: 0x1204A38
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
    // override System.String ToString(System.Boolean multiLine)
    // Offset: 0x1204BD4
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.String AsnEncodedData::ToString(System.Boolean multiLine)
    ::Il2CppString* ToString(bool multiLine);
  }; // System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*, "System.Security.Cryptography.X509Certificates", "X509EnhancedKeyUsageExtension");
#pragma pack(pop)
