// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Color
  struct Color : public System::ValueType, public System::IEquatable_1<UnityEngine::Color> {
    public:
    // public System.Single r
    // Offset: 0x0
    float r;
    // public System.Single g
    // Offset: 0x4
    float g;
    // public System.Single b
    // Offset: 0x8
    float b;
    // public System.Single a
    // Offset: 0xC
    float a;
    // Creating value type constructor for type: Color
    Color(float r_ = {}, float g_ = {}, float b_ = {}, float a_ = {}) : r{r_}, g{g_}, b{b_}, a{a_} {}
    // public System.Void .ctor(System.Single r, System.Single g, System.Single b, System.Single a)
    // Offset: 0xA41C94
    static Color* New_ctor(float r, float g, float b, float a);
    // public System.Void .ctor(System.Single r, System.Single g, System.Single b)
    // Offset: 0xA41CA0
    static Color* New_ctor(float r, float g, float b);
    // public System.String ToString(System.String format)
    // Offset: 0xA41CBC
    ::Il2CppString* ToString(::Il2CppString* format);
    // static public UnityEngine.Color Lerp(UnityEngine.Color a, UnityEngine.Color b, System.Single t)
    // Offset: 0x12EE5DC
    static UnityEngine::Color Lerp(UnityEngine::Color a, UnityEngine::Color b, float t);
    // UnityEngine.Color RGBMultiplied(System.Single multiplier)
    // Offset: 0xA41CDC
    UnityEngine::Color RGBMultiplied(float multiplier);
    // static public UnityEngine.Color get_red()
    // Offset: 0x12EE6D8
    static UnityEngine::Color get_red();
    // static public UnityEngine.Color get_green()
    // Offset: 0x12EE6EC
    static UnityEngine::Color get_green();
    // static public UnityEngine.Color get_blue()
    // Offset: 0x12EE700
    static UnityEngine::Color get_blue();
    // static public UnityEngine.Color get_white()
    // Offset: 0x12EE714
    static UnityEngine::Color get_white();
    // static public UnityEngine.Color get_black()
    // Offset: 0x12EE728
    static UnityEngine::Color get_black();
    // static public UnityEngine.Color get_yellow()
    // Offset: 0x12EE73C
    static UnityEngine::Color get_yellow();
    // static public UnityEngine.Color get_cyan()
    // Offset: 0x12EE758
    static UnityEngine::Color get_cyan();
    // static public UnityEngine.Color get_magenta()
    // Offset: 0x12EE76C
    static UnityEngine::Color get_magenta();
    // static public UnityEngine.Color get_gray()
    // Offset: 0x12EE780
    static UnityEngine::Color get_gray();
    // static public UnityEngine.Color get_clear()
    // Offset: 0x12EE794
    static UnityEngine::Color get_clear();
    // public System.Single get_grayscale()
    // Offset: 0xA41CF8
    float get_grayscale();
    // public UnityEngine.Color get_linear()
    // Offset: 0xA41D30
    UnityEngine::Color get_linear();
    // public System.Single get_maxColorComponent()
    // Offset: 0xA41D38
    float get_maxColorComponent();
    // static public System.Void RGBToHSV(UnityEngine.Color rgbColor, System.Single H, System.Single S, System.Single V)
    // Offset: 0x12EE918
    static void RGBToHSV(UnityEngine::Color rgbColor, float& H, float& S, float& V);
    // static private System.Void RGBToHSVHelper(System.Single offset, System.Single dominantcolor, System.Single colorone, System.Single colortwo, System.Single H, System.Single S, System.Single V)
    // Offset: 0x12EEA30
    static void RGBToHSVHelper(float offset, float dominantcolor, float colorone, float colortwo, float& H, float& S, float& V);
    // static public UnityEngine.Color HSVToRGB(System.Single H, System.Single S, System.Single V)
    // Offset: 0x12EEAA0
    static UnityEngine::Color HSVToRGB(float H, float S, float V);
    // static public UnityEngine.Color HSVToRGB(System.Single H, System.Single S, System.Single V, System.Boolean hdr)
    // Offset: 0x12EEAA8
    static UnityEngine::Color HSVToRGB(float H, float S, float V, bool hdr);
    // public override System.String ToString()
    // Offset: 0xA41CB4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xA41CC4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xA41CCC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.Color other)
    // Offset: 0xA41CD4
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Color other)
    bool Equals(UnityEngine::Color other);
  }; // UnityEngine.Color
  // static public UnityEngine.Color op_Addition(UnityEngine.Color a, UnityEngine.Color b)
  // Offset: 0x12EE454
  UnityEngine::Color operator+(const UnityEngine::Color& a, const UnityEngine::Color& b);
  // static public UnityEngine.Color op_Subtraction(UnityEngine.Color a, UnityEngine.Color b)
  // Offset: 0x12EE468
  UnityEngine::Color operator-(const UnityEngine::Color& a, const UnityEngine::Color& b);
  // static public UnityEngine.Color op_Multiply(UnityEngine.Color a, UnityEngine.Color b)
  // Offset: 0x12EE47C
  UnityEngine::Color operator*(const UnityEngine::Color& a, const UnityEngine::Color& b);
  // static public UnityEngine.Color op_Multiply(UnityEngine.Color a, System.Single b)
  // Offset: 0x12EE490
  UnityEngine::Color operator*(const UnityEngine::Color& a, const float& b);
  // static public UnityEngine.Color op_Division(UnityEngine.Color a, System.Single b)
  // Offset: 0x12EE4A4
  UnityEngine::Color operator/(const UnityEngine::Color& a, const float& b);
  // static public System.Boolean op_Equality(UnityEngine.Color lhs, UnityEngine.Color rhs)
  // Offset: 0x12EE4B8
  bool operator ==(const UnityEngine::Color& lhs, const UnityEngine::Color& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Color lhs, UnityEngine.Color rhs)
  // Offset: 0x12EE5C0
  bool operator !=(const UnityEngine::Color& lhs, const UnityEngine::Color& rhs);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Color, "UnityEngine", "Color");
#pragma pack(pop)
