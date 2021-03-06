// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:49 PM
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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IList
  class IList;
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Autogenerated type: System.Runtime.Remoting.Channels.SinkProviderData
  class SinkProviderData : public ::Il2CppObject {
    public:
    // private System.String sinkName
    // Offset: 0x10
    ::Il2CppString* sinkName;
    // private System.Collections.ArrayList children
    // Offset: 0x18
    System::Collections::ArrayList* children;
    // private System.Collections.Hashtable properties
    // Offset: 0x20
    System::Collections::Hashtable* properties;
    // public System.Void .ctor(System.String name)
    // Offset: 0x10447AC
    static SinkProviderData* New_ctor(::Il2CppString* name);
    // public System.Collections.IList get_Children()
    // Offset: 0x1044868
    System::Collections::IList* get_Children();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x1044870
    System::Collections::IDictionary* get_Properties();
  }; // System.Runtime.Remoting.Channels.SinkProviderData
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::SinkProviderData*, "System.Runtime.Remoting.Channels", "SinkProviderData");
#pragma pack(pop)
