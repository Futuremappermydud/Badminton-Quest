// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:07 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithString
  class MessageWithString : public Oculus::Platform::Message_1<::Il2CppString*> {
    public:
    // protected System.String GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xE921EC
    ::Il2CppString* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE88EC0
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithString* New_ctor(System::IntPtr c_message);
    // public override System.String GetString()
    // Offset: 0xE921A8
    // Implemented from: Oculus.Platform.Message
    // Base method: System.String Message::GetString()
    ::Il2CppString* GetString();
  }; // Oculus.Platform.MessageWithString
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithString*, "Oculus.Platform", "MessageWithString");
#pragma pack(pop)
