// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.UInt32
#include "System/UInt32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRNetwork
  class OVRNetwork : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRNetwork::FrameHeader
    struct FrameHeader;
    // Nested type: GlobalNamespace::OVRNetwork::OVRNetworkTcpServer
    class OVRNetworkTcpServer;
    // Nested type: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient
    class OVRNetworkTcpClient;
    // static field const value: static public System.Int32 MaxBufferLength
    static constexpr const int MaxBufferLength = 65536;
    // Get static field: static public System.Int32 MaxBufferLength
    static int _get_MaxBufferLength();
    // Set static field: static public System.Int32 MaxBufferLength
    static void _set_MaxBufferLength(int value);
    // static field const value: static public System.Int32 MaxPayloadLength
    static constexpr const int MaxPayloadLength = 65524;
    // Get static field: static public System.Int32 MaxPayloadLength
    static int _get_MaxPayloadLength();
    // Set static field: static public System.Int32 MaxPayloadLength
    static void _set_MaxPayloadLength(int value);
    // static field const value: static public System.UInt32 FrameHeaderMagicIdentifier
    static constexpr const uint FrameHeaderMagicIdentifier = 1384359787u;
    // Get static field: static public System.UInt32 FrameHeaderMagicIdentifier
    static uint _get_FrameHeaderMagicIdentifier();
    // Set static field: static public System.UInt32 FrameHeaderMagicIdentifier
    static void _set_FrameHeaderMagicIdentifier(uint value);
    // public System.Void .ctor()
    // Offset: 0xEEF374
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVRNetwork* New_ctor();
  }; // OVRNetwork
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRNetwork*, "", "OVRNetwork");
#pragma pack(pop)
