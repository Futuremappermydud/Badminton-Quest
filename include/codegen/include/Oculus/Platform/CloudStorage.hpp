// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:08 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: CloudStorageUpdateResponse
  class CloudStorageUpdateResponse;
  // Forward declaring type: CloudStorageData
  class CloudStorageData;
  // Forward declaring type: CloudStorageMetadataList
  class CloudStorageMetadataList;
  // Forward declaring type: CloudStorageConflictMetadata
  class CloudStorageConflictMetadata;
  // Forward declaring type: CloudStorageMetadata
  class CloudStorageMetadata;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.CloudStorage
  class CloudStorage : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> Delete(System.String bucket, System.String key)
    // Offset: 0xE814B8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* Delete(::Il2CppString* bucket, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageData> Load(System.String bucket, System.String key)
    // Offset: 0xE815DC
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageData*>* Load(::Il2CppString* bucket, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageMetadataList> LoadBucketMetadata(System.String bucket)
    // Offset: 0xE81700
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadataList*>* LoadBucketMetadata(::Il2CppString* bucket);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageConflictMetadata> LoadConflictMetadata(System.String bucket, System.String key)
    // Offset: 0xE8181C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageConflictMetadata*>* LoadConflictMetadata(::Il2CppString* bucket, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageData> LoadHandle(System.String handle)
    // Offset: 0xE81940
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageData*>* LoadHandle(::Il2CppString* handle);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageMetadata> LoadMetadata(System.String bucket, System.String key)
    // Offset: 0xE81A5C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadata*>* LoadMetadata(::Il2CppString* bucket, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> ResolveKeepLocal(System.String bucket, System.String key, System.String remoteHandle)
    // Offset: 0xE81B80
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* ResolveKeepLocal(::Il2CppString* bucket, ::Il2CppString* key, ::Il2CppString* remoteHandle);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> ResolveKeepRemote(System.String bucket, System.String key, System.String remoteHandle)
    // Offset: 0xE81CB4
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* ResolveKeepRemote(::Il2CppString* bucket, ::Il2CppString* key, ::Il2CppString* remoteHandle);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> Save(System.String bucket, System.String key, System.Byte[] data, System.Int64 counter, System.String extraData)
    // Offset: 0xE81DE8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* Save(::Il2CppString* bucket, ::Il2CppString* key, ::Array<uint8_t>* data, int64_t counter, ::Il2CppString* extraData);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageMetadataList> GetNextCloudStorageMetadataListPage(Oculus.Platform.Models.CloudStorageMetadataList list)
    // Offset: 0xE81F48
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadataList*>* GetNextCloudStorageMetadataListPage(Oculus::Platform::Models::CloudStorageMetadataList* list);
  }; // Oculus.Platform.CloudStorage
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CloudStorage*, "Oculus.Platform", "CloudStorage");
#pragma pack(pop)
