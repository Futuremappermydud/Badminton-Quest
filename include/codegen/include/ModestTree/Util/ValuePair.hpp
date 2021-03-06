// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:41 PM
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
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
  // Forward declaring type: ValuePair`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class ValuePair_3;
  // Forward declaring type: ValuePair`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class ValuePair_4;
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Autogenerated type: ModestTree.Util.ValuePair
  class ValuePair : public ::Il2CppObject {
    public:
    // static public ModestTree.Util.ValuePair`2<T1,T2> New(T1 first, T2 second)
    // Offset: 0x14C8270
    template<class T1, class T2>
    static ModestTree::Util::ValuePair_2<T1, T2>* New(T1 first, T2 second) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<ModestTree::Util::ValuePair_2<T1, T2>*>("ModestTree.Util", "ValuePair", "New", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}, first, second)));
    }
    // static public ModestTree.Util.ValuePair`3<T1,T2,T3> New(T1 first, T2 second, T3 third)
    // Offset: 0x14C8348
    template<class T1, class T2, class T3>
    static ModestTree::Util::ValuePair_3<T1, T2, T3>* New(T1 first, T2 second, T3 third) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<ModestTree::Util::ValuePair_3<T1, T2, T3>*>("ModestTree.Util", "ValuePair", "New", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get()}, first, second, third)));
    }
    // static public ModestTree.Util.ValuePair`4<T1,T2,T3,T4> New(T1 first, T2 second, T3 third, T4 fourth)
    // Offset: 0x14C83C4
    template<class T1, class T2, class T3, class T4>
    static ModestTree::Util::ValuePair_4<T1, T2, T3, T4>* New(T1 first, T2 second, T3 third, T4 fourth) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<ModestTree::Util::ValuePair_4<T1, T2, T3, T4>*>("ModestTree.Util", "ValuePair", "New", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get()}, first, second, third, fourth)));
    }
  }; // ModestTree.Util.ValuePair
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::ValuePair*, "ModestTree.Util", "ValuePair");
#pragma pack(pop)
