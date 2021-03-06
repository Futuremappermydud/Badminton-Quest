// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:07 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.LivestreamingStartStatus
  struct LivestreamingStartStatus : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Oculus.Platform.LivestreamingStartStatus Success
    static constexpr const int Success = 1;
    // Get static field: static public Oculus.Platform.LivestreamingStartStatus Success
    static Oculus::Platform::LivestreamingStartStatus _get_Success();
    // Set static field: static public Oculus.Platform.LivestreamingStartStatus Success
    static void _set_Success(Oculus::Platform::LivestreamingStartStatus value);
    // static field const value: static public Oculus.Platform.LivestreamingStartStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.LivestreamingStartStatus Unknown
    static Oculus::Platform::LivestreamingStartStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.LivestreamingStartStatus Unknown
    static void _set_Unknown(Oculus::Platform::LivestreamingStartStatus value);
    // static field const value: static public Oculus.Platform.LivestreamingStartStatus NoPackageSet
    static constexpr const int NoPackageSet = -1;
    // Get static field: static public Oculus.Platform.LivestreamingStartStatus NoPackageSet
    static Oculus::Platform::LivestreamingStartStatus _get_NoPackageSet();
    // Set static field: static public Oculus.Platform.LivestreamingStartStatus NoPackageSet
    static void _set_NoPackageSet(Oculus::Platform::LivestreamingStartStatus value);
    // static field const value: static public Oculus.Platform.LivestreamingStartStatus NoFbConnect
    static constexpr const int NoFbConnect = -2;
    // Get static field: static public Oculus.Platform.LivestreamingStartStatus NoFbConnect
    static Oculus::Platform::LivestreamingStartStatus _get_NoFbConnect();
    // Set static field: static public Oculus.Platform.LivestreamingStartStatus NoFbConnect
    static void _set_NoFbConnect(Oculus::Platform::LivestreamingStartStatus value);
    // static field const value: static public Oculus.Platform.LivestreamingStartStatus NoSessionId
    static constexpr const int NoSessionId = -3;
    // Get static field: static public Oculus.Platform.LivestreamingStartStatus NoSessionId
    static Oculus::Platform::LivestreamingStartStatus _get_NoSessionId();
    // Set static field: static public Oculus.Platform.LivestreamingStartStatus NoSessionId
    static void _set_NoSessionId(Oculus::Platform::LivestreamingStartStatus value);
    // static field const value: static public Oculus.Platform.LivestreamingStartStatus MissingParameters
    static constexpr const int MissingParameters = -4;
    // Get static field: static public Oculus.Platform.LivestreamingStartStatus MissingParameters
    static Oculus::Platform::LivestreamingStartStatus _get_MissingParameters();
    // Set static field: static public Oculus.Platform.LivestreamingStartStatus MissingParameters
    static void _set_MissingParameters(Oculus::Platform::LivestreamingStartStatus value);
    // Creating value type constructor for type: LivestreamingStartStatus
    LivestreamingStartStatus(int value_ = {}) : value{value_} {}
  }; // Oculus.Platform.LivestreamingStartStatus
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LivestreamingStartStatus, "Oculus.Platform", "LivestreamingStartStatus");
#pragma pack(pop)
