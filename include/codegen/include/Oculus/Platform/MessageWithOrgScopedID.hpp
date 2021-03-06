// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:07 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: OrgScopedID
  class OrgScopedID;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithOrgScopedID
  class MessageWithOrgScopedID : public Oculus::Platform::Message_1<Oculus::Platform::Models::OrgScopedID*> {
    public:
    // protected Oculus.Platform.Models.OrgScopedID GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xE8FC60
    Oculus::Platform::Models::OrgScopedID* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE88920
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithOrgScopedID* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.OrgScopedID GetOrgScopedID()
    // Offset: 0xE8FC1C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.OrgScopedID Message::GetOrgScopedID()
    Oculus::Platform::Models::OrgScopedID* GetOrgScopedID();
  }; // Oculus.Platform.MessageWithOrgScopedID
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithOrgScopedID*, "Oculus.Platform", "MessageWithOrgScopedID");
#pragma pack(pop)
