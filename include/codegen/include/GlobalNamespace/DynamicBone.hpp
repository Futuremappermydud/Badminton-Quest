// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DynamicBoneColliderBase
  class DynamicBoneColliderBase;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DynamicBone
  class DynamicBone : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::DynamicBone::UpdateMode
    struct UpdateMode;
    // Nested type: GlobalNamespace::DynamicBone::FreezeAxis
    struct FreezeAxis;
    // Nested type: GlobalNamespace::DynamicBone::Particle
    class Particle;
    // Autogenerated type: DynamicBone/UpdateMode
    struct UpdateMode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public DynamicBone/UpdateMode Normal
      static constexpr const int Normal = 0;
      // Get static field: static public DynamicBone/UpdateMode Normal
      static GlobalNamespace::DynamicBone::UpdateMode _get_Normal();
      // Set static field: static public DynamicBone/UpdateMode Normal
      static void _set_Normal(GlobalNamespace::DynamicBone::UpdateMode value);
      // static field const value: static public DynamicBone/UpdateMode AnimatePhysics
      static constexpr const int AnimatePhysics = 1;
      // Get static field: static public DynamicBone/UpdateMode AnimatePhysics
      static GlobalNamespace::DynamicBone::UpdateMode _get_AnimatePhysics();
      // Set static field: static public DynamicBone/UpdateMode AnimatePhysics
      static void _set_AnimatePhysics(GlobalNamespace::DynamicBone::UpdateMode value);
      // static field const value: static public DynamicBone/UpdateMode UnscaledTime
      static constexpr const int UnscaledTime = 2;
      // Get static field: static public DynamicBone/UpdateMode UnscaledTime
      static GlobalNamespace::DynamicBone::UpdateMode _get_UnscaledTime();
      // Set static field: static public DynamicBone/UpdateMode UnscaledTime
      static void _set_UnscaledTime(GlobalNamespace::DynamicBone::UpdateMode value);
      // Creating value type constructor for type: UpdateMode
      UpdateMode(int value_ = {}) : value{value_} {}
    }; // DynamicBone/UpdateMode
    // Autogenerated type: DynamicBone/FreezeAxis
    struct FreezeAxis : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public DynamicBone/FreezeAxis None
      static constexpr const int None = 0;
      // Get static field: static public DynamicBone/FreezeAxis None
      static GlobalNamespace::DynamicBone::FreezeAxis _get_None();
      // Set static field: static public DynamicBone/FreezeAxis None
      static void _set_None(GlobalNamespace::DynamicBone::FreezeAxis value);
      // static field const value: static public DynamicBone/FreezeAxis X
      static constexpr const int X = 1;
      // Get static field: static public DynamicBone/FreezeAxis X
      static GlobalNamespace::DynamicBone::FreezeAxis _get_X();
      // Set static field: static public DynamicBone/FreezeAxis X
      static void _set_X(GlobalNamespace::DynamicBone::FreezeAxis value);
      // static field const value: static public DynamicBone/FreezeAxis Y
      static constexpr const int Y = 2;
      // Get static field: static public DynamicBone/FreezeAxis Y
      static GlobalNamespace::DynamicBone::FreezeAxis _get_Y();
      // Set static field: static public DynamicBone/FreezeAxis Y
      static void _set_Y(GlobalNamespace::DynamicBone::FreezeAxis value);
      // static field const value: static public DynamicBone/FreezeAxis Z
      static constexpr const int Z = 3;
      // Get static field: static public DynamicBone/FreezeAxis Z
      static GlobalNamespace::DynamicBone::FreezeAxis _get_Z();
      // Set static field: static public DynamicBone/FreezeAxis Z
      static void _set_Z(GlobalNamespace::DynamicBone::FreezeAxis value);
      // Creating value type constructor for type: FreezeAxis
      FreezeAxis(int value_ = {}) : value{value_} {}
    }; // DynamicBone/FreezeAxis
    // public UnityEngine.Transform m_Root
    // Offset: 0x18
    UnityEngine::Transform* m_Root;
    // public System.Single m_UpdateRate
    // Offset: 0x20
    float m_UpdateRate;
    // public DynamicBone/UpdateMode m_UpdateMode
    // Offset: 0x24
    GlobalNamespace::DynamicBone::UpdateMode m_UpdateMode;
    // public System.Single m_Damping
    // Offset: 0x28
    float m_Damping;
    // public UnityEngine.AnimationCurve m_DampingDistrib
    // Offset: 0x30
    UnityEngine::AnimationCurve* m_DampingDistrib;
    // public System.Single m_Elasticity
    // Offset: 0x38
    float m_Elasticity;
    // public UnityEngine.AnimationCurve m_ElasticityDistrib
    // Offset: 0x40
    UnityEngine::AnimationCurve* m_ElasticityDistrib;
    // public System.Single m_Stiffness
    // Offset: 0x48
    float m_Stiffness;
    // public UnityEngine.AnimationCurve m_StiffnessDistrib
    // Offset: 0x50
    UnityEngine::AnimationCurve* m_StiffnessDistrib;
    // public System.Single m_Inert
    // Offset: 0x58
    float m_Inert;
    // public UnityEngine.AnimationCurve m_InertDistrib
    // Offset: 0x60
    UnityEngine::AnimationCurve* m_InertDistrib;
    // public System.Single m_Radius
    // Offset: 0x68
    float m_Radius;
    // public UnityEngine.AnimationCurve m_RadiusDistrib
    // Offset: 0x70
    UnityEngine::AnimationCurve* m_RadiusDistrib;
    // public System.Single m_EndLength
    // Offset: 0x78
    float m_EndLength;
    // public UnityEngine.Vector3 m_EndOffset
    // Offset: 0x7C
    UnityEngine::Vector3 m_EndOffset;
    // public UnityEngine.Vector3 m_Gravity
    // Offset: 0x88
    UnityEngine::Vector3 m_Gravity;
    // public UnityEngine.Vector3 m_Force
    // Offset: 0x94
    UnityEngine::Vector3 m_Force;
    // public System.Collections.Generic.List`1<DynamicBoneColliderBase> m_Colliders
    // Offset: 0xA0
    System::Collections::Generic::List_1<GlobalNamespace::DynamicBoneColliderBase*>* m_Colliders;
    // public System.Collections.Generic.List`1<UnityEngine.Transform> m_Exclusions
    // Offset: 0xA8
    System::Collections::Generic::List_1<UnityEngine::Transform*>* m_Exclusions;
    // public DynamicBone/FreezeAxis m_FreezeAxis
    // Offset: 0xB0
    GlobalNamespace::DynamicBone::FreezeAxis m_FreezeAxis;
    // public System.Boolean m_DistantDisable
    // Offset: 0xB4
    bool m_DistantDisable;
    // public UnityEngine.Transform m_ReferenceObject
    // Offset: 0xB8
    UnityEngine::Transform* m_ReferenceObject;
    // public System.Single m_DistanceToObject
    // Offset: 0xC0
    float m_DistanceToObject;
    // private UnityEngine.Vector3 m_LocalGravity
    // Offset: 0xC4
    UnityEngine::Vector3 m_LocalGravity;
    // private UnityEngine.Vector3 m_ObjectMove
    // Offset: 0xD0
    UnityEngine::Vector3 m_ObjectMove;
    // private UnityEngine.Vector3 m_ObjectPrevPosition
    // Offset: 0xDC
    UnityEngine::Vector3 m_ObjectPrevPosition;
    // private System.Single m_BoneTotalLength
    // Offset: 0xE8
    float m_BoneTotalLength;
    // private System.Single m_ObjectScale
    // Offset: 0xEC
    float m_ObjectScale;
    // private System.Single m_Time
    // Offset: 0xF0
    float m_Time;
    // private System.Single m_Weight
    // Offset: 0xF4
    float m_Weight;
    // private System.Boolean m_DistantDisabled
    // Offset: 0xF8
    bool m_DistantDisabled;
    // private System.Collections.Generic.List`1<DynamicBone/Particle> m_Particles
    // Offset: 0x100
    System::Collections::Generic::List_1<GlobalNamespace::DynamicBone::Particle*>* m_Particles;
    // private System.Void Start()
    // Offset: 0x194F654
    void Start();
    // private System.Void FixedUpdate()
    // Offset: 0x194F7D4
    void FixedUpdate();
    // private System.Void Update()
    // Offset: 0x194F828
    void Update();
    // private System.Void LateUpdate()
    // Offset: 0x194F858
    void LateUpdate();
    // private System.Void PreUpdate()
    // Offset: 0x194F804
    void PreUpdate();
    // private System.Void CheckDistance()
    // Offset: 0x194F8B8
    void CheckDistance();
    // private System.Void OnEnable()
    // Offset: 0x194FF5C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x194FF60
    void OnDisable();
    // private System.Void OnValidate()
    // Offset: 0x194FF64
    void OnValidate();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x1950080
    void OnDrawGizmosSelected();
    // public System.Void SetWeight(System.Single w)
    // Offset: 0x1950224
    void SetWeight(float w);
    // public System.Single GetWeight()
    // Offset: 0x1950280
    float GetWeight();
    // private System.Void UpdateDynamicBones(System.Single t)
    // Offset: 0x194FABC
    void UpdateDynamicBones(float t);
    // private System.Void SetupParticles()
    // Offset: 0x194F658
    void SetupParticles();
    // private System.Void AppendParticles(UnityEngine.Transform b, System.Int32 parentIndex, System.Single boneLength)
    // Offset: 0x1951630
    void AppendParticles(UnityEngine::Transform* b, int parentIndex, float boneLength);
    // public System.Void UpdateParameters()
    // Offset: 0x1951CB8
    void UpdateParameters();
    // private System.Void InitTransforms()
    // Offset: 0x194FD00
    void InitTransforms();
    // private System.Void ResetParticlesPosition()
    // Offset: 0x194FE00
    void ResetParticlesPosition();
    // private System.Void UpdateParticles1()
    // Offset: 0x1950288
    void UpdateParticles1();
    // private System.Void UpdateParticles2()
    // Offset: 0x1950598
    void UpdateParticles2();
    // private System.Void SkipUpdateParticles()
    // Offset: 0x1950D24
    void SkipUpdateParticles();
    // static private UnityEngine.Vector3 MirrorVector(UnityEngine.Vector3 v, UnityEngine.Vector3 axis)
    // Offset: 0x1952078
    static UnityEngine::Vector3 MirrorVector(UnityEngine::Vector3 v, UnityEngine::Vector3 axis);
    // private System.Void ApplyParticlesToTransforms()
    // Offset: 0x1951354
    void ApplyParticlesToTransforms();
    // public System.Void .ctor()
    // Offset: 0x1952158
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DynamicBone* New_ctor();
  }; // DynamicBone
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBone*, "", "DynamicBone");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBone::UpdateMode, "", "DynamicBone/UpdateMode");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBone::FreezeAxis, "", "DynamicBone/FreezeAxis");
#pragma pack(pop)
