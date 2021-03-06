// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Threading.SparselyPopulatedArrayAddInfo`1
#include "System/Threading/SparselyPopulatedArrayAddInfo_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationCallbackInfo
  class CancellationCallbackInfo;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.CancellationTokenRegistration
  struct CancellationTokenRegistration : public System::ValueType, public System::IEquatable_1<System::Threading::CancellationTokenRegistration>, public System::IDisposable {
    public:
    // private readonly System.Threading.CancellationCallbackInfo m_callbackInfo
    // Offset: 0x0
    System::Threading::CancellationCallbackInfo* m_callbackInfo;
    // private readonly System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> m_registrationInfo
    // Offset: 0x8
    System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo*> m_registrationInfo;
    // Creating value type constructor for type: CancellationTokenRegistration
    CancellationTokenRegistration(System::Threading::CancellationCallbackInfo* m_callbackInfo_ = {}, System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo*> m_registrationInfo_ = {}) : m_callbackInfo{m_callbackInfo_}, m_registrationInfo{m_registrationInfo_} {}
    // System.Void .ctor(System.Threading.CancellationCallbackInfo callbackInfo, System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> registrationInfo)
    // Offset: 0xA44060
    static CancellationTokenRegistration* New_ctor(System::Threading::CancellationCallbackInfo* callbackInfo, System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo*> registrationInfo);
    // System.Boolean TryDeregister()
    // Offset: 0xA440A4
    bool TryDeregister();
    // public System.Void Dispose()
    // Offset: 0xA440AC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA440B4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.Threading.CancellationTokenRegistration other)
    // Offset: 0xA440BC
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(System.Threading.CancellationTokenRegistration other)
    bool Equals(System::Threading::CancellationTokenRegistration other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA440F4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Threading.CancellationTokenRegistration
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::CancellationTokenRegistration, "System.Threading", "CancellationTokenRegistration");
#pragma pack(pop)
