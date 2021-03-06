// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.UInt32
#include "System/UInt32.hpp"
// Including type: UnityEngine.RenderTextureFormat
#include "UnityEngine/RenderTextureFormat.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Including type: UnityEngine.ProBuilder.SimpleTuple`2
#include "UnityEngine/ProBuilder/SimpleTuple_2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextureFormat
  struct TextureFormat;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Color32
  struct Color32;
  // Forward declaring type: Shader
  class Shader;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.SelectionPickerRenderer
  class SelectionPickerRenderer : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::SelectionPickerRenderer::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    // Nested type: UnityEngine::ProBuilder::SelectionPickerRenderer::$$c
    class $$c;
    // static field const value: static private System.String k_FacePickerOcclusionTintUniform
    static constexpr const char* k_FacePickerOcclusionTintUniform = "_Tint";
    // Get static field: static private System.String k_FacePickerOcclusionTintUniform
    static ::Il2CppString* _get_k_FacePickerOcclusionTintUniform();
    // Set static field: static private System.String k_FacePickerOcclusionTintUniform
    static void _set_k_FacePickerOcclusionTintUniform(::Il2CppString* value);
    // Get static field: static private readonly UnityEngine.Color k_Blackf
    static UnityEngine::Color _get_k_Blackf();
    // Set static field: static private readonly UnityEngine.Color k_Blackf
    static void _set_k_Blackf(UnityEngine::Color value);
    // Get static field: static private readonly UnityEngine.Color k_Whitef
    static UnityEngine::Color _get_k_Whitef();
    // Set static field: static private readonly UnityEngine.Color k_Whitef
    static void _set_k_Whitef(UnityEngine::Color value);
    // static field const value: static private System.UInt32 k_PickerHashNone
    static constexpr const uint k_PickerHashNone = 0u;
    // Get static field: static private System.UInt32 k_PickerHashNone
    static uint _get_k_PickerHashNone();
    // Set static field: static private System.UInt32 k_PickerHashNone
    static void _set_k_PickerHashNone(uint value);
    // static field const value: static private System.UInt32 k_PickerHashMin
    static constexpr const uint k_PickerHashMin = 1u;
    // Get static field: static private System.UInt32 k_PickerHashMin
    static uint _get_k_PickerHashMin();
    // Set static field: static private System.UInt32 k_PickerHashMin
    static void _set_k_PickerHashMin(uint value);
    // static field const value: static private System.UInt32 k_PickerHashMax
    static constexpr const uint k_PickerHashMax = 16777215u;
    // Get static field: static private System.UInt32 k_PickerHashMax
    static uint _get_k_PickerHashMax();
    // Set static field: static private System.UInt32 k_PickerHashMax
    static void _set_k_PickerHashMax(uint value);
    // static field const value: static private System.UInt32 k_MinEdgePixelsForValidSelection
    static constexpr const uint k_MinEdgePixelsForValidSelection = 1u;
    // Get static field: static private System.UInt32 k_MinEdgePixelsForValidSelection
    static uint _get_k_MinEdgePixelsForValidSelection();
    // Set static field: static private System.UInt32 k_MinEdgePixelsForValidSelection
    static void _set_k_MinEdgePixelsForValidSelection(uint value);
    // Get static field: static private System.Boolean s_Initialized
    static bool _get_s_Initialized();
    // Set static field: static private System.Boolean s_Initialized
    static void _set_s_Initialized(bool value);
    // Get static field: static private UnityEngine.RenderTextureFormat s_RenderTextureFormat
    static UnityEngine::RenderTextureFormat _get_s_RenderTextureFormat();
    // Set static field: static private UnityEngine.RenderTextureFormat s_RenderTextureFormat
    static void _set_s_RenderTextureFormat(UnityEngine::RenderTextureFormat value);
    // Get static field: static private UnityEngine.RenderTextureFormat[] s_PreferredFormats
    static ::Array<UnityEngine::RenderTextureFormat>* _get_s_PreferredFormats();
    // Set static field: static private UnityEngine.RenderTextureFormat[] s_PreferredFormats
    static void _set_s_PreferredFormats(::Array<UnityEngine::RenderTextureFormat>* value);
    // static private UnityEngine.RenderTextureFormat get_renderTextureFormat()
    // Offset: 0x102D9B4
    static UnityEngine::RenderTextureFormat get_renderTextureFormat();
    // static private UnityEngine.TextureFormat get_textureFormat()
    // Offset: 0x102DB54
    static UnityEngine::TextureFormat get_textureFormat();
    // static public System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face>> PickFacesInRect(UnityEngine.Camera camera, UnityEngine.Rect pickerRect, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selection, System.Int32 renderTextureWidth, System.Int32 renderTextureHeight)
    // Offset: 0x102C750
    static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*>* PickFacesInRect(UnityEngine::Camera* camera, UnityEngine::Rect pickerRect, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selection, int renderTextureWidth, int renderTextureHeight);
    // static public System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.HashSet`1<System.Int32>> PickVerticesInRect(UnityEngine.Camera camera, UnityEngine.Rect pickerRect, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selection, System.Boolean doDepthTest, System.Int32 renderTextureWidth, System.Int32 renderTextureHeight)
    // Offset: 0x102AEB8
    static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::HashSet_1<int>*>* PickVerticesInRect(UnityEngine::Camera* camera, UnityEngine::Rect pickerRect, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selection, bool doDepthTest, int renderTextureWidth, int renderTextureHeight);
    // static public System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Edge>> PickEdgesInRect(UnityEngine.Camera camera, UnityEngine.Rect pickerRect, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selection, System.Boolean doDepthTest, System.Int32 renderTextureWidth, System.Int32 renderTextureHeight)
    // Offset: 0x102D378
    static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Edge>*>* PickEdgesInRect(UnityEngine::Camera* camera, UnityEngine::Rect pickerRect, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selection, bool doDepthTest, int renderTextureWidth, int renderTextureHeight);
    // static private UnityEngine.Texture2D RenderSelectionPickerTexture(UnityEngine.Camera camera, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selection, System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Face>> map, System.Int32 width, System.Int32 height)
    // Offset: 0x102DB5C
    static UnityEngine::Texture2D* RenderSelectionPickerTexture(UnityEngine::Camera* camera, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selection, System::Collections::Generic::Dictionary_2<uint, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Face*>>*& map, int width, int height);
    // static private UnityEngine.Texture2D RenderSelectionPickerTexture(UnityEngine.Camera camera, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selection, System.Boolean doDepthTest, System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.ProBuilderMesh,System.Int32>> map, System.Int32 width, System.Int32 height)
    // Offset: 0x102DDB8
    static UnityEngine::Texture2D* RenderSelectionPickerTexture(UnityEngine::Camera* camera, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selection, bool doDepthTest, System::Collections::Generic::Dictionary_2<uint, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::ProBuilderMesh*, int>>*& map, int width, int height);
    // static private UnityEngine.Texture2D RenderSelectionPickerTexture(UnityEngine.Camera camera, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selection, System.Boolean doDepthTest, System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Edge>> map, System.Int32 width, System.Int32 height)
    // Offset: 0x102E038
    static UnityEngine::Texture2D* RenderSelectionPickerTexture(UnityEngine::Camera* camera, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selection, bool doDepthTest, System::Collections::Generic::Dictionary_2<uint, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Edge>>*& map, int width, int height);
    // static private UnityEngine.GameObject[] GenerateFacePickingObjects(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selection, System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Face>> map)
    // Offset: 0x102E2B0
    static ::Array<UnityEngine::GameObject*>* GenerateFacePickingObjects(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selection, System::Collections::Generic::Dictionary_2<uint, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Face*>>*& map);
    // static private System.Void GenerateVertexPickingObjects(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selection, System.Boolean doDepthTest, System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.ProBuilderMesh,System.Int32>> map, UnityEngine.GameObject[] depthObjects, UnityEngine.GameObject[] pickerObjects)
    // Offset: 0x102EBAC
    static void GenerateVertexPickingObjects(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selection, bool doDepthTest, System::Collections::Generic::Dictionary_2<uint, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::ProBuilderMesh*, int>>*& map, ::Array<UnityEngine::GameObject*>*& depthObjects, ::Array<UnityEngine::GameObject*>*& pickerObjects);
    // static private System.Void GenerateEdgePickingObjects(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selection, System.Boolean doDepthTest, System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Edge>> map, UnityEngine.GameObject[] depthObjects, UnityEngine.GameObject[] pickerObjects)
    // Offset: 0x102F0CC
    static void GenerateEdgePickingObjects(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selection, bool doDepthTest, System::Collections::Generic::Dictionary_2<uint, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Edge>>*& map, ::Array<UnityEngine::GameObject*>*& depthObjects, ::Array<UnityEngine::GameObject*>*& pickerObjects);
    // static private UnityEngine.Mesh BuildVertexMesh(UnityEngine.ProBuilder.ProBuilderMesh pb, System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.ProBuilderMesh,System.Int32>> map, System.UInt32 index)
    // Offset: 0x102F6A0
    static UnityEngine::Mesh* BuildVertexMesh(UnityEngine::ProBuilder::ProBuilderMesh* pb, System::Collections::Generic::Dictionary_2<uint, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::ProBuilderMesh*, int>>* map, uint& index);
    // static private UnityEngine.Mesh BuildEdgeMesh(UnityEngine.ProBuilder.ProBuilderMesh pb, System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Edge>> map, System.UInt32 index)
    // Offset: 0x102FE48
    static UnityEngine::Mesh* BuildEdgeMesh(UnityEngine::ProBuilder::ProBuilderMesh* pb, System::Collections::Generic::Dictionary_2<uint, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Edge>>* map, uint& index);
    // static public System.UInt32 DecodeRGBA(UnityEngine.Color32 color)
    // Offset: 0x102DD20
    static uint DecodeRGBA(UnityEngine::Color32 color);
    // static public UnityEngine.Color32 EncodeRGBA(System.UInt32 hash)
    // Offset: 0x102F5EC
    static UnityEngine::Color32 EncodeRGBA(uint hash);
    // static private UnityEngine.Texture2D RenderWithReplacementShader(UnityEngine.Camera camera, UnityEngine.Shader shader, System.String tag, System.Int32 width, System.Int32 height)
    // Offset: 0x102E838
    static UnityEngine::Texture2D* RenderWithReplacementShader(UnityEngine::Camera* camera, UnityEngine::Shader* shader, ::Il2CppString* tag, int width, int height);
    // static private System.Void .cctor()
    // Offset: 0x10302DC
    static void _cctor();
  }; // UnityEngine.ProBuilder.SelectionPickerRenderer
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SelectionPickerRenderer*, "UnityEngine.ProBuilder", "SelectionPickerRenderer");
#pragma pack(pop)
