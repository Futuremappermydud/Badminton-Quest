// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:52 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.ListDictionaryInternal
#include "System/Collections/ListDictionaryInternal.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.ListDictionaryInternal/DictionaryNode
  class ListDictionaryInternal::DictionaryNode : public ::Il2CppObject {
    public:
    // public System.Object key
    // Offset: 0x10
    ::Il2CppObject* key;
    // public System.Object value
    // Offset: 0x18
    ::Il2CppObject* value;
    // public System.Collections.ListDictionaryInternal/DictionaryNode next
    // Offset: 0x20
    System::Collections::ListDictionaryInternal::DictionaryNode* next;
    // public System.Void .ctor()
    // Offset: 0x1324DF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ListDictionaryInternal::DictionaryNode* New_ctor();
  }; // System.Collections.ListDictionaryInternal/DictionaryNode
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ListDictionaryInternal::DictionaryNode*, "System.Collections", "ListDictionaryInternal/DictionaryNode");
#pragma pack(pop)
