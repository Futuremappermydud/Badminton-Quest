// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: TMPro.TMP_TextElementType
#include "TMPro/TMP_TextElementType.hpp"
// Including type: TMPro.TMP_Vertex
#include "TMPro/TMP_Vertex.hpp"
// Including type: TMPro.FontStyles
#include "TMPro/FontStyles.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_TextElement
  class TMP_TextElement;
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_CharacterInfo
  struct TMP_CharacterInfo : public System::ValueType {
    public:
    // public System.Char character
    // Offset: 0x0
    ::Il2CppChar character;
    // public System.Int32 index
    // Offset: 0x4
    int index;
    // public System.Int32 stringLength
    // Offset: 0x8
    int stringLength;
    // public TMPro.TMP_TextElementType elementType
    // Offset: 0xC
    TMPro::TMP_TextElementType elementType;
    // public TMPro.TMP_TextElement textElement
    // Offset: 0x10
    TMPro::TMP_TextElement* textElement;
    // public TMPro.TMP_FontAsset fontAsset
    // Offset: 0x18
    TMPro::TMP_FontAsset* fontAsset;
    // public TMPro.TMP_SpriteAsset spriteAsset
    // Offset: 0x20
    TMPro::TMP_SpriteAsset* spriteAsset;
    // public System.Int32 spriteIndex
    // Offset: 0x28
    int spriteIndex;
    // public UnityEngine.Material material
    // Offset: 0x30
    UnityEngine::Material* material;
    // public System.Int32 materialReferenceIndex
    // Offset: 0x38
    int materialReferenceIndex;
    // public System.Boolean isUsingAlternateTypeface
    // Offset: 0x3C
    bool isUsingAlternateTypeface;
    // public System.Single pointSize
    // Offset: 0x40
    float pointSize;
    // public System.Int32 lineNumber
    // Offset: 0x44
    int lineNumber;
    // public System.Int32 pageNumber
    // Offset: 0x48
    int pageNumber;
    // public System.Int32 vertexIndex
    // Offset: 0x4C
    int vertexIndex;
    // public TMPro.TMP_Vertex vertex_BL
    // Offset: 0x50
    TMPro::TMP_Vertex vertex_BL;
    // public TMPro.TMP_Vertex vertex_TL
    // Offset: 0x78
    TMPro::TMP_Vertex vertex_TL;
    // public TMPro.TMP_Vertex vertex_TR
    // Offset: 0xA0
    TMPro::TMP_Vertex vertex_TR;
    // public TMPro.TMP_Vertex vertex_BR
    // Offset: 0xC8
    TMPro::TMP_Vertex vertex_BR;
    // public UnityEngine.Vector3 topLeft
    // Offset: 0xF0
    UnityEngine::Vector3 topLeft;
    // public UnityEngine.Vector3 bottomLeft
    // Offset: 0xFC
    UnityEngine::Vector3 bottomLeft;
    // public UnityEngine.Vector3 topRight
    // Offset: 0x108
    UnityEngine::Vector3 topRight;
    // public UnityEngine.Vector3 bottomRight
    // Offset: 0x114
    UnityEngine::Vector3 bottomRight;
    // public System.Single origin
    // Offset: 0x120
    float origin;
    // public System.Single ascender
    // Offset: 0x124
    float ascender;
    // public System.Single baseLine
    // Offset: 0x128
    float baseLine;
    // public System.Single descender
    // Offset: 0x12C
    float descender;
    // public System.Single xAdvance
    // Offset: 0x130
    float xAdvance;
    // public System.Single aspectRatio
    // Offset: 0x134
    float aspectRatio;
    // public System.Single scale
    // Offset: 0x138
    float scale;
    // public UnityEngine.Color32 color
    // Offset: 0x13C
    UnityEngine::Color32 color;
    // public UnityEngine.Color32 underlineColor
    // Offset: 0x140
    UnityEngine::Color32 underlineColor;
    // public UnityEngine.Color32 strikethroughColor
    // Offset: 0x144
    UnityEngine::Color32 strikethroughColor;
    // public UnityEngine.Color32 highlightColor
    // Offset: 0x148
    UnityEngine::Color32 highlightColor;
    // public TMPro.FontStyles style
    // Offset: 0x14C
    TMPro::FontStyles style;
    // public System.Boolean isVisible
    // Offset: 0x150
    bool isVisible;
    // Creating value type constructor for type: TMP_CharacterInfo
    TMP_CharacterInfo(::Il2CppChar character_ = {}, int index_ = {}, int stringLength_ = {}, TMPro::TMP_TextElementType elementType_ = {}, TMPro::TMP_TextElement* textElement_ = {}, TMPro::TMP_FontAsset* fontAsset_ = {}, TMPro::TMP_SpriteAsset* spriteAsset_ = {}, int spriteIndex_ = {}, UnityEngine::Material* material_ = {}, int materialReferenceIndex_ = {}, bool isUsingAlternateTypeface_ = {}, float pointSize_ = {}, int lineNumber_ = {}, int pageNumber_ = {}, int vertexIndex_ = {}, TMPro::TMP_Vertex vertex_BL_ = {}, TMPro::TMP_Vertex vertex_TL_ = {}, TMPro::TMP_Vertex vertex_TR_ = {}, TMPro::TMP_Vertex vertex_BR_ = {}, UnityEngine::Vector3 topLeft_ = {}, UnityEngine::Vector3 bottomLeft_ = {}, UnityEngine::Vector3 topRight_ = {}, UnityEngine::Vector3 bottomRight_ = {}, float origin_ = {}, float ascender_ = {}, float baseLine_ = {}, float descender_ = {}, float xAdvance_ = {}, float aspectRatio_ = {}, float scale_ = {}, UnityEngine::Color32 color_ = {}, UnityEngine::Color32 underlineColor_ = {}, UnityEngine::Color32 strikethroughColor_ = {}, UnityEngine::Color32 highlightColor_ = {}, TMPro::FontStyles style_ = {}, bool isVisible_ = {}) : character{character_}, index{index_}, stringLength{stringLength_}, elementType{elementType_}, textElement{textElement_}, fontAsset{fontAsset_}, spriteAsset{spriteAsset_}, spriteIndex{spriteIndex_}, material{material_}, materialReferenceIndex{materialReferenceIndex_}, isUsingAlternateTypeface{isUsingAlternateTypeface_}, pointSize{pointSize_}, lineNumber{lineNumber_}, pageNumber{pageNumber_}, vertexIndex{vertexIndex_}, vertex_BL{vertex_BL_}, vertex_TL{vertex_TL_}, vertex_TR{vertex_TR_}, vertex_BR{vertex_BR_}, topLeft{topLeft_}, bottomLeft{bottomLeft_}, topRight{topRight_}, bottomRight{bottomRight_}, origin{origin_}, ascender{ascender_}, baseLine{baseLine_}, descender{descender_}, xAdvance{xAdvance_}, aspectRatio{aspectRatio_}, scale{scale_}, color{color_}, underlineColor{underlineColor_}, strikethroughColor{strikethroughColor_}, highlightColor{highlightColor_}, style{style_}, isVisible{isVisible_} {}
  }; // TMPro.TMP_CharacterInfo
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_CharacterInfo, "TMPro", "TMP_CharacterInfo");
#pragma pack(pop)
