// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: TMPro.TMP_Dropdown
#include "TMPro/TMP_Dropdown.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_Dropdown/OptionDataList
  class TMP_Dropdown::OptionDataList : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> m_Options
    // Offset: 0x10
    System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* m_Options;
    // public System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> get_options()
    // Offset: 0xB6E90C
    System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* get_options();
    // public System.Void set_options(System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> value)
    // Offset: 0xB6E914
    void set_options(System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* value);
    // public System.Void .ctor()
    // Offset: 0xB6BEF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TMP_Dropdown::OptionDataList* New_ctor();
  }; // TMPro.TMP_Dropdown/OptionDataList
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Dropdown::OptionDataList*, "TMPro", "TMP_Dropdown/OptionDataList");
#pragma pack(pop)
