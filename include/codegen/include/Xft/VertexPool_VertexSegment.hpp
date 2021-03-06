// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Xft.VertexPool
#include "Xft/VertexPool.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Xft
namespace Xft {
  // Autogenerated type: Xft.VertexPool/VertexSegment
  class VertexPool::VertexSegment : public ::Il2CppObject {
    public:
    // public System.Int32 VertStart
    // Offset: 0x10
    int VertStart;
    // public System.Int32 IndexStart
    // Offset: 0x14
    int IndexStart;
    // public System.Int32 VertCount
    // Offset: 0x18
    int VertCount;
    // public System.Int32 IndexCount
    // Offset: 0x1C
    int IndexCount;
    // public Xft.VertexPool Pool
    // Offset: 0x20
    Xft::VertexPool* Pool;
    // public System.Void .ctor(System.Int32 start, System.Int32 count, System.Int32 istart, System.Int32 icount, Xft.VertexPool pool)
    // Offset: 0xC42C84
    static VertexPool::VertexSegment* New_ctor(int start, int count, int istart, int icount, Xft::VertexPool* pool);
    // public System.Void ClearIndices()
    // Offset: 0xC42E7C
    void ClearIndices();
  }; // Xft.VertexPool/VertexSegment
}
DEFINE_IL2CPP_ARG_TYPE(Xft::VertexPool::VertexSegment*, "Xft", "VertexPool/VertexSegment");
#pragma pack(pop)
