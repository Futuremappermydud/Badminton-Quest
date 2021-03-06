// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRCompositor
  struct IVRCompositor : public System::ValueType {
    public:
    // Nested type: OVR::OpenVR::IVRCompositor::_SetTrackingSpace
    class _SetTrackingSpace;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetTrackingSpace
    class _GetTrackingSpace;
    // Nested type: OVR::OpenVR::IVRCompositor::_WaitGetPoses
    class _WaitGetPoses;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetLastPoses
    class _GetLastPoses;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex
    class _GetLastPoseForTrackedDeviceIndex;
    // Nested type: OVR::OpenVR::IVRCompositor::_Submit
    class _Submit;
    // Nested type: OVR::OpenVR::IVRCompositor::_ClearLastSubmittedFrame
    class _ClearLastSubmittedFrame;
    // Nested type: OVR::OpenVR::IVRCompositor::_PostPresentHandoff
    class _PostPresentHandoff;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetFrameTiming
    class _GetFrameTiming;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetFrameTimings
    class _GetFrameTimings;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetFrameTimeRemaining
    class _GetFrameTimeRemaining;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetCumulativeStats
    class _GetCumulativeStats;
    // Nested type: OVR::OpenVR::IVRCompositor::_FadeToColor
    class _FadeToColor;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor
    class _GetCurrentFadeColor;
    // Nested type: OVR::OpenVR::IVRCompositor::_FadeGrid
    class _FadeGrid;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetCurrentGridAlpha
    class _GetCurrentGridAlpha;
    // Nested type: OVR::OpenVR::IVRCompositor::_SetSkyboxOverride
    class _SetSkyboxOverride;
    // Nested type: OVR::OpenVR::IVRCompositor::_ClearSkyboxOverride
    class _ClearSkyboxOverride;
    // Nested type: OVR::OpenVR::IVRCompositor::_CompositorBringToFront
    class _CompositorBringToFront;
    // Nested type: OVR::OpenVR::IVRCompositor::_CompositorGoToBack
    class _CompositorGoToBack;
    // Nested type: OVR::OpenVR::IVRCompositor::_CompositorQuit
    class _CompositorQuit;
    // Nested type: OVR::OpenVR::IVRCompositor::_IsFullscreen
    class _IsFullscreen;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetCurrentSceneFocusProcess
    class _GetCurrentSceneFocusProcess;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetLastFrameRenderer
    class _GetLastFrameRenderer;
    // Nested type: OVR::OpenVR::IVRCompositor::_CanRenderScene
    class _CanRenderScene;
    // Nested type: OVR::OpenVR::IVRCompositor::_ShowMirrorWindow
    class _ShowMirrorWindow;
    // Nested type: OVR::OpenVR::IVRCompositor::_HideMirrorWindow
    class _HideMirrorWindow;
    // Nested type: OVR::OpenVR::IVRCompositor::_IsMirrorWindowVisible
    class _IsMirrorWindowVisible;
    // Nested type: OVR::OpenVR::IVRCompositor::_CompositorDumpImages
    class _CompositorDumpImages;
    // Nested type: OVR::OpenVR::IVRCompositor::_ShouldAppRenderWithLowResources
    class _ShouldAppRenderWithLowResources;
    // Nested type: OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn
    class _ForceInterleavedReprojectionOn;
    // Nested type: OVR::OpenVR::IVRCompositor::_ForceReconnectProcess
    class _ForceReconnectProcess;
    // Nested type: OVR::OpenVR::IVRCompositor::_SuspendRendering
    class _SuspendRendering;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11
    class _GetMirrorTextureD3D11;
    // Nested type: OVR::OpenVR::IVRCompositor::_ReleaseMirrorTextureD3D11
    class _ReleaseMirrorTextureD3D11;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetMirrorTextureGL
    class _GetMirrorTextureGL;
    // Nested type: OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture
    class _ReleaseSharedGLTexture;
    // Nested type: OVR::OpenVR::IVRCompositor::_LockGLSharedTextureForAccess
    class _LockGLSharedTextureForAccess;
    // Nested type: OVR::OpenVR::IVRCompositor::_UnlockGLSharedTextureForAccess
    class _UnlockGLSharedTextureForAccess;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetVulkanInstanceExtensionsRequired
    class _GetVulkanInstanceExtensionsRequired;
    // Nested type: OVR::OpenVR::IVRCompositor::_GetVulkanDeviceExtensionsRequired
    class _GetVulkanDeviceExtensionsRequired;
    // Nested type: OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode
    class _SetExplicitTimingMode;
    // Nested type: OVR::OpenVR::IVRCompositor::_SubmitExplicitTimingData
    class _SubmitExplicitTimingData;
    // OVR.OpenVR.IVRCompositor/_SetTrackingSpace SetTrackingSpace
    // Offset: 0x0
    OVR::OpenVR::IVRCompositor::_SetTrackingSpace* SetTrackingSpace;
    // OVR.OpenVR.IVRCompositor/_GetTrackingSpace GetTrackingSpace
    // Offset: 0x8
    OVR::OpenVR::IVRCompositor::_GetTrackingSpace* GetTrackingSpace;
    // OVR.OpenVR.IVRCompositor/_WaitGetPoses WaitGetPoses
    // Offset: 0x10
    OVR::OpenVR::IVRCompositor::_WaitGetPoses* WaitGetPoses;
    // OVR.OpenVR.IVRCompositor/_GetLastPoses GetLastPoses
    // Offset: 0x18
    OVR::OpenVR::IVRCompositor::_GetLastPoses* GetLastPoses;
    // OVR.OpenVR.IVRCompositor/_GetLastPoseForTrackedDeviceIndex GetLastPoseForTrackedDeviceIndex
    // Offset: 0x20
    OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex* GetLastPoseForTrackedDeviceIndex;
    // OVR.OpenVR.IVRCompositor/_Submit Submit
    // Offset: 0x28
    OVR::OpenVR::IVRCompositor::_Submit* Submit;
    // OVR.OpenVR.IVRCompositor/_ClearLastSubmittedFrame ClearLastSubmittedFrame
    // Offset: 0x30
    OVR::OpenVR::IVRCompositor::_ClearLastSubmittedFrame* ClearLastSubmittedFrame;
    // OVR.OpenVR.IVRCompositor/_PostPresentHandoff PostPresentHandoff
    // Offset: 0x38
    OVR::OpenVR::IVRCompositor::_PostPresentHandoff* PostPresentHandoff;
    // OVR.OpenVR.IVRCompositor/_GetFrameTiming GetFrameTiming
    // Offset: 0x40
    OVR::OpenVR::IVRCompositor::_GetFrameTiming* GetFrameTiming;
    // OVR.OpenVR.IVRCompositor/_GetFrameTimings GetFrameTimings
    // Offset: 0x48
    OVR::OpenVR::IVRCompositor::_GetFrameTimings* GetFrameTimings;
    // OVR.OpenVR.IVRCompositor/_GetFrameTimeRemaining GetFrameTimeRemaining
    // Offset: 0x50
    OVR::OpenVR::IVRCompositor::_GetFrameTimeRemaining* GetFrameTimeRemaining;
    // OVR.OpenVR.IVRCompositor/_GetCumulativeStats GetCumulativeStats
    // Offset: 0x58
    OVR::OpenVR::IVRCompositor::_GetCumulativeStats* GetCumulativeStats;
    // OVR.OpenVR.IVRCompositor/_FadeToColor FadeToColor
    // Offset: 0x60
    OVR::OpenVR::IVRCompositor::_FadeToColor* FadeToColor;
    // OVR.OpenVR.IVRCompositor/_GetCurrentFadeColor GetCurrentFadeColor
    // Offset: 0x68
    OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor* GetCurrentFadeColor;
    // OVR.OpenVR.IVRCompositor/_FadeGrid FadeGrid
    // Offset: 0x70
    OVR::OpenVR::IVRCompositor::_FadeGrid* FadeGrid;
    // OVR.OpenVR.IVRCompositor/_GetCurrentGridAlpha GetCurrentGridAlpha
    // Offset: 0x78
    OVR::OpenVR::IVRCompositor::_GetCurrentGridAlpha* GetCurrentGridAlpha;
    // OVR.OpenVR.IVRCompositor/_SetSkyboxOverride SetSkyboxOverride
    // Offset: 0x80
    OVR::OpenVR::IVRCompositor::_SetSkyboxOverride* SetSkyboxOverride;
    // OVR.OpenVR.IVRCompositor/_ClearSkyboxOverride ClearSkyboxOverride
    // Offset: 0x88
    OVR::OpenVR::IVRCompositor::_ClearSkyboxOverride* ClearSkyboxOverride;
    // OVR.OpenVR.IVRCompositor/_CompositorBringToFront CompositorBringToFront
    // Offset: 0x90
    OVR::OpenVR::IVRCompositor::_CompositorBringToFront* CompositorBringToFront;
    // OVR.OpenVR.IVRCompositor/_CompositorGoToBack CompositorGoToBack
    // Offset: 0x98
    OVR::OpenVR::IVRCompositor::_CompositorGoToBack* CompositorGoToBack;
    // OVR.OpenVR.IVRCompositor/_CompositorQuit CompositorQuit
    // Offset: 0xA0
    OVR::OpenVR::IVRCompositor::_CompositorQuit* CompositorQuit;
    // OVR.OpenVR.IVRCompositor/_IsFullscreen IsFullscreen
    // Offset: 0xA8
    OVR::OpenVR::IVRCompositor::_IsFullscreen* IsFullscreen;
    // OVR.OpenVR.IVRCompositor/_GetCurrentSceneFocusProcess GetCurrentSceneFocusProcess
    // Offset: 0xB0
    OVR::OpenVR::IVRCompositor::_GetCurrentSceneFocusProcess* GetCurrentSceneFocusProcess;
    // OVR.OpenVR.IVRCompositor/_GetLastFrameRenderer GetLastFrameRenderer
    // Offset: 0xB8
    OVR::OpenVR::IVRCompositor::_GetLastFrameRenderer* GetLastFrameRenderer;
    // OVR.OpenVR.IVRCompositor/_CanRenderScene CanRenderScene
    // Offset: 0xC0
    OVR::OpenVR::IVRCompositor::_CanRenderScene* CanRenderScene;
    // OVR.OpenVR.IVRCompositor/_ShowMirrorWindow ShowMirrorWindow
    // Offset: 0xC8
    OVR::OpenVR::IVRCompositor::_ShowMirrorWindow* ShowMirrorWindow;
    // OVR.OpenVR.IVRCompositor/_HideMirrorWindow HideMirrorWindow
    // Offset: 0xD0
    OVR::OpenVR::IVRCompositor::_HideMirrorWindow* HideMirrorWindow;
    // OVR.OpenVR.IVRCompositor/_IsMirrorWindowVisible IsMirrorWindowVisible
    // Offset: 0xD8
    OVR::OpenVR::IVRCompositor::_IsMirrorWindowVisible* IsMirrorWindowVisible;
    // OVR.OpenVR.IVRCompositor/_CompositorDumpImages CompositorDumpImages
    // Offset: 0xE0
    OVR::OpenVR::IVRCompositor::_CompositorDumpImages* CompositorDumpImages;
    // OVR.OpenVR.IVRCompositor/_ShouldAppRenderWithLowResources ShouldAppRenderWithLowResources
    // Offset: 0xE8
    OVR::OpenVR::IVRCompositor::_ShouldAppRenderWithLowResources* ShouldAppRenderWithLowResources;
    // OVR.OpenVR.IVRCompositor/_ForceInterleavedReprojectionOn ForceInterleavedReprojectionOn
    // Offset: 0xF0
    OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn* ForceInterleavedReprojectionOn;
    // OVR.OpenVR.IVRCompositor/_ForceReconnectProcess ForceReconnectProcess
    // Offset: 0xF8
    OVR::OpenVR::IVRCompositor::_ForceReconnectProcess* ForceReconnectProcess;
    // OVR.OpenVR.IVRCompositor/_SuspendRendering SuspendRendering
    // Offset: 0x100
    OVR::OpenVR::IVRCompositor::_SuspendRendering* SuspendRendering;
    // OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11 GetMirrorTextureD3D11
    // Offset: 0x108
    OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11* GetMirrorTextureD3D11;
    // OVR.OpenVR.IVRCompositor/_ReleaseMirrorTextureD3D11 ReleaseMirrorTextureD3D11
    // Offset: 0x110
    OVR::OpenVR::IVRCompositor::_ReleaseMirrorTextureD3D11* ReleaseMirrorTextureD3D11;
    // OVR.OpenVR.IVRCompositor/_GetMirrorTextureGL GetMirrorTextureGL
    // Offset: 0x118
    OVR::OpenVR::IVRCompositor::_GetMirrorTextureGL* GetMirrorTextureGL;
    // OVR.OpenVR.IVRCompositor/_ReleaseSharedGLTexture ReleaseSharedGLTexture
    // Offset: 0x120
    OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture* ReleaseSharedGLTexture;
    // OVR.OpenVR.IVRCompositor/_LockGLSharedTextureForAccess LockGLSharedTextureForAccess
    // Offset: 0x128
    OVR::OpenVR::IVRCompositor::_LockGLSharedTextureForAccess* LockGLSharedTextureForAccess;
    // OVR.OpenVR.IVRCompositor/_UnlockGLSharedTextureForAccess UnlockGLSharedTextureForAccess
    // Offset: 0x130
    OVR::OpenVR::IVRCompositor::_UnlockGLSharedTextureForAccess* UnlockGLSharedTextureForAccess;
    // OVR.OpenVR.IVRCompositor/_GetVulkanInstanceExtensionsRequired GetVulkanInstanceExtensionsRequired
    // Offset: 0x138
    OVR::OpenVR::IVRCompositor::_GetVulkanInstanceExtensionsRequired* GetVulkanInstanceExtensionsRequired;
    // OVR.OpenVR.IVRCompositor/_GetVulkanDeviceExtensionsRequired GetVulkanDeviceExtensionsRequired
    // Offset: 0x140
    OVR::OpenVR::IVRCompositor::_GetVulkanDeviceExtensionsRequired* GetVulkanDeviceExtensionsRequired;
    // OVR.OpenVR.IVRCompositor/_SetExplicitTimingMode SetExplicitTimingMode
    // Offset: 0x148
    OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode* SetExplicitTimingMode;
    // OVR.OpenVR.IVRCompositor/_SubmitExplicitTimingData SubmitExplicitTimingData
    // Offset: 0x150
    OVR::OpenVR::IVRCompositor::_SubmitExplicitTimingData* SubmitExplicitTimingData;
    // Creating value type constructor for type: IVRCompositor
    IVRCompositor(OVR::OpenVR::IVRCompositor::_SetTrackingSpace* SetTrackingSpace_ = {}, OVR::OpenVR::IVRCompositor::_GetTrackingSpace* GetTrackingSpace_ = {}, OVR::OpenVR::IVRCompositor::_WaitGetPoses* WaitGetPoses_ = {}, OVR::OpenVR::IVRCompositor::_GetLastPoses* GetLastPoses_ = {}, OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex* GetLastPoseForTrackedDeviceIndex_ = {}, OVR::OpenVR::IVRCompositor::_Submit* Submit_ = {}, OVR::OpenVR::IVRCompositor::_ClearLastSubmittedFrame* ClearLastSubmittedFrame_ = {}, OVR::OpenVR::IVRCompositor::_PostPresentHandoff* PostPresentHandoff_ = {}, OVR::OpenVR::IVRCompositor::_GetFrameTiming* GetFrameTiming_ = {}, OVR::OpenVR::IVRCompositor::_GetFrameTimings* GetFrameTimings_ = {}, OVR::OpenVR::IVRCompositor::_GetFrameTimeRemaining* GetFrameTimeRemaining_ = {}, OVR::OpenVR::IVRCompositor::_GetCumulativeStats* GetCumulativeStats_ = {}, OVR::OpenVR::IVRCompositor::_FadeToColor* FadeToColor_ = {}, OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor* GetCurrentFadeColor_ = {}, OVR::OpenVR::IVRCompositor::_FadeGrid* FadeGrid_ = {}, OVR::OpenVR::IVRCompositor::_GetCurrentGridAlpha* GetCurrentGridAlpha_ = {}, OVR::OpenVR::IVRCompositor::_SetSkyboxOverride* SetSkyboxOverride_ = {}, OVR::OpenVR::IVRCompositor::_ClearSkyboxOverride* ClearSkyboxOverride_ = {}, OVR::OpenVR::IVRCompositor::_CompositorBringToFront* CompositorBringToFront_ = {}, OVR::OpenVR::IVRCompositor::_CompositorGoToBack* CompositorGoToBack_ = {}, OVR::OpenVR::IVRCompositor::_CompositorQuit* CompositorQuit_ = {}, OVR::OpenVR::IVRCompositor::_IsFullscreen* IsFullscreen_ = {}, OVR::OpenVR::IVRCompositor::_GetCurrentSceneFocusProcess* GetCurrentSceneFocusProcess_ = {}, OVR::OpenVR::IVRCompositor::_GetLastFrameRenderer* GetLastFrameRenderer_ = {}, OVR::OpenVR::IVRCompositor::_CanRenderScene* CanRenderScene_ = {}, OVR::OpenVR::IVRCompositor::_ShowMirrorWindow* ShowMirrorWindow_ = {}, OVR::OpenVR::IVRCompositor::_HideMirrorWindow* HideMirrorWindow_ = {}, OVR::OpenVR::IVRCompositor::_IsMirrorWindowVisible* IsMirrorWindowVisible_ = {}, OVR::OpenVR::IVRCompositor::_CompositorDumpImages* CompositorDumpImages_ = {}, OVR::OpenVR::IVRCompositor::_ShouldAppRenderWithLowResources* ShouldAppRenderWithLowResources_ = {}, OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn* ForceInterleavedReprojectionOn_ = {}, OVR::OpenVR::IVRCompositor::_ForceReconnectProcess* ForceReconnectProcess_ = {}, OVR::OpenVR::IVRCompositor::_SuspendRendering* SuspendRendering_ = {}, OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11* GetMirrorTextureD3D11_ = {}, OVR::OpenVR::IVRCompositor::_ReleaseMirrorTextureD3D11* ReleaseMirrorTextureD3D11_ = {}, OVR::OpenVR::IVRCompositor::_GetMirrorTextureGL* GetMirrorTextureGL_ = {}, OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture* ReleaseSharedGLTexture_ = {}, OVR::OpenVR::IVRCompositor::_LockGLSharedTextureForAccess* LockGLSharedTextureForAccess_ = {}, OVR::OpenVR::IVRCompositor::_UnlockGLSharedTextureForAccess* UnlockGLSharedTextureForAccess_ = {}, OVR::OpenVR::IVRCompositor::_GetVulkanInstanceExtensionsRequired* GetVulkanInstanceExtensionsRequired_ = {}, OVR::OpenVR::IVRCompositor::_GetVulkanDeviceExtensionsRequired* GetVulkanDeviceExtensionsRequired_ = {}, OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode* SetExplicitTimingMode_ = {}, OVR::OpenVR::IVRCompositor::_SubmitExplicitTimingData* SubmitExplicitTimingData_ = {}) : SetTrackingSpace{SetTrackingSpace_}, GetTrackingSpace{GetTrackingSpace_}, WaitGetPoses{WaitGetPoses_}, GetLastPoses{GetLastPoses_}, GetLastPoseForTrackedDeviceIndex{GetLastPoseForTrackedDeviceIndex_}, Submit{Submit_}, ClearLastSubmittedFrame{ClearLastSubmittedFrame_}, PostPresentHandoff{PostPresentHandoff_}, GetFrameTiming{GetFrameTiming_}, GetFrameTimings{GetFrameTimings_}, GetFrameTimeRemaining{GetFrameTimeRemaining_}, GetCumulativeStats{GetCumulativeStats_}, FadeToColor{FadeToColor_}, GetCurrentFadeColor{GetCurrentFadeColor_}, FadeGrid{FadeGrid_}, GetCurrentGridAlpha{GetCurrentGridAlpha_}, SetSkyboxOverride{SetSkyboxOverride_}, ClearSkyboxOverride{ClearSkyboxOverride_}, CompositorBringToFront{CompositorBringToFront_}, CompositorGoToBack{CompositorGoToBack_}, CompositorQuit{CompositorQuit_}, IsFullscreen{IsFullscreen_}, GetCurrentSceneFocusProcess{GetCurrentSceneFocusProcess_}, GetLastFrameRenderer{GetLastFrameRenderer_}, CanRenderScene{CanRenderScene_}, ShowMirrorWindow{ShowMirrorWindow_}, HideMirrorWindow{HideMirrorWindow_}, IsMirrorWindowVisible{IsMirrorWindowVisible_}, CompositorDumpImages{CompositorDumpImages_}, ShouldAppRenderWithLowResources{ShouldAppRenderWithLowResources_}, ForceInterleavedReprojectionOn{ForceInterleavedReprojectionOn_}, ForceReconnectProcess{ForceReconnectProcess_}, SuspendRendering{SuspendRendering_}, GetMirrorTextureD3D11{GetMirrorTextureD3D11_}, ReleaseMirrorTextureD3D11{ReleaseMirrorTextureD3D11_}, GetMirrorTextureGL{GetMirrorTextureGL_}, ReleaseSharedGLTexture{ReleaseSharedGLTexture_}, LockGLSharedTextureForAccess{LockGLSharedTextureForAccess_}, UnlockGLSharedTextureForAccess{UnlockGLSharedTextureForAccess_}, GetVulkanInstanceExtensionsRequired{GetVulkanInstanceExtensionsRequired_}, GetVulkanDeviceExtensionsRequired{GetVulkanDeviceExtensionsRequired_}, SetExplicitTimingMode{SetExplicitTimingMode_}, SubmitExplicitTimingData{SubmitExplicitTimingData_} {}
  }; // OVR.OpenVR.IVRCompositor
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor, "OVR.OpenVR", "IVRCompositor");
#pragma pack(pop)
