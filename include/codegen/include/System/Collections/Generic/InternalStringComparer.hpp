// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:52 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.InternalStringComparer
  class InternalStringComparer : public System::Collections::Generic::EqualityComparer_1<::Il2CppString*> {
    public:
    // public System.Int32 GetHashCode(System.String obj)
    // Offset: 0x1320020
    int GetHashCode(::Il2CppString* obj);
    // public System.Boolean Equals(System.String x, System.String y)
    // Offset: 0x1320040
    bool Equals(::Il2CppString* x, ::Il2CppString* y);
    // System.Int32 IndexOf(System.String[] array, System.String value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x1320070
    int IndexOf(::Array<::Il2CppString*>* array, ::Il2CppString* value, int startIndex, int count);
    // public System.Void .ctor()
    // Offset: 0x13200D8
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static InternalStringComparer* New_ctor();
  }; // System.Collections.Generic.InternalStringComparer
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::InternalStringComparer*, "System.Collections.Generic", "InternalStringComparer");
#pragma pack(pop)
