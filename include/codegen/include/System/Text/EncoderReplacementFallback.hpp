// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Text.EncoderFallback
#include "System/Text/EncoderFallback.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.EncoderReplacementFallback
  class EncoderReplacementFallback : public System::Text::EncoderFallback {
    public:
    // private System.String strDefault
    // Offset: 0x18
    ::Il2CppString* strDefault;
    // public System.Void .ctor(System.String replacement)
    // Offset: 0x12D9C48
    static EncoderReplacementFallback* New_ctor(::Il2CppString* replacement);
    // public System.String get_DefaultString()
    // Offset: 0x12D9E2C
    ::Il2CppString* get_DefaultString();
    // public System.Void .ctor()
    // Offset: 0x12D88A8
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Void EncoderFallback::.ctor()
    // Base method: System.Void Object::.ctor()
    static EncoderReplacementFallback* New_ctor();
    // public override System.Text.EncoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0x12D9E34
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Text.EncoderFallbackBuffer EncoderFallback::CreateFallbackBuffer()
    System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();
    // public override System.Int32 get_MaxCharCount()
    // Offset: 0x12D9EE8
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Int32 EncoderFallback::get_MaxCharCount()
    int get_MaxCharCount();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x12D9F04
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12D9F98
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.EncoderReplacementFallback
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderReplacementFallback*, "System.Text", "EncoderReplacementFallback");
#pragma pack(pop)
