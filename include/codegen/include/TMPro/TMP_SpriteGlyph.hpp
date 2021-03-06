// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.TextCore.Glyph
#include "UnityEngine/TextCore/Glyph.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Skipping declaration: GlyphMetrics because it is already included!
  // Skipping declaration: GlyphRect because it is already included!
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_SpriteGlyph
  class TMP_SpriteGlyph : public UnityEngine::TextCore::Glyph {
    public:
    // public UnityEngine.Sprite sprite
    // Offset: 0x40
    UnityEngine::Sprite* sprite;
    // public System.Void .ctor(System.UInt32 index, UnityEngine.TextCore.GlyphMetrics metrics, UnityEngine.TextCore.GlyphRect glyphRect, System.Single scale, System.Int32 atlasIndex, UnityEngine.Sprite sprite)
    // Offset: 0xBA0688
    static TMP_SpriteGlyph* New_ctor(uint index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float scale, int atlasIndex, UnityEngine::Sprite* sprite);
    // public System.Void .ctor()
    // Offset: 0xBA0318
    // Implemented from: UnityEngine.TextCore.Glyph
    // Base method: System.Void Glyph::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_SpriteGlyph* New_ctor();
    // public System.Void .ctor(System.UInt32 index, UnityEngine.TextCore.GlyphMetrics metrics, UnityEngine.TextCore.GlyphRect glyphRect, System.Single scale, System.Int32 atlasIndex)
    // Offset: 0xBA05C8
    // Implemented from: UnityEngine.TextCore.Glyph
    // Base method: System.Void Glyph::.ctor(System.UInt32 index, UnityEngine.TextCore.GlyphMetrics metrics, UnityEngine.TextCore.GlyphRect glyphRect, System.Single scale, System.Int32 atlasIndex)
    static TMP_SpriteGlyph* New_ctor(uint index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float scale, int atlasIndex);
  }; // TMPro.TMP_SpriteGlyph
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SpriteGlyph*, "TMPro", "TMP_SpriteGlyph");
#pragma pack(pop)
