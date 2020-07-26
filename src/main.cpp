#include "../include/Main.hpp"

using namespace GlobalNamespace;
using namespace OnlineServices;
using namespace UnityEngine;
using namespace il2cpp_utils;

MAKE_HOOK_OFFSETLESS(NoteJump_ManualUpdate, UnityEngine::Vector3, NoteJump* self) {
    NoteJump_ManualUpdate(self);
    if(Config.parabola)
    {
        float time = self->audioTimeSyncController->songTime - self->beatTime + self->jumpDuration * 0.5f;
        float amount = time / self->jumpDuration;
        float amountHalf = amount - 0.25f;
        self->localPosition.y = self->localPosition.y - 60.0f * (amountHalf * amountHalf - 0.0625f);

        Mathf math;

        self->localPosition.z = math.Lerp(self->startPos.z, self->endPos.z, amount);
        
        UnityEngine::Vector3 Result = self->worldRotation * self->localPosition;

        self->get_transform()->set_position(Result);

        return Result;
    }
}

MAKE_HOOK_OFFSETLESS(NoteMovement_Init, void, NoteMovement* self, float beatTime, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float flipYSide, NoteCutDirection cutDirection, float cutDirectionAngleOffset) {
    if(Config.parabola)
    {
        moveStartPos.z = moveStartPos.z * 2;
        moveEndPos.z = moveEndPos.z * 2;
        jumpEndPos.z = jumpEndPos.z * 2;
    }
    NoteMovement_Init(self, beatTime, worldRotation, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, flipYSide, cutDirection, cutDirectionAngleOffset);
}

MAKE_HOOK_OFFSETLESS(ScoreDisabler, void, LevelScoreUploader* self, LevelScoreResultsData* levelScoreResultsData) {
    if(Config.parabola || Config.blueToRed || Config.redToBlue || Config.noBlue || Config.noRed)
    {
        setenv("disable_ss_upload", "1", true);
        return;
    }
    else
    {
        setenv("disable_ss_upload", "0", true);
    }
    
    ScoreDisabler(self, levelScoreResultsData);
}

MAKE_HOOK_OFFSETLESS(NoteBasicCutInfo_GetBasicCutInfo, void, NoteBasicCutInfo* self, Transform noteTransform, NoteType noteType, NoteCutDirection cutDirection, SaberType saberType, float saberBladeSpeed, UnityEngine::Vector3 cutDirVec, bool* directionOK, bool* speedOK, bool* saberTypeOK, float* cutDirDeviation) {
    if(Config.Vaccum)
    {
        saberBladeSpeed = 3.0f;
    }
    NoteBasicCutInfo_GetBasicCutInfo(self, noteTransform, noteType, cutDirection, saberType, saberBladeSpeed, cutDirVec, directionOK, speedOK, saberTypeOK, cutDirDeviation);
    if(Config.Vaccum)
    {
        *directionOK = true;
        *speedOK = true;
    }
}

MAKE_HOOK_OFFSETLESS(BeatmapObjectManager_SpawnBasicNote, void, BeatmapObjectManager* self, NoteData* noteData, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float rotation, bool disappearingArrow, bool ghostNote, float cutDirectionAngleOffset) {
    if(Config.redToBlue)
        noteData->set_noteType(1);

    if(Config.blueToRed)
        noteData->set_noteType(0); 
    if(Config.parabola)
        noteData->set_cutDirection(8);

    NoteType Note;    
    if(Config.noBlue && noteData->get_noteType().value == 1) return;
    if(Config.noRed && noteData->get_noteType().value == 0) return;
    BeatmapObjectManager_SpawnBasicNote(self, noteData, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, rotation, disappearingArrow, ghostNote, cutDirectionAngleOffset);
}

void SaveConfig() {
    getConfig().config.RemoveAllMembers();
    getConfig().config.SetObject();
    rapidjson::Document::AllocatorType& allocator = getConfig().config.GetAllocator();
    getConfig().config.AddMember("Parabola", Config.parabola, allocator);
    getConfig().config.AddMember("No Blue", Config.noBlue, allocator);
    getConfig().config.AddMember("No Red", Config.noRed, allocator);
	getConfig().config.AddMember("Blue -> Red", Config.blueToRed, allocator);
    getConfig().config.AddMember("Red -> Blue", Config.redToBlue, allocator);
	getConfig().config.AddMember("Parabola Offset Y", Config.parabolaOffsetY, allocator);

    getConfig().Write();
}   

bool LoadConfig() {
    getConfig().Load();
    bool foundEverything = true;
    if (getConfig().config.HasMember("Parabola") && getConfig().config["Parabola"].IsBool()) {
        Config.parabola = getConfig().config["Parabola"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("No Blue") && getConfig().config["No Blue"].IsBool()) {
        Config.noBlue = getConfig().config["No Blue"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("No Red") && getConfig().config["No Red"].IsBool()) {
        Config.noRed = getConfig().config["No Red"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Blue -> Red") && getConfig().config["Blue -> Red"].IsBool()) {
        Config.blueToRed = getConfig().config["Blue -> Red"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Red -> Blue") && getConfig().config["Red -> Blue"].IsBool()) {
        Config.redToBlue = getConfig().config["Red -> Blue"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Parabola Offset Y") && getConfig().config["Parabola Offset Y"].IsFloat()) {
        Config.parabolaOffsetY = getConfig().config["Parabola Offset Y"].GetFloat();
    }
    else {
        foundEverything = false;
    }


    if (foundEverything) {
        return true;
    }
    return false;
}

extern "C" void setup(ModInfo& info) {
    // Set the ID and version of this mod
    info.id = "Badminton";
    info.version = "0.1.0";
    modInfo = info;

    getLogger().info("Modloader name: %s", Modloader::getInfo().name.c_str());

    getConfig().Load();
    getLogger().info("Completed setup!");
}

extern "C" void load() {
    if(!LoadConfig())
    {
        SaveConfig();
    }
    getLogger().debug("Hello from il2cpp_init!");
    getLogger().debug("Installing hooks...");

    il2cpp_functions::Init();

    INSTALL_HOOK_OFFSETLESS(BeatmapObjectManager_SpawnBasicNote, FindMethodUnsafe("", "BeatmapObjectManager", "SpawnBasicNote", 11));
    INSTALL_HOOK_OFFSETLESS(NoteJump_ManualUpdate, FindMethodUnsafe("", "NoteJump", "ManualUpdate", 0));
    INSTALL_HOOK_OFFSETLESS(NoteMovement_Init, FindMethodUnsafe("", "NoteMovement", "Init", 11));
    INSTALL_HOOK_OFFSETLESS(ScoreDisabler, FindMethodUnsafe("OnlineServices", "LevelScoreUploader", "SendLevelScoreResult", 1));

    getLogger().debug("Installed all hooks!");
}