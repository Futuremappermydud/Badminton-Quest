// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:52 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections.ObjectModel
namespace System::Collections::ObjectModel {
  // Autogenerated type: System.Collections.ObjectModel.ReadOnlyCollection`1
  template<typename T>
  class ReadOnlyCollection_1 : public ::Il2CppObject, public System::Collections::Generic::IList_1<T>, public System::Collections::Generic::ICollection_1<T>, public System::Collections::Generic::IEnumerable_1<T>, public System::Collections::IEnumerable, public System::Collections::IList, public System::Collections::ICollection, public System::Collections::Generic::IReadOnlyList_1<T>, public System::Collections::Generic::IReadOnlyCollection_1<T> {
    public:
    // private System.Collections.Generic.IList`1<T> list
    // Offset: 0x0
    System::Collections::Generic::IList_1<T>* list;
    // private System.Object _syncRoot
    // Offset: 0x0
    ::Il2CppObject* syncRoot;
    // public System.Void .ctor(System.Collections.Generic.IList`1<T> list)
    // Offset: 0x14524D0
    static ReadOnlyCollection_1<T>* New_ctor(System::Collections::Generic::IList_1<T>* list) {
      return (ReadOnlyCollection_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReadOnlyCollection_1<T>*>::get(), list));
    }
    // static private System.Boolean IsCompatibleObject(System.Object value)
    // Offset: 0x14531A0
    static bool IsCompatibleObject(::Il2CppObject* value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReadOnlyCollection_1<T>*>::get(), "IsCompatibleObject", value));
    }
    // public System.Int32 get_Count()
    // Offset: 0x145251C
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Int32 ICollection`1::get_Count()
    // Base method: System.Int32 ICollection::get_Count()
    // Base method: System.Int32 IReadOnlyCollection`1::get_Count()
    int get_Count() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_get_Count
    // Maps to method: get_Count
    int System_Collections_Generic_ICollection_1_get_Count() {
      return get_Count();
    }
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count() {
      return get_Count();
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0x17D4870
    // Implemented from: System.Collections.Generic.IReadOnlyList`1
    // Base method: T IReadOnlyList`1::get_Item(System.Int32 index)
    T get_Item(int index) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(this, "get_Item", index));
    }
    // Creating proxy method: System_Collections_Generic_IReadOnlyList_1_get_Item
    // Maps to method: get_Item
    T System_Collections_Generic_IReadOnlyList_1_get_Item(int index) {
      return get_Item(index);
    }
    // public System.Boolean Contains(T value)
    // Offset: 0x145266C
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::Contains(T value)
    bool Contains(T value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Contains", value));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_Contains
    // Maps to method: Contains
    bool System_Collections_Generic_ICollection_1_Contains(T value) {
      return Contains(value);
    }
    // public System.Void CopyTo(T[] array, System.Int32 index)
    // Offset: 0x1452754
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection`1::CopyTo(T[] array, System.Int32 index)
    void CopyTo(::Array<T>* array, int index) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "CopyTo", array, index));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_CopyTo
    // Maps to method: CopyTo
    void System_Collections_Generic_ICollection_1_CopyTo(::Array<T>* array, int index) {
      CopyTo(array, index);
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0x17D4A84
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<T>*>(this, "GetEnumerator"));
    }
    // Creating proxy method: System_Collections_Generic_IEnumerable_1_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      return GetEnumerator();
    }
    // public System.Int32 IndexOf(T value)
    // Offset: 0x14528A8
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Int32 IList`1::IndexOf(T value)
    int IndexOf(T value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "IndexOf", value));
    }
    // Creating proxy method: System_Collections_Generic_IList_1_IndexOf
    // Maps to method: IndexOf
    int System_Collections_Generic_IList_1_IndexOf(T value) {
      return IndexOf(value);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.get_IsReadOnly()
    // Offset: 0x145298C
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::get_IsReadOnly()
    bool System_Collections_Generic_ICollection_1_get_IsReadOnly() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.Generic.ICollection<T>.get_IsReadOnly"));
    }
    // private T System.Collections.Generic.IList<T>.get_Item(System.Int32 index)
    // Offset: 0x1452994
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: T IList`1::get_Item(System.Int32 index)
    T System_Collections_Generic_IList_1_get_Item(int index) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(this, "System.Collections.Generic.IList<T>.get_Item", index));
    }
    // private System.Void System.Collections.Generic.IList<T>.set_Item(System.Int32 index, T value)
    // Offset: 0x1452A48
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Void IList`1::set_Item(System.Int32 index, T value)
    void System_Collections_Generic_IList_1_set_Item(int index, T value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.Generic.IList<T>.set_Item", index, value));
    }
    // private System.Void System.Collections.Generic.ICollection<T>.Add(T value)
    // Offset: 0x1452A54
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection`1::Add(T value)
    void System_Collections_Generic_ICollection_1_Add(T value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.Generic.ICollection<T>.Add", value));
    }
    // private System.Void System.Collections.Generic.ICollection<T>.Clear()
    // Offset: 0x1452A60
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection`1::Clear()
    void System_Collections_Generic_ICollection_1_Clear() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.Generic.ICollection<T>.Clear"));
    }
    // private System.Void System.Collections.Generic.IList<T>.Insert(System.Int32 index, T value)
    // Offset: 0x1452A6C
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Void IList`1::Insert(System.Int32 index, T value)
    void System_Collections_Generic_IList_1_Insert(int index, T value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.Generic.IList<T>.Insert", index, value));
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.Remove(T value)
    // Offset: 0x1452A78
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::Remove(T value)
    bool System_Collections_Generic_ICollection_1_Remove(T value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.Generic.ICollection<T>.Remove", value));
    }
    // private System.Void System.Collections.Generic.IList<T>.RemoveAt(System.Int32 index)
    // Offset: 0x1452A98
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Void IList`1::RemoveAt(System.Int32 index)
    void System_Collections_Generic_IList_1_RemoveAt(int index) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.Generic.IList<T>.RemoveAt", index));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1452AA4
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1452B54
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void System_Collections_ICollection_CopyTo(System::Array* array, int index) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.ICollection.CopyTo", array, index));
    }
    // private System.Boolean System.Collections.IList.get_IsReadOnly()
    // Offset: 0x1453068
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::get_IsReadOnly()
    bool System_Collections_IList_get_IsReadOnly() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.IList.get_IsReadOnly"));
    }
    // private System.Object System.Collections.IList.get_Item(System.Int32 index)
    // Offset: 0x1453070
    // Implemented from: System.Collections.IList
    // Base method: System.Object IList::get_Item(System.Int32 index)
    ::Il2CppObject* System_Collections_IList_get_Item(int index) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IList.get_Item", index));
    }
    // private System.Void System.Collections.IList.set_Item(System.Int32 index, System.Object value)
    // Offset: 0x1453168
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::set_Item(System.Int32 index, System.Object value)
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IList.set_Item", index, value));
    }
    // private System.Int32 System.Collections.IList.Add(System.Object value)
    // Offset: 0x1453174
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::Add(System.Object value)
    int System_Collections_IList_Add(::Il2CppObject* value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "System.Collections.IList.Add", value));
    }
    // private System.Void System.Collections.IList.Clear()
    // Offset: 0x1453194
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Clear()
    void System_Collections_IList_Clear() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IList.Clear"));
    }
    // private System.Boolean System.Collections.IList.Contains(System.Object value)
    // Offset: 0x1453268
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::Contains(System.Object value)
    bool System_Collections_IList_Contains(::Il2CppObject* value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.IList.Contains", value));
    }
    // private System.Int32 System.Collections.IList.IndexOf(System.Object value)
    // Offset: 0x1453348
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::IndexOf(System.Object value)
    int System_Collections_IList_IndexOf(::Il2CppObject* value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "System.Collections.IList.IndexOf", value));
    }
    // private System.Void System.Collections.IList.Insert(System.Int32 index, System.Object value)
    // Offset: 0x1453424
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Insert(System.Int32 index, System.Object value)
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IList.Insert", index, value));
    }
    // private System.Void System.Collections.IList.Remove(System.Object value)
    // Offset: 0x1453430
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Remove(System.Object value)
    void System_Collections_IList_Remove(::Il2CppObject* value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IList.Remove", value));
    }
    // private System.Void System.Collections.IList.RemoveAt(System.Int32 index)
    // Offset: 0x145343C
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::RemoveAt(System.Int32 index)
    void System_Collections_IList_RemoveAt(int index) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IList.RemoveAt", index));
    }
  }; // System.Collections.ObjectModel.ReadOnlyCollection`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::ObjectModel::ReadOnlyCollection_1, "System.Collections.ObjectModel", "ReadOnlyCollection`1");
#pragma pack(pop)
