// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.CursorLockMode
#include "UnityEngine/CursorLockMode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_Overlay
  class SteamVR_Overlay;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Menu
  class SteamVR_Menu : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Texture cursor
    // Offset: 0x18
    UnityEngine::Texture* cursor;
    // public UnityEngine.Texture background
    // Offset: 0x20
    UnityEngine::Texture* background;
    // public UnityEngine.Texture logo
    // Offset: 0x28
    UnityEngine::Texture* logo;
    // public System.Single logoHeight
    // Offset: 0x30
    float logoHeight;
    // public System.Single menuOffset
    // Offset: 0x34
    float menuOffset;
    // public UnityEngine.Vector2 scaleLimits
    // Offset: 0x38
    UnityEngine::Vector2 scaleLimits;
    // public System.Single scaleRate
    // Offset: 0x40
    float scaleRate;
    // private SteamVR_Overlay overlay
    // Offset: 0x48
    GlobalNamespace::SteamVR_Overlay* overlay;
    // private UnityEngine.Camera overlayCam
    // Offset: 0x50
    UnityEngine::Camera* overlayCam;
    // private UnityEngine.Vector4 uvOffset
    // Offset: 0x58
    UnityEngine::Vector4 uvOffset;
    // private System.Single distance
    // Offset: 0x68
    float distance;
    // private System.Single <scale>k__BackingField
    // Offset: 0x6C
    float scale;
    // private System.String scaleLimitX
    // Offset: 0x70
    ::Il2CppString* scaleLimitX;
    // private System.String scaleLimitY
    // Offset: 0x78
    ::Il2CppString* scaleLimitY;
    // private System.String scaleRateText
    // Offset: 0x80
    ::Il2CppString* scaleRateText;
    // private UnityEngine.CursorLockMode savedCursorLockState
    // Offset: 0x88
    UnityEngine::CursorLockMode savedCursorLockState;
    // private System.Boolean savedCursorVisible
    // Offset: 0x8C
    bool savedCursorVisible;
    // public UnityEngine.RenderTexture get_texture()
    // Offset: 0xD8A8CC
    UnityEngine::RenderTexture* get_texture();
    // public System.Single get_scale()
    // Offset: 0xD8A998
    float get_scale();
    // private System.Void set_scale(System.Single value)
    // Offset: 0xD8A9A0
    void set_scale(float value);
    // private System.Void Awake()
    // Offset: 0xD8A9A8
    void Awake();
    // private System.Void OnGUI()
    // Offset: 0xD8AB34
    void OnGUI();
    // public System.Void ShowMenu()
    // Offset: 0xD8C714
    void ShowMenu();
    // public System.Void HideMenu()
    // Offset: 0xD8C5F4
    void HideMenu();
    // private System.Void Update()
    // Offset: 0xD8CAF0
    void Update();
    // private System.Void SetScale(System.Single scale)
    // Offset: 0xD8C508
    void SetScale(float scale);
    // private System.Void SaveCursorState()
    // Offset: 0xD8CA88
    void SaveCursorState();
    // private System.Void RestoreCursorState()
    // Offset: 0xD8CAC0
    void RestoreCursorState();
    // public System.Void .ctor()
    // Offset: 0xD8CCC0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamVR_Menu* New_ctor();
  }; // SteamVR_Menu
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Menu*, "", "SteamVR_Menu");
#pragma pack(pop)
