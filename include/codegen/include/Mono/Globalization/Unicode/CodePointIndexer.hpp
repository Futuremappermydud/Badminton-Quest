// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:37 PM
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
// Forward declaring namespace: Mono::Globalization::Unicode
namespace Mono::Globalization::Unicode {
}
// Completed forward declares
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Autogenerated type: Mono.Globalization.Unicode.CodePointIndexer
  class CodePointIndexer : public ::Il2CppObject {
    public:
    // Nested type: Mono::Globalization::Unicode::CodePointIndexer::TableRange
    struct TableRange;
    // private readonly Mono.Globalization.Unicode.CodePointIndexer/TableRange[] ranges
    // Offset: 0x10
    ::Array<Mono::Globalization::Unicode::CodePointIndexer::TableRange>* ranges;
    // public readonly System.Int32 TotalCount
    // Offset: 0x18
    int TotalCount;
    // private System.Int32 defaultIndex
    // Offset: 0x1C
    int defaultIndex;
    // private System.Int32 defaultCP
    // Offset: 0x20
    int defaultCP;
    // public System.Void .ctor(System.Int32[] starts, System.Int32[] ends, System.Int32 defaultIndex, System.Int32 defaultCP)
    // Offset: 0x10999DC
    static CodePointIndexer* New_ctor(::Array<int>* starts, ::Array<int>* ends, int defaultIndex, int defaultCP);
    // public System.Int32 ToIndex(System.Int32 cp)
    // Offset: 0x1099B7C
    int ToIndex(int cp);
  }; // Mono.Globalization.Unicode.CodePointIndexer
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::CodePointIndexer*, "Mono.Globalization.Unicode", "CodePointIndexer");
#pragma pack(pop)
