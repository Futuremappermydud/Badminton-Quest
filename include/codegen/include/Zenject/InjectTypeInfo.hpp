// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:40 PM
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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InjectTypeInfo
  class InjectTypeInfo : public ::Il2CppObject {
    public:
    // Nested type: Zenject::InjectTypeInfo::InjectMemberInfo
    class InjectMemberInfo;
    // Nested type: Zenject::InjectTypeInfo::InjectConstructorInfo
    class InjectConstructorInfo;
    // Nested type: Zenject::InjectTypeInfo::InjectMethodInfo
    class InjectMethodInfo;
    // public readonly System.Type Type
    // Offset: 0x10
    System::Type* Type;
    // public readonly Zenject.InjectTypeInfo/InjectMethodInfo[] InjectMethods
    // Offset: 0x18
    ::Array<Zenject::InjectTypeInfo::InjectMethodInfo*>* InjectMethods;
    // public readonly Zenject.InjectTypeInfo/InjectMemberInfo[] InjectMembers
    // Offset: 0x20
    ::Array<Zenject::InjectTypeInfo::InjectMemberInfo*>* InjectMembers;
    // public readonly Zenject.InjectTypeInfo/InjectConstructorInfo InjectConstructor
    // Offset: 0x28
    Zenject::InjectTypeInfo::InjectConstructorInfo* InjectConstructor;
    // private Zenject.InjectTypeInfo <BaseTypeInfo>k__BackingField
    // Offset: 0x30
    Zenject::InjectTypeInfo* BaseTypeInfo;
    // Get static field: static private System.Func`2<Zenject.InjectTypeInfo/InjectMemberInfo,Zenject.InjectableInfo> CS$<>9__CachedAnonymousMethodDelegate2
    static System::Func_2<Zenject::InjectTypeInfo::InjectMemberInfo*, Zenject::InjectableInfo*>* _get_CS$$$9__CachedAnonymousMethodDelegate2();
    // Set static field: static private System.Func`2<Zenject.InjectTypeInfo/InjectMemberInfo,Zenject.InjectableInfo> CS$<>9__CachedAnonymousMethodDelegate2
    static void _set_CS$$$9__CachedAnonymousMethodDelegate2(System::Func_2<Zenject::InjectTypeInfo::InjectMemberInfo*, Zenject::InjectableInfo*>* value);
    // Get static field: static private System.Func`2<Zenject.InjectTypeInfo/InjectMethodInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>> CS$<>9__CachedAnonymousMethodDelegate3
    static System::Func_2<Zenject::InjectTypeInfo::InjectMethodInfo*, System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>*>* _get_CS$$$9__CachedAnonymousMethodDelegate3();
    // Set static field: static private System.Func`2<Zenject.InjectTypeInfo/InjectMethodInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>> CS$<>9__CachedAnonymousMethodDelegate3
    static void _set_CS$$$9__CachedAnonymousMethodDelegate3(System::Func_2<Zenject::InjectTypeInfo::InjectMethodInfo*, System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>*>* value);
    // public System.Void .ctor(System.Type type, Zenject.InjectTypeInfo/InjectConstructorInfo injectConstructor, Zenject.InjectTypeInfo/InjectMethodInfo[] injectMethods, Zenject.InjectTypeInfo/InjectMemberInfo[] injectMembers)
    // Offset: 0x1945B50
    static InjectTypeInfo* New_ctor(System::Type* type, Zenject::InjectTypeInfo::InjectConstructorInfo* injectConstructor, ::Array<Zenject::InjectTypeInfo::InjectMethodInfo*>* injectMethods, ::Array<Zenject::InjectTypeInfo::InjectMemberInfo*>* injectMembers);
    // public Zenject.InjectTypeInfo get_BaseTypeInfo()
    // Offset: 0x1945BD0
    Zenject::InjectTypeInfo* get_BaseTypeInfo();
    // public System.Void set_BaseTypeInfo(Zenject.InjectTypeInfo value)
    // Offset: 0x1945BD8
    void set_BaseTypeInfo(Zenject::InjectTypeInfo* value);
    // public System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> get_AllInjectables()
    // Offset: 0x1945BE0
    System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>* get_AllInjectables();
    // static private Zenject.InjectableInfo <get_AllInjectables>b__0(Zenject.InjectTypeInfo/InjectMemberInfo x)
    // Offset: 0x1945D70
    static Zenject::InjectableInfo* $get_AllInjectables$b__0(Zenject::InjectTypeInfo::InjectMemberInfo* x);
    // static private System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> <get_AllInjectables>b__1(Zenject.InjectTypeInfo/InjectMethodInfo x)
    // Offset: 0x1945D88
    static System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>* $get_AllInjectables$b__1(Zenject::InjectTypeInfo::InjectMethodInfo* x);
  }; // Zenject.InjectTypeInfo
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectTypeInfo*, "Zenject", "InjectTypeInfo");
#pragma pack(pop)
