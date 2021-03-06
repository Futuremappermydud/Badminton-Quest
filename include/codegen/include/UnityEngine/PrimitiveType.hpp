// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:27 PM
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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.PrimitiveType
  struct PrimitiveType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.PrimitiveType Sphere
    static constexpr const int Sphere = 0;
    // Get static field: static public UnityEngine.PrimitiveType Sphere
    static UnityEngine::PrimitiveType _get_Sphere();
    // Set static field: static public UnityEngine.PrimitiveType Sphere
    static void _set_Sphere(UnityEngine::PrimitiveType value);
    // static field const value: static public UnityEngine.PrimitiveType Capsule
    static constexpr const int Capsule = 1;
    // Get static field: static public UnityEngine.PrimitiveType Capsule
    static UnityEngine::PrimitiveType _get_Capsule();
    // Set static field: static public UnityEngine.PrimitiveType Capsule
    static void _set_Capsule(UnityEngine::PrimitiveType value);
    // static field const value: static public UnityEngine.PrimitiveType Cylinder
    static constexpr const int Cylinder = 2;
    // Get static field: static public UnityEngine.PrimitiveType Cylinder
    static UnityEngine::PrimitiveType _get_Cylinder();
    // Set static field: static public UnityEngine.PrimitiveType Cylinder
    static void _set_Cylinder(UnityEngine::PrimitiveType value);
    // static field const value: static public UnityEngine.PrimitiveType Cube
    static constexpr const int Cube = 3;
    // Get static field: static public UnityEngine.PrimitiveType Cube
    static UnityEngine::PrimitiveType _get_Cube();
    // Set static field: static public UnityEngine.PrimitiveType Cube
    static void _set_Cube(UnityEngine::PrimitiveType value);
    // static field const value: static public UnityEngine.PrimitiveType Plane
    static constexpr const int Plane = 4;
    // Get static field: static public UnityEngine.PrimitiveType Plane
    static UnityEngine::PrimitiveType _get_Plane();
    // Set static field: static public UnityEngine.PrimitiveType Plane
    static void _set_Plane(UnityEngine::PrimitiveType value);
    // static field const value: static public UnityEngine.PrimitiveType Quad
    static constexpr const int Quad = 5;
    // Get static field: static public UnityEngine.PrimitiveType Quad
    static UnityEngine::PrimitiveType _get_Quad();
    // Set static field: static public UnityEngine.PrimitiveType Quad
    static void _set_Quad(UnityEngine::PrimitiveType value);
    // Creating value type constructor for type: PrimitiveType
    PrimitiveType(int value_ = {}) : value{value_} {}
  }; // UnityEngine.PrimitiveType
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PrimitiveType, "UnityEngine", "PrimitiveType");
#pragma pack(pop)
