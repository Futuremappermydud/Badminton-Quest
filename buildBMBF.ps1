# Builds a .zip file for loading with BMBF
$NDKPath = Get-Content $PSScriptRoot/ndkpath.txt

$buildScript = "$NDKPath/build/ndk-build"
if (-not ($PSVersionTable.PSEdition -eq "Core")) {
    $buildScript += ".cmd"
}

& $buildScript NDK_PROJECT_PATH=$PSScriptRoot APP_BUILD_SCRIPT=$PSScriptRoot/Android.mk NDK_APPLICATION_MK=$PSScriptRoot/Application.mk
Compress-Archive -Path "./libs/arm64-v8a/libNalululuna_Modifier.so","./bmbfmod.json","./extern/libbeatsaber-hook_0_4_7.so","./extern/libcodegen_0_2_1.so","./extern/libbs-utils_0_3_0.so" -DestinationPath "./Nalululuna_Modifier_v0.1.3.zip" -Update
