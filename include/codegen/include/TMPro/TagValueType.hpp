// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TagValueType
  struct TagValueType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public TMPro.TagValueType None
    static constexpr const int None = 0;
    // Get static field: static public TMPro.TagValueType None
    static TMPro::TagValueType _get_None();
    // Set static field: static public TMPro.TagValueType None
    static void _set_None(TMPro::TagValueType value);
    // static field const value: static public TMPro.TagValueType NumericalValue
    static constexpr const int NumericalValue = 1;
    // Get static field: static public TMPro.TagValueType NumericalValue
    static TMPro::TagValueType _get_NumericalValue();
    // Set static field: static public TMPro.TagValueType NumericalValue
    static void _set_NumericalValue(TMPro::TagValueType value);
    // static field const value: static public TMPro.TagValueType StringValue
    static constexpr const int StringValue = 2;
    // Get static field: static public TMPro.TagValueType StringValue
    static TMPro::TagValueType _get_StringValue();
    // Set static field: static public TMPro.TagValueType StringValue
    static void _set_StringValue(TMPro::TagValueType value);
    // static field const value: static public TMPro.TagValueType ColorValue
    static constexpr const int ColorValue = 4;
    // Get static field: static public TMPro.TagValueType ColorValue
    static TMPro::TagValueType _get_ColorValue();
    // Set static field: static public TMPro.TagValueType ColorValue
    static void _set_ColorValue(TMPro::TagValueType value);
    // Creating value type constructor for type: TagValueType
    TagValueType(int value_ = {}) : value{value_} {}
  }; // TMPro.TagValueType
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TagValueType, "TMPro", "TagValueType");
#pragma pack(pop)
