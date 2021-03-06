// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Polyglot.GoogleDriveDownloadFormat
#include "Polyglot/GoogleDriveDownloadFormat.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Autogenerated type: Polyglot.LocalizationAsset
  class LocalizationAsset : public ::Il2CppObject {
    public:
    // private UnityEngine.TextAsset textAsset
    // Offset: 0x10
    UnityEngine::TextAsset* textAsset;
    // private Polyglot.GoogleDriveDownloadFormat format
    // Offset: 0x18
    Polyglot::GoogleDriveDownloadFormat format;
    // public UnityEngine.TextAsset get_TextAsset()
    // Offset: 0x18FF35C
    UnityEngine::TextAsset* get_TextAsset();
    // public System.Void set_TextAsset(UnityEngine.TextAsset value)
    // Offset: 0x18FF364
    void set_TextAsset(UnityEngine::TextAsset* value);
    // public Polyglot.GoogleDriveDownloadFormat get_Format()
    // Offset: 0x18FF36C
    Polyglot::GoogleDriveDownloadFormat get_Format();
    // public System.Void set_Format(Polyglot.GoogleDriveDownloadFormat value)
    // Offset: 0x18FF374
    void set_Format(Polyglot::GoogleDriveDownloadFormat value);
    // public System.Void .ctor()
    // Offset: 0x18FF37C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LocalizationAsset* New_ctor();
  }; // Polyglot.LocalizationAsset
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizationAsset*, "Polyglot", "LocalizationAsset");
#pragma pack(pop)
