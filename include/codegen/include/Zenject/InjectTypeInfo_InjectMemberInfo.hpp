// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:40 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.InjectTypeInfo
#include "Zenject/InjectTypeInfo.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenMemberSetterMethod
  class ZenMemberSetterMethod;
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InjectTypeInfo/InjectMemberInfo
  class InjectTypeInfo::InjectMemberInfo : public ::Il2CppObject {
    public:
    // public readonly Zenject.ZenMemberSetterMethod Setter
    // Offset: 0x10
    Zenject::ZenMemberSetterMethod* Setter;
    // public readonly Zenject.InjectableInfo Info
    // Offset: 0x18
    Zenject::InjectableInfo* Info;
    // public System.Void .ctor(Zenject.ZenMemberSetterMethod setter, Zenject.InjectableInfo info)
    // Offset: 0x1945DF0
    static InjectTypeInfo::InjectMemberInfo* New_ctor(Zenject::ZenMemberSetterMethod* setter, Zenject::InjectableInfo* info);
  }; // Zenject.InjectTypeInfo/InjectMemberInfo
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectTypeInfo::InjectMemberInfo*, "Zenject", "InjectTypeInfo/InjectMemberInfo");
#pragma pack(pop)
