// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:55 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Random
#include "System/Random.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.Randomizer
  class Randomizer : public System::Random {
    public:
    // static field const value: static public System.String DefaultStringChars
    static constexpr const char* DefaultStringChars = "abcdefghijkmnopqrstuvwxyzABCDEFGHJKLMNOPQRSTUVWXYZ0123456789_";
    // Get static field: static public System.String DefaultStringChars
    static ::Il2CppString* _get_DefaultStringChars();
    // Set static field: static public System.String DefaultStringChars
    static void _set_DefaultStringChars(::Il2CppString* value);
    // static field const value: static private System.Int32 DefaultStringLength
    static constexpr const int DefaultStringLength = 25;
    // Get static field: static private System.Int32 DefaultStringLength
    static int _get_DefaultStringLength();
    // Set static field: static private System.Int32 DefaultStringLength
    static void _set_DefaultStringLength(int value);
    // Get static field: static private System.Random _seedGenerator
    static System::Random* _get__seedGenerator();
    // Set static field: static private System.Random _seedGenerator
    static void _set__seedGenerator(System::Random* value);
    // Get static field: static private System.Int32 _initialSeed
    static int _get__initialSeed();
    // Set static field: static private System.Int32 _initialSeed
    static void _set__initialSeed(int value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Reflection.MemberInfo,NUnit.Framework.Internal.Randomizer> Randomizers
    static System::Collections::Generic::Dictionary_2<System::Reflection::MemberInfo*, NUnit::Framework::Internal::Randomizer*>* _get_Randomizers();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Reflection.MemberInfo,NUnit.Framework.Internal.Randomizer> Randomizers
    static void _set_Randomizers(System::Collections::Generic::Dictionary_2<System::Reflection::MemberInfo*, NUnit::Framework::Internal::Randomizer*>* value);
    // static private System.Void .cctor()
    // Offset: 0x18D6A08
    static void _cctor();
    // static public System.Void set_InitialSeed(System.Int32 value)
    // Offset: 0x18D6AB8
    static void set_InitialSeed(int value);
    // static public NUnit.Framework.Internal.Randomizer CreateRandomizer()
    // Offset: 0x18D6B64
    static NUnit::Framework::Internal::Randomizer* CreateRandomizer();
    // public System.Void .ctor(System.Int32 seed)
    // Offset: 0x18D6C04
    // Implemented from: System.Random
    // Base method: System.Void Random::.ctor(System.Int32 seed)
    static Randomizer* New_ctor(int seed);
  }; // NUnit.Framework.Internal.Randomizer
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Randomizer*, "NUnit.Framework.Internal", "Randomizer");
#pragma pack(pop)
