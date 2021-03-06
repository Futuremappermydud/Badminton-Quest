// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSystemPerfMetrics
#include "GlobalNamespace/OVRSystemPerfMetrics.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRNetwork
#include "GlobalNamespace/OVRNetwork.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer
  class OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer : public UnityEngine::MonoBehaviour {
    public:
    // private OVRNetwork/OVRNetworkTcpServer tcpServer
    // Offset: 0x18
    GlobalNamespace::OVRNetwork::OVRNetworkTcpServer* tcpServer;
    // public System.Int32 listeningPort
    // Offset: 0x20
    int listeningPort;
    // Get static field: static public OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer singleton
    static GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer* _get_singleton();
    // Set static field: static public OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer singleton
    static void _set_singleton(GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer* value);
    // private System.Void OnEnable()
    // Offset: 0x18FEFA0
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x18FF0E4
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x18FF19C
    void Update();
    // private OVRSystemPerfMetrics/PerfMetrics GatherPerfMetrics()
    // Offset: 0x18FF224
    GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics* GatherPerfMetrics();
    // public System.Void .ctor()
    // Offset: 0x18FF8D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x18FF950
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer*, "", "OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer");
#pragma pack(pop)
