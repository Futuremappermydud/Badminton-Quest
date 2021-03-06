// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:32 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.Rendering.ScriptableRenderContext
#include "UnityEngine/Rendering/ScriptableRenderContext.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderPipelineAsset
  class RenderPipelineAsset;
  // Forward declaring type: RenderPipeline
  class RenderPipeline;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.RenderPipelineManager
  class RenderPipelineManager : public ::Il2CppObject {
    public:
    // Get static field: static private UnityEngine.Rendering.RenderPipelineAsset s_CurrentPipelineAsset
    static UnityEngine::Rendering::RenderPipelineAsset* _get_s_CurrentPipelineAsset();
    // Set static field: static private UnityEngine.Rendering.RenderPipelineAsset s_CurrentPipelineAsset
    static void _set_s_CurrentPipelineAsset(UnityEngine::Rendering::RenderPipelineAsset* value);
    // Get static field: static private UnityEngine.Camera[] s_Cameras
    static ::Array<UnityEngine::Camera*>* _get_s_Cameras();
    // Set static field: static private UnityEngine.Camera[] s_Cameras
    static void _set_s_Cameras(::Array<UnityEngine::Camera*>* value);
    // Get static field: static private System.Int32 s_CameraCapacity
    static int _get_s_CameraCapacity();
    // Set static field: static private System.Int32 s_CameraCapacity
    static void _set_s_CameraCapacity(int value);
    // Get static field: static private UnityEngine.Rendering.RenderPipeline <currentPipeline>k__BackingField
    static UnityEngine::Rendering::RenderPipeline* _get_$currentPipeline$k__BackingField();
    // Set static field: static private UnityEngine.Rendering.RenderPipeline <currentPipeline>k__BackingField
    static void _set_$currentPipeline$k__BackingField(UnityEngine::Rendering::RenderPipeline* value);
    // Get static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]> beginFrameRendering
    static System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, ::Array<UnityEngine::Camera*>*>* _get_beginFrameRendering();
    // Set static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]> beginFrameRendering
    static void _set_beginFrameRendering(System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, ::Array<UnityEngine::Camera*>*>* value);
    // static public UnityEngine.Rendering.RenderPipeline get_currentPipeline()
    // Offset: 0x1373508
    static UnityEngine::Rendering::RenderPipeline* get_currentPipeline();
    // static private System.Void set_currentPipeline(UnityEngine.Rendering.RenderPipeline value)
    // Offset: 0x1373570
    static void set_currentPipeline(UnityEngine::Rendering::RenderPipeline* value);
    // static public System.Void add_beginFrameRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]> value)
    // Offset: 0x13735E0
    static void add_beginFrameRendering(System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, ::Array<UnityEngine::Camera*>*>* value);
    // static public System.Void remove_beginFrameRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]> value)
    // Offset: 0x13736D0
    static void remove_beginFrameRendering(System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, ::Array<UnityEngine::Camera*>*>* value);
    // static System.Void CleanupRenderPipeline()
    // Offset: 0x13731CC
    static void CleanupRenderPipeline();
    // static private System.Void GetCameras(UnityEngine.Rendering.ScriptableRenderContext context)
    // Offset: 0x137386C
    static void GetCameras(UnityEngine::Rendering::ScriptableRenderContext context);
    // static private System.Void DoRenderLoop_Internal(UnityEngine.Rendering.RenderPipelineAsset pipe, System.IntPtr loopPtr)
    // Offset: 0x1373ADC
    static void DoRenderLoop_Internal(UnityEngine::Rendering::RenderPipelineAsset* pipe, System::IntPtr loopPtr);
    // static private System.Void PrepareRenderPipeline(UnityEngine.Rendering.RenderPipelineAsset pipelineAsset)
    // Offset: 0x1373C5C
    static void PrepareRenderPipeline(UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);
    // static private System.Void .cctor()
    // Offset: 0x1373EBC
    static void _cctor();
  }; // UnityEngine.Rendering.RenderPipelineManager
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderPipelineManager*, "UnityEngine.Rendering", "RenderPipelineManager");
#pragma pack(pop)
