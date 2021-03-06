// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Xml.NewLineHandling
#include "System/Xml/NewLineHandling.hpp"
// Including type: System.Xml.TriState
#include "System/Xml/TriState.hpp"
// Including type: System.Xml.NamespaceHandling
#include "System/Xml/NamespaceHandling.hpp"
// Including type: System.Xml.ConformanceLevel
#include "System/Xml/ConformanceLevel.hpp"
// Including type: System.Xml.XmlOutputMethod
#include "System/Xml/XmlOutputMethod.hpp"
// Including type: System.Xml.XmlStandalone
#include "System/Xml/XmlStandalone.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlWriterSettings
  class XmlWriterSettings : public ::Il2CppObject {
    public:
    // private System.Boolean useAsync
    // Offset: 0x10
    bool useAsync;
    // private System.Text.Encoding encoding
    // Offset: 0x18
    System::Text::Encoding* encoding;
    // private System.Boolean omitXmlDecl
    // Offset: 0x20
    bool omitXmlDecl;
    // private System.Xml.NewLineHandling newLineHandling
    // Offset: 0x24
    System::Xml::NewLineHandling newLineHandling;
    // private System.String newLineChars
    // Offset: 0x28
    ::Il2CppString* newLineChars;
    // private System.Xml.TriState indent
    // Offset: 0x30
    System::Xml::TriState indent;
    // private System.String indentChars
    // Offset: 0x38
    ::Il2CppString* indentChars;
    // private System.Boolean newLineOnAttributes
    // Offset: 0x40
    bool newLineOnAttributes;
    // private System.Boolean closeOutput
    // Offset: 0x41
    bool closeOutput;
    // private System.Xml.NamespaceHandling namespaceHandling
    // Offset: 0x44
    System::Xml::NamespaceHandling namespaceHandling;
    // private System.Xml.ConformanceLevel conformanceLevel
    // Offset: 0x48
    System::Xml::ConformanceLevel conformanceLevel;
    // private System.Boolean checkCharacters
    // Offset: 0x4C
    bool checkCharacters;
    // private System.Boolean writeEndDocumentOnClose
    // Offset: 0x4D
    bool writeEndDocumentOnClose;
    // private System.Xml.XmlOutputMethod outputMethod
    // Offset: 0x50
    System::Xml::XmlOutputMethod outputMethod;
    // private System.Collections.Generic.List`1<System.Xml.XmlQualifiedName> cdataSections
    // Offset: 0x58
    System::Collections::Generic::List_1<System::Xml::XmlQualifiedName*>* cdataSections;
    // private System.Boolean doNotEscapeUriAttributes
    // Offset: 0x60
    bool doNotEscapeUriAttributes;
    // private System.Boolean mergeCDataSections
    // Offset: 0x61
    bool mergeCDataSections;
    // private System.String mediaType
    // Offset: 0x68
    ::Il2CppString* mediaType;
    // private System.String docTypeSystem
    // Offset: 0x70
    ::Il2CppString* docTypeSystem;
    // private System.String docTypePublic
    // Offset: 0x78
    ::Il2CppString* docTypePublic;
    // private System.Xml.XmlStandalone standalone
    // Offset: 0x80
    System::Xml::XmlStandalone standalone;
    // private System.Boolean autoXmlDecl
    // Offset: 0x84
    bool autoXmlDecl;
    // private System.Boolean isReadOnly
    // Offset: 0x85
    bool isReadOnly;
    // public System.Boolean get_Async()
    // Offset: 0x192B8D0
    bool get_Async();
    // public System.Text.Encoding get_Encoding()
    // Offset: 0x192B8D8
    System::Text::Encoding* get_Encoding();
    // public System.Boolean get_OmitXmlDeclaration()
    // Offset: 0x192B8E0
    bool get_OmitXmlDeclaration();
    // public System.Xml.NewLineHandling get_NewLineHandling()
    // Offset: 0x192B8E8
    System::Xml::NewLineHandling get_NewLineHandling();
    // public System.String get_NewLineChars()
    // Offset: 0x192B8F0
    ::Il2CppString* get_NewLineChars();
    // public System.Boolean get_Indent()
    // Offset: 0x192B8F8
    bool get_Indent();
    // public System.Void set_Indent(System.Boolean value)
    // Offset: 0x192B908
    void set_Indent(bool value);
    // public System.String get_IndentChars()
    // Offset: 0x192BA50
    ::Il2CppString* get_IndentChars();
    // public System.Boolean get_NewLineOnAttributes()
    // Offset: 0x192BA58
    bool get_NewLineOnAttributes();
    // public System.Boolean get_CloseOutput()
    // Offset: 0x192BA60
    bool get_CloseOutput();
    // public System.Xml.ConformanceLevel get_ConformanceLevel()
    // Offset: 0x192BA68
    System::Xml::ConformanceLevel get_ConformanceLevel();
    // public System.Void set_ConformanceLevel(System.Xml.ConformanceLevel value)
    // Offset: 0x192BA70
    void set_ConformanceLevel(System::Xml::ConformanceLevel value);
    // public System.Boolean get_CheckCharacters()
    // Offset: 0x192BB18
    bool get_CheckCharacters();
    // public System.Xml.NamespaceHandling get_NamespaceHandling()
    // Offset: 0x192BB20
    System::Xml::NamespaceHandling get_NamespaceHandling();
    // public System.Boolean get_WriteEndDocumentOnClose()
    // Offset: 0x192BB28
    bool get_WriteEndDocumentOnClose();
    // public System.Xml.XmlOutputMethod get_OutputMethod()
    // Offset: 0x192BB30
    System::Xml::XmlOutputMethod get_OutputMethod();
    // System.Void set_OutputMethod(System.Xml.XmlOutputMethod value)
    // Offset: 0x192BB38
    void set_OutputMethod(System::Xml::XmlOutputMethod value);
    // public System.Xml.XmlWriterSettings Clone()
    // Offset: 0x192BB40
    System::Xml::XmlWriterSettings* Clone();
    // System.Collections.Generic.List`1<System.Xml.XmlQualifiedName> get_CDataSectionElements()
    // Offset: 0x192BC04
    System::Collections::Generic::List_1<System::Xml::XmlQualifiedName*>* get_CDataSectionElements();
    // public System.Boolean get_DoNotEscapeUriAttributes()
    // Offset: 0x192BC0C
    bool get_DoNotEscapeUriAttributes();
    // System.Boolean get_MergeCDataSections()
    // Offset: 0x192BC14
    bool get_MergeCDataSections();
    // System.String get_MediaType()
    // Offset: 0x192BC1C
    ::Il2CppString* get_MediaType();
    // System.String get_DocTypeSystem()
    // Offset: 0x192BC24
    ::Il2CppString* get_DocTypeSystem();
    // System.String get_DocTypePublic()
    // Offset: 0x192BC2C
    ::Il2CppString* get_DocTypePublic();
    // System.Xml.XmlStandalone get_Standalone()
    // Offset: 0x192BC34
    System::Xml::XmlStandalone get_Standalone();
    // System.Boolean get_AutoXmlDeclaration()
    // Offset: 0x192BC3C
    bool get_AutoXmlDeclaration();
    // System.Xml.TriState get_IndentInternal()
    // Offset: 0x192BC44
    System::Xml::TriState get_IndentInternal();
    // System.Boolean get_IsQuerySpecific()
    // Offset: 0x192BC4C
    bool get_IsQuerySpecific();
    // System.Xml.XmlWriter CreateWriter(System.IO.Stream output)
    // Offset: 0x192B0E8
    System::Xml::XmlWriter* CreateWriter(System::IO::Stream* output);
    // System.Xml.XmlWriter CreateWriter(System.IO.TextWriter output)
    // Offset: 0x192B520
    System::Xml::XmlWriter* CreateWriter(System::IO::TextWriter* output);
    // System.Void set_ReadOnly(System.Boolean value)
    // Offset: 0x192BCC4
    void set_ReadOnly(bool value);
    // private System.Void CheckReadOnly(System.String propertyName)
    // Offset: 0x192B978
    void CheckReadOnly(::Il2CppString* propertyName);
    // private System.Void Initialize()
    // Offset: 0x192B7B8
    void Initialize();
    // public System.Void .ctor()
    // Offset: 0x192B064
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static XmlWriterSettings* New_ctor();
  }; // System.Xml.XmlWriterSettings
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWriterSettings*, "System.Xml", "XmlWriterSettings");
#pragma pack(pop)
