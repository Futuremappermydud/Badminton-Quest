// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: IResourceReader
  class IResourceReader;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Autogenerated type: System.Resources.ResourceSet
  class ResourceSet : public ::Il2CppObject, public System::IDisposable, public System::Collections::IEnumerable {
    public:
    // protected System.Resources.IResourceReader Reader
    // Offset: 0x10
    System::Resources::IResourceReader* Reader;
    // protected System.Collections.Hashtable Table
    // Offset: 0x18
    System::Collections::Hashtable* Table;
    // private System.Collections.Hashtable _caseInsensitiveTable
    // Offset: 0x20
    System::Collections::Hashtable* caseInsensitiveTable;
    // System.Void .ctor(System.Boolean junk)
    // Offset: 0x114CA94
    static ResourceSet* New_ctor(bool junk);
    // private System.Void CommonInit()
    // Offset: 0x114CA2C
    void CommonInit();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x114CA9C
    void Dispose(bool disposing);
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x114CB9C
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // private System.Collections.IDictionaryEnumerator GetEnumeratorHelper()
    // Offset: 0x114CBA0
    System::Collections::IDictionaryEnumerator* GetEnumeratorHelper();
    // public System.String GetString(System.String name)
    // Offset: 0x114CC4C
    ::Il2CppString* GetString(::Il2CppString* name);
    // public System.String GetString(System.String name, System.Boolean ignoreCase)
    // Offset: 0x114CEB4
    ::Il2CppString* GetString(::Il2CppString* name, bool ignoreCase);
    // public System.Object GetObject(System.String name)
    // Offset: 0x114D3A8
    ::Il2CppObject* GetObject(::Il2CppString* name);
    // public System.Object GetObject(System.String name, System.Boolean ignoreCase)
    // Offset: 0x114D3AC
    ::Il2CppObject* GetObject(::Il2CppString* name, bool ignoreCase);
    // private System.Object GetObjectInternal(System.String name)
    // Offset: 0x114CDBC
    ::Il2CppObject* GetObjectInternal(::Il2CppString* name);
    // private System.Object GetCaseInsensitiveObjectInternal(System.String name)
    // Offset: 0x114D0B8
    ::Il2CppObject* GetCaseInsensitiveObjectInternal(::Il2CppString* name);
    // protected System.Void .ctor()
    // Offset: 0x114CA04
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ResourceSet* New_ctor();
    // public System.Void Dispose()
    // Offset: 0x1147D64
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x114CC48
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Resources.ResourceSet
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceSet*, "System.Resources", "ResourceSet");
#pragma pack(pop)
