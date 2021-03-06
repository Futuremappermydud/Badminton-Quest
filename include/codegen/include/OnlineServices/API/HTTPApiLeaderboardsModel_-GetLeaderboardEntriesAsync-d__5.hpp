// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OnlineServices.API.HTTPApiLeaderboardsModel
#include "OnlineServices/API/HTTPApiLeaderboardsModel.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: OnlineServices.API.ApiResponse`1
#include "OnlineServices/API/ApiResponse_1.hpp"
// Including type: LeaderboardsDTO.LeaderboardEntriesDTO
#include "LeaderboardsDTO/LeaderboardEntriesDTO.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: LeaderboardQueryDTO
  class LeaderboardQueryDTO;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPApiLeaderboardsModel/<GetLeaderboardEntriesAsync>d__5
  struct HTTPApiLeaderboardsModel::$GetLeaderboardEntriesAsync$d__5 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.API.ApiResponse`1<LeaderboardsDTO.LeaderboardEntriesDTO>> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::API::ApiResponse_1<LeaderboardsDTO::LeaderboardEntriesDTO>> $$t__builder;
    // public OnlineServices.API.HTTPApiLeaderboardsModel <>4__this
    // Offset: 0x20
    OnlineServices::API::HTTPApiLeaderboardsModel* $$4__this;
    // public LeaderboardsDTO.LeaderboardQueryDTO leaderboardQueryDTO
    // Offset: 0x28
    LeaderboardsDTO::LeaderboardQueryDTO* leaderboardQueryDTO;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x30
    System::Threading::CancellationToken cancellationToken;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__1;
    // Creating value type constructor for type: $GetLeaderboardEntriesAsync$d__5
    $GetLeaderboardEntriesAsync$d__5(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::API::ApiResponse_1<LeaderboardsDTO::LeaderboardEntriesDTO>> $$t__builder_ = {}, OnlineServices::API::HTTPApiLeaderboardsModel* $$4__this_ = {}, LeaderboardsDTO::LeaderboardQueryDTO* leaderboardQueryDTO_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, leaderboardQueryDTO{leaderboardQueryDTO_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA27DA4
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA27DAC
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPApiLeaderboardsModel/<GetLeaderboardEntriesAsync>d__5
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPApiLeaderboardsModel::$GetLeaderboardEntriesAsync$d__5, "OnlineServices.API", "HTTPApiLeaderboardsModel/<GetLeaderboardEntriesAsync>d__5");
#pragma pack(pop)
