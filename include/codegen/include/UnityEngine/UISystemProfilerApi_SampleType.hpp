// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:39 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: UnityEngine.UISystemProfilerApi
#include "UnityEngine/UISystemProfilerApi.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.UISystemProfilerApi/SampleType
  struct UISystemProfilerApi::SampleType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.UISystemProfilerApi/SampleType Layout
    static constexpr const int Layout = 0;
    // Get static field: static public UnityEngine.UISystemProfilerApi/SampleType Layout
    static UnityEngine::UISystemProfilerApi::SampleType _get_Layout();
    // Set static field: static public UnityEngine.UISystemProfilerApi/SampleType Layout
    static void _set_Layout(UnityEngine::UISystemProfilerApi::SampleType value);
    // static field const value: static public UnityEngine.UISystemProfilerApi/SampleType Render
    static constexpr const int Render = 1;
    // Get static field: static public UnityEngine.UISystemProfilerApi/SampleType Render
    static UnityEngine::UISystemProfilerApi::SampleType _get_Render();
    // Set static field: static public UnityEngine.UISystemProfilerApi/SampleType Render
    static void _set_Render(UnityEngine::UISystemProfilerApi::SampleType value);
    // Creating value type constructor for type: SampleType
    SampleType(int value_ = {}) : value{value_} {}
  }; // UnityEngine.UISystemProfilerApi/SampleType
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UISystemProfilerApi::SampleType, "UnityEngine", "UISystemProfilerApi/SampleType");
#pragma pack(pop)
