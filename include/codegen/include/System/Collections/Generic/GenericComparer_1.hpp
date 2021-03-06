// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:52 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Collections.Generic.Comparer`1
#include "System/Collections/Generic/Comparer_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IComparable`1<T>
  template<typename T>
  class IComparable_1;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.GenericComparer`1
  template<typename T>
  class GenericComparer_1 : public System::Collections::Generic::Comparer_1<T> {
    public:
    // public override System.Int32 Compare(T x, T y)
    // Offset: 0x1632EC8
    // Implemented from: System.Collections.Generic.Comparer`1
    // Base method: System.Int32 Comparer`1::Compare(T x, T y)
    int Compare(T x, T y) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "Compare", x, y));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1632EF8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x1632F44
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
    }
    // public System.Void .ctor()
    // Offset: 0x1632F80
    // Implemented from: System.Collections.Generic.Comparer`1
    // Base method: System.Void Comparer`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static GenericComparer_1<T>* New_ctor() {
      return (GenericComparer_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GenericComparer_1<T>*>::get()));
    }
  }; // System.Collections.Generic.GenericComparer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::GenericComparer_1, "System.Collections.Generic", "GenericComparer`1");
#pragma pack(pop)
