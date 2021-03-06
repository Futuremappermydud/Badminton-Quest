// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Xft.XWeaponTrail
#include "Xft/XWeaponTrail.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Completed forward declares
// Type namespace: Xft
namespace Xft {
  // Autogenerated type: Xft.XWeaponTrail/ElementPool
  class XWeaponTrail::ElementPool : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.Stack`1<Xft.XWeaponTrail/Element> _stack
    // Offset: 0x10
    System::Collections::Generic::Stack_1<Xft::XWeaponTrail::Element*>* stack;
    // private System.Int32 <CountAll>k__BackingField
    // Offset: 0x18
    int CountAll;
    // public System.Int32 get_CountAll()
    // Offset: 0xC4478C
    int get_CountAll();
    // private System.Void set_CountAll(System.Int32 value)
    // Offset: 0xC44794
    void set_CountAll(int value);
    // public System.Int32 get_CountActive()
    // Offset: 0xC4479C
    int get_CountActive();
    // public System.Int32 get_CountInactive()
    // Offset: 0xC447C0
    int get_CountInactive();
    // public System.Void .ctor(System.Int32 preCount)
    // Offset: 0xC43268
    static XWeaponTrail::ElementPool* New_ctor(int preCount);
    // public Xft.XWeaponTrail/Element Get()
    // Offset: 0xC44558
    Xft::XWeaponTrail::Element* Get();
    // public System.Void Release(Xft.XWeaponTrail/Element element)
    // Offset: 0xC445F0
    void Release(Xft::XWeaponTrail::Element* element);
  }; // Xft.XWeaponTrail/ElementPool
}
DEFINE_IL2CPP_ARG_TYPE(Xft::XWeaponTrail::ElementPool*, "Xft", "XWeaponTrail/ElementPool");
#pragma pack(pop)
