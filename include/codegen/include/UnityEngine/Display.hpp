// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Display
  class Display : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Display::DisplaysUpdatedDelegate
    class DisplaysUpdatedDelegate;
    // System.IntPtr nativeDisplay
    // Offset: 0x10
    System::IntPtr nativeDisplay;
    // Get static field: static public UnityEngine.Display[] displays
    static ::Array<UnityEngine::Display*>* _get_displays();
    // Set static field: static public UnityEngine.Display[] displays
    static void _set_displays(::Array<UnityEngine::Display*>* value);
    // Get static field: static private UnityEngine.Display _mainDisplay
    static UnityEngine::Display* _get__mainDisplay();
    // Set static field: static private UnityEngine.Display _mainDisplay
    static void _set__mainDisplay(UnityEngine::Display* value);
    // Get static field: static private UnityEngine.Display/DisplaysUpdatedDelegate onDisplaysUpdated
    static UnityEngine::Display::DisplaysUpdatedDelegate* _get_onDisplaysUpdated();
    // Set static field: static private UnityEngine.Display/DisplaysUpdatedDelegate onDisplaysUpdated
    static void _set_onDisplaysUpdated(UnityEngine::Display::DisplaysUpdatedDelegate* value);
    // System.Void .ctor(System.IntPtr nativeDisplay)
    // Offset: 0x12F2388
    static Display* New_ctor(System::IntPtr nativeDisplay);
    // public System.Int32 get_renderingWidth()
    // Offset: 0x12F23B4
    int get_renderingWidth();
    // public System.Int32 get_renderingHeight()
    // Offset: 0x12F24B0
    int get_renderingHeight();
    // public System.Int32 get_systemWidth()
    // Offset: 0x12F2554
    int get_systemWidth();
    // public System.Int32 get_systemHeight()
    // Offset: 0x12F2650
    int get_systemHeight();
    // static public UnityEngine.Vector3 RelativeMouseAt(UnityEngine.Vector3 inputMouseCoordinates)
    // Offset: 0x12F26F4
    static UnityEngine::Vector3 RelativeMouseAt(UnityEngine::Vector3 inputMouseCoordinates);
    // static public UnityEngine.Display get_main()
    // Offset: 0x12F2828
    static UnityEngine::Display* get_main();
    // static private System.Void RecreateDisplayList(System.IntPtr[] nativeDisplay)
    // Offset: 0x12F2890
    static void RecreateDisplayList(::Array<System::IntPtr>* nativeDisplay);
    // static private System.Void FireDisplaysUpdated()
    // Offset: 0x12F2A60
    static void FireDisplaysUpdated();
    // static private System.Void GetSystemExtImpl(System.IntPtr nativeDisplay, System.Int32 w, System.Int32 h)
    // Offset: 0x12F25F8
    static void GetSystemExtImpl(System::IntPtr nativeDisplay, int& w, int& h);
    // static private System.Void GetRenderingExtImpl(System.IntPtr nativeDisplay, System.Int32 w, System.Int32 h)
    // Offset: 0x12F2458
    static void GetRenderingExtImpl(System::IntPtr nativeDisplay, int& w, int& h);
    // static private System.Int32 RelativeMouseAtImpl(System.Int32 x, System.Int32 y, System.Int32 rx, System.Int32 ry)
    // Offset: 0x12F27C0
    static int RelativeMouseAtImpl(int x, int y, int& rx, int& ry);
    // static private System.Void .cctor()
    // Offset: 0x12F2D10
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x12F2348
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Display* New_ctor();
  }; // UnityEngine.Display
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Display*, "UnityEngine", "Display");
#pragma pack(pop)
