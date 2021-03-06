// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryArrayTypeEnum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryArray
  class BinaryArray : public ::Il2CppObject {
    public:
    // System.Int32 objectId
    // Offset: 0x10
    int objectId;
    // System.Int32 rank
    // Offset: 0x14
    int rank;
    // System.Int32[] lengthA
    // Offset: 0x18
    ::Array<int>* lengthA;
    // System.Int32[] lowerBoundA
    // Offset: 0x20
    ::Array<int>* lowerBoundA;
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum
    // Offset: 0x28
    System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum;
    // System.Object typeInformation
    // Offset: 0x30
    ::Il2CppObject* typeInformation;
    // System.Int32 assemId
    // Offset: 0x38
    int assemId;
    // private System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum
    // Offset: 0x3C
    System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;
    // System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum binaryArrayTypeEnum
    // Offset: 0x40
    System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum;
    // System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0xE24EA8
    static BinaryArray* New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
    // System.Void Set(System.Int32 objectId, System.Int32 rank, System.Int32[] lengthA, System.Int32[] lowerBoundA, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Object typeInformation, System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum binaryArrayTypeEnum, System.Int32 assemId)
    // Offset: 0xE24ED4
    void Set(int objectId, int rank, ::Array<int>* lengthA, ::Array<int>* lowerBoundA, System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::Il2CppObject* typeInformation, System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum, int assemId);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0xE24F88
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0xE25400
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // System.Void .ctor()
    // Offset: 0xE24EA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BinaryArray* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryArray
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryArray*, "System.Runtime.Serialization.Formatters.Binary", "BinaryArray");
#pragma pack(pop)
