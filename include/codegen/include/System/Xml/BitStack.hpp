// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:19 PM
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
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.BitStack
  class BitStack : public ::Il2CppObject {
    public:
    // private System.UInt32[] bitStack
    // Offset: 0x10
    ::Array<uint>* bitStack;
    // private System.Int32 stackPos
    // Offset: 0x18
    int stackPos;
    // private System.UInt32 curr
    // Offset: 0x1C
    uint curr;
    // public System.Void PushBit(System.Boolean bit)
    // Offset: 0x1182048
    void PushBit(bool bit);
    // public System.Boolean PopBit()
    // Offset: 0x11821A4
    bool PopBit();
    // public System.Boolean PeekBit()
    // Offset: 0x1182228
    bool PeekBit();
    // private System.Void PushCurr()
    // Offset: 0x1182084
    void PushCurr();
    // private System.Void PopCurr()
    // Offset: 0x11821D8
    void PopCurr();
    // public System.Void .ctor()
    // Offset: 0x118201C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BitStack* New_ctor();
  }; // System.Xml.BitStack
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::BitStack*, "System.Xml", "BitStack");
#pragma pack(pop)
