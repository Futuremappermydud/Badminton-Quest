// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:08 PM
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
  // Forward declaring type: MatchmakingBrowseResult
  class MatchmakingBrowseResult;
  // Forward declaring type: MatchmakingEnqueueResult
  class MatchmakingEnqueueResult;
  // Forward declaring type: RoomList
  class RoomList;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithMatchmakingBrowseResult
  class MessageWithMatchmakingBrowseResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingBrowseResult*> {
    public:
    // protected Oculus.Platform.Models.MatchmakingBrowseResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xE8E60C
    Oculus::Platform::Models::MatchmakingBrowseResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE886E0
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithMatchmakingBrowseResult* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.MatchmakingEnqueueResult GetMatchmakingEnqueueResult()
    // Offset: 0xE8E56C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.MatchmakingEnqueueResult Message::GetMatchmakingEnqueueResult()
    Oculus::Platform::Models::MatchmakingEnqueueResult* GetMatchmakingEnqueueResult();
    // public override Oculus.Platform.Models.RoomList GetRoomList()
    // Offset: 0xE8E5BC
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.RoomList Message::GetRoomList()
    Oculus::Platform::Models::RoomList* GetRoomList();
  }; // Oculus.Platform.MessageWithMatchmakingBrowseResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithMatchmakingBrowseResult*, "Oculus.Platform", "MessageWithMatchmakingBrowseResult");
#pragma pack(pop)
