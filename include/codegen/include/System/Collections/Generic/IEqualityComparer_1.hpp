// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.IEqualityComparer`1
  template<typename T>
  class IEqualityComparer_1 {
    public:
    // public System.Boolean Equals(T x, T y)
    // Offset: 0xFFFFFFFF
    bool Equals(T x, T y) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", x, y));
    }
    // public System.Int32 GetHashCode(T obj)
    // Offset: 0xFFFFFFFF
    int GetHashCode(T obj) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode", obj));
    }
  }; // System.Collections.Generic.IEqualityComparer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IEqualityComparer_1, "System.Collections.Generic", "IEqualityComparer`1");
#pragma pack(pop)
