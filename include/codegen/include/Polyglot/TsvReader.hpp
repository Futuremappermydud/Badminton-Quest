// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Autogenerated type: Polyglot.TsvReader
  class TsvReader : public ::Il2CppObject {
    public:
    // static public System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> Parse(System.String src)
    // Offset: 0x18FFE68
    static System::Collections::Generic::List_1<System::Collections::Generic::List_1<::Il2CppString*>*>* Parse(::Il2CppString* src);
    // public System.Void .ctor()
    // Offset: 0x1901054
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TsvReader* New_ctor();
  }; // Polyglot.TsvReader
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::TsvReader*, "Polyglot", "TsvReader");
#pragma pack(pop)
