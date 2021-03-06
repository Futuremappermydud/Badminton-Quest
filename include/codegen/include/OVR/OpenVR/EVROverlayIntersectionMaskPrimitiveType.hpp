// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:05 PM
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType
  struct EVROverlayIntersectionMaskPrimitiveType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Rectangle
    static constexpr const int OverlayIntersectionPrimitiveType_Rectangle = 0;
    // Get static field: static public OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Rectangle
    static OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType _get_OverlayIntersectionPrimitiveType_Rectangle();
    // Set static field: static public OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Rectangle
    static void _set_OverlayIntersectionPrimitiveType_Rectangle(OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType value);
    // static field const value: static public OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Circle
    static constexpr const int OverlayIntersectionPrimitiveType_Circle = 1;
    // Get static field: static public OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Circle
    static OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType _get_OverlayIntersectionPrimitiveType_Circle();
    // Set static field: static public OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Circle
    static void _set_OverlayIntersectionPrimitiveType_Circle(OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType value);
    // Creating value type constructor for type: EVROverlayIntersectionMaskPrimitiveType
    EVROverlayIntersectionMaskPrimitiveType(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType, "OVR.OpenVR", "EVROverlayIntersectionMaskPrimitiveType");
#pragma pack(pop)
