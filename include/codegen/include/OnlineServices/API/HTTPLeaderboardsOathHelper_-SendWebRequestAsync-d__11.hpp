// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OnlineServices.API.HTTPLeaderboardsOathHelper
#include "OnlineServices/API/HTTPLeaderboardsOathHelper.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/<SendWebRequestAsync>d__11
  struct HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__11 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder;
    // public OnlineServices.API.HTTPLeaderboardsOathHelper <>4__this
    // Offset: 0x20
    OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this;
    // public System.String uri
    // Offset: 0x28
    ::Il2CppString* uri;
    // public System.String method
    // Offset: 0x30
    ::Il2CppString* method;
    // public System.String bearerToken
    // Offset: 0x38
    ::Il2CppString* bearerToken;
    // public System.String bodyData
    // Offset: 0x40
    ::Il2CppString* bodyData;
    // private OnlineServices.API.HTTPLeaderboardsOathHelper/<>c__DisplayClass11_1 <>8__1
    // Offset: 0x48
    OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass11_1* $$8__1;
    // private OnlineServices.API.HTTPLeaderboardsOathHelper/<>c__DisplayClass11_0 <>8__2
    // Offset: 0x50
    OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass11_0* $$8__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__1
    // Offset: 0x58
    System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1;
    // Creating value type constructor for type: $SendWebRequestAsync$d__11
    $SendWebRequestAsync$d__11(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder_ = {}, OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this_ = {}, ::Il2CppString* uri_ = {}, ::Il2CppString* method_ = {}, ::Il2CppString* bearerToken_ = {}, ::Il2CppString* bodyData_ = {}, OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass11_1* $$8__1_ = {}, OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass11_0* $$8__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, uri{uri_}, method{method_}, bearerToken{bearerToken_}, bodyData{bodyData_}, $$8__1{$$8__1_}, $$8__2{$$8__2_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA27E24
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA27E2C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/<SendWebRequestAsync>d__11
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__11, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<SendWebRequestAsync>d__11");
#pragma pack(pop)
