// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.AssemblyTitleAttribute
  class AssemblyTitleAttribute : public System::Attribute {
    public:
    // private System.String m_title
    // Offset: 0x10
    ::Il2CppString* m_title;
    // public System.Void .ctor(System.String title)
    // Offset: 0x134DE54
    static AssemblyTitleAttribute* New_ctor(::Il2CppString* title);
  }; // System.Reflection.AssemblyTitleAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyTitleAttribute*, "System.Reflection", "AssemblyTitleAttribute");
#pragma pack(pop)
