// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:51 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.ComDefaultInterfaceAttribute
  class ComDefaultInterfaceAttribute : public System::Attribute {
    public:
    // System.Type _val
    // Offset: 0x10
    System::Type* val;
    // public System.Void .ctor(System.Type defaultInterface)
    // Offset: 0x1150E40
    static ComDefaultInterfaceAttribute* New_ctor(System::Type* defaultInterface);
  }; // System.Runtime.InteropServices.ComDefaultInterfaceAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ComDefaultInterfaceAttribute*, "System.Runtime.InteropServices", "ComDefaultInterfaceAttribute");
#pragma pack(pop)
