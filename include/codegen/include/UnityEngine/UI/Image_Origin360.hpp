// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.Image/Origin360
  struct Image::Origin360 : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.UI.Image/Origin360 Bottom
    static constexpr const int Bottom = 0;
    // Get static field: static public UnityEngine.UI.Image/Origin360 Bottom
    static UnityEngine::UI::Image::Origin360 _get_Bottom();
    // Set static field: static public UnityEngine.UI.Image/Origin360 Bottom
    static void _set_Bottom(UnityEngine::UI::Image::Origin360 value);
    // static field const value: static public UnityEngine.UI.Image/Origin360 Right
    static constexpr const int Right = 1;
    // Get static field: static public UnityEngine.UI.Image/Origin360 Right
    static UnityEngine::UI::Image::Origin360 _get_Right();
    // Set static field: static public UnityEngine.UI.Image/Origin360 Right
    static void _set_Right(UnityEngine::UI::Image::Origin360 value);
    // static field const value: static public UnityEngine.UI.Image/Origin360 Top
    static constexpr const int Top = 2;
    // Get static field: static public UnityEngine.UI.Image/Origin360 Top
    static UnityEngine::UI::Image::Origin360 _get_Top();
    // Set static field: static public UnityEngine.UI.Image/Origin360 Top
    static void _set_Top(UnityEngine::UI::Image::Origin360 value);
    // static field const value: static public UnityEngine.UI.Image/Origin360 Left
    static constexpr const int Left = 3;
    // Get static field: static public UnityEngine.UI.Image/Origin360 Left
    static UnityEngine::UI::Image::Origin360 _get_Left();
    // Set static field: static public UnityEngine.UI.Image/Origin360 Left
    static void _set_Left(UnityEngine::UI::Image::Origin360 value);
    // Creating value type constructor for type: Origin360
    Origin360(int value_ = {}) : value{value_} {}
  }; // UnityEngine.UI.Image/Origin360
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Image::Origin360, "UnityEngine.UI", "Image/Origin360");
#pragma pack(pop)
