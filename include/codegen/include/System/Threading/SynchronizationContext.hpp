// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Threading.SynchronizationContextProperties
#include "System/Threading/SynchronizationContextProperties.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.SynchronizationContext
  class SynchronizationContext : public ::Il2CppObject {
    public:
    // private System.Threading.SynchronizationContextProperties _props
    // Offset: 0x10
    System::Threading::SynchronizationContextProperties props;
    // Get static field: static private System.Type s_cachedPreparedType1
    static System::Type* _get_s_cachedPreparedType1();
    // Set static field: static private System.Type s_cachedPreparedType1
    static void _set_s_cachedPreparedType1(System::Type* value);
    // Get static field: static private System.Type s_cachedPreparedType2
    static System::Type* _get_s_cachedPreparedType2();
    // Set static field: static private System.Type s_cachedPreparedType2
    static void _set_s_cachedPreparedType2(System::Type* value);
    // Get static field: static private System.Type s_cachedPreparedType3
    static System::Type* _get_s_cachedPreparedType3();
    // Set static field: static private System.Type s_cachedPreparedType3
    static void _set_s_cachedPreparedType3(System::Type* value);
    // Get static field: static private System.Type s_cachedPreparedType4
    static System::Type* _get_s_cachedPreparedType4();
    // Set static field: static private System.Type s_cachedPreparedType4
    static void _set_s_cachedPreparedType4(System::Type* value);
    // Get static field: static private System.Type s_cachedPreparedType5
    static System::Type* _get_s_cachedPreparedType5();
    // Set static field: static private System.Type s_cachedPreparedType5
    static void _set_s_cachedPreparedType5(System::Type* value);
    // public System.Void Send(System.Threading.SendOrPostCallback d, System.Object state)
    // Offset: 0xCC7764
    void Send(System::Threading::SendOrPostCallback* d, ::Il2CppObject* state);
    // public System.Void Post(System.Threading.SendOrPostCallback d, System.Object state)
    // Offset: 0xCC7780
    void Post(System::Threading::SendOrPostCallback* d, ::Il2CppObject* state);
    // public System.Void OperationStarted()
    // Offset: 0xCC780C
    void OperationStarted();
    // public System.Void OperationCompleted()
    // Offset: 0xCC7810
    void OperationCompleted();
    // static public System.Void SetSynchronizationContext(System.Threading.SynchronizationContext syncContext)
    // Offset: 0xCC7814
    static void SetSynchronizationContext(System::Threading::SynchronizationContext* syncContext);
    // static public System.Threading.SynchronizationContext get_Current()
    // Offset: 0xCC7910
    static System::Threading::SynchronizationContext* get_Current();
    // static System.Threading.SynchronizationContext get_CurrentNoFlow()
    // Offset: 0xCC79F0
    static System::Threading::SynchronizationContext* get_CurrentNoFlow();
    // static private System.Threading.SynchronizationContext GetThreadLocalContext()
    // Offset: 0xCC7990
    static System::Threading::SynchronizationContext* GetThreadLocalContext();
    // public System.Threading.SynchronizationContext CreateCopy()
    // Offset: 0xCC7A44
    System::Threading::SynchronizationContext* CreateCopy();
    // public System.Void .ctor()
    // Offset: 0xCC775C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SynchronizationContext* New_ctor();
  }; // System.Threading.SynchronizationContext
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SynchronizationContext*, "System.Threading", "SynchronizationContext");
#pragma pack(pop)
