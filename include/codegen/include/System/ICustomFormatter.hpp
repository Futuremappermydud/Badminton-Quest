// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.ICustomFormatter
  class ICustomFormatter {
    public:
    // public System.String Format(System.String format, System.Object arg, System.IFormatProvider formatProvider)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* Format(::Il2CppString* format, ::Il2CppObject* arg, System::IFormatProvider* formatProvider);
  }; // System.ICustomFormatter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ICustomFormatter*, "System", "ICustomFormatter");
#pragma pack(pop)
