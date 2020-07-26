#include "../include/Main.hpp"

using namespace GlobalNamespace;
using namespace OnlineServices;
using namespace UnityEngine;
using namespace il2cpp_utils;

Mathf math;

static UnityEngine::Vector3 center = UnityEngine::Vector3{0, 0.9f, 0};

AudioTimeSyncController* audioSync = nullptr;
UnityEngine::Vector3 _prevHeadPos = UnityEngine::Vector3{0, 0, 0};

UnityEngine::Vector3 _prevLeftHandlePos = UnityEngine::Vector3{0, 0, 0};

UnityEngine::Vector3 _prevRightHandlePos = UnityEngine::Vector3{0, 0, 0};

void SetTimeScale(float timeScale)
{
    audioSync->timeScale = timeScale;
    audioSync->audioSource->set_pitch(timeScale);
}

MAKE_HOOK_OFFSETLESS(NoteJump_ManualUpdate, UnityEngine::Vector3, NoteJump* self) {
    NoteJump_ManualUpdate(self);
    if(audioSync != nullptr)
    {
        audioSync = self->audioTimeSyncController;
    }
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

    if (Config.Centering)
    {
        self->localPosition.x = self->localPosition.x / 2.0f + center.x / 2.0f;
        self->localPosition.y = self->localPosition.y / 2.0f + center.y / 2.0f;
        self->localPosition.y = self->localPosition.y + 0.3f;
        
        UnityEngine::Vector3 Result = self->worldRotation * self->localPosition;

        self->get_transform()->set_position(Result);

        return Result;
    }

    if(Config.Vaccum)
    {
        float time = self->audioTimeSyncController->songTime - self->beatTime + self->jumpDuration * 0.5f;
        float amount = time / self->jumpDuration;
        
        amount = math.Clamp01(amount * 2);

        if(amount >  0.7f)
        {
            UnityEngine::Vector3 endPos = self->playerController->get_rightSaber()->get_saberBladeTopPos();
            float t = (amount - 0.5f) * 2;
            t = t * t * t * t;
            self->localPosition.x = math.Lerp(self->localPosition.x, endPos.x, t);
            self->localPosition.y = math.Lerp(self->localPosition.y, endPos.y, t);

            UnityEngine::Vector3 Result = self->worldRotation * self->localPosition;

            self->get_transform()->set_position(Result);

            return Result;
        }
    }
}

MAKE_HOOK_OFFSETLESS(NoteMovement_Init, void, NoteMovement* self, float beatTime, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float flipYSide, NoteCutDirection cutDirection, float cutDirectionAngleOffset) {
    if(Config.parabola)
    {
        moveStartPos.z = moveStartPos.z * 2;
        moveEndPos.z = moveEndPos.z * 2;
        jumpEndPos.z = jumpEndPos.z * 2;
        float num = Config.parabolaOffsetY;
        bool boxing = Config.BoxingMode;
        if (boxing)
	        num -= 0.3f;

        moveStartPos.y += num;
	    moveEndPos.y += num;
	    jumpEndPos.y += num;
    }
    NoteMovement_Init(self, beatTime, worldRotation, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, flipYSide, cutDirection, cutDirectionAngleOffset);
}

MAKE_HOOK_OFFSETLESS(ScoreDisabler, void, LevelScoreUploader* self, LevelScoreResultsData* levelScoreResultsData) {
    if(Config.parabola || Config.blueToRed || Config.redToBlue || Config.noBlue || Config.noRed || Config.Vaccum || Config.Centering || Config.Headbang || Config.SuperHot || Config.BoxingMode)
    {
        setenv("disable_ss_upload", "1", true);
        return;
    }
    else
        setenv("disable_ss_upload", "0", true);
    
    ScoreDisabler(self, levelScoreResultsData);
}

MAKE_HOOK_OFFSETLESS(PlayerController_Update, void, PlayerController* self) {
    //if(audioSync != nullptr)
    //{
    //    auto audioSyncs = Resources::FindObjectsOfTypeAll<AudioTimeSyncController>();
    //    audioSync = audioSyncs->values;
    //}
    
    if(Config.Headbang)
    {
        self->get_rightSaber()->get_transform()->set_rotation(self->get_headRot());
        self->get_leftSaber()->get_transform()->set_rotation(self->get_headRot());

        self->get_rightSaber()->get_transform()->Rotate(UnityEngine::Vector3{270.0f, 0.0f, 0.0f});
        self->get_leftSaber()->get_transform()->Rotate(UnityEngine::Vector3{270.0f, 0.0f, 0.0f});

        self->get_rightSaber()->get_transform()->set_position(self->get_headPos());
        self->get_leftSaber()->get_transform()->set_position(self->get_headPos());

        self->get_rightSaber()->get_transform()->Translate(UnityEngine::Vector3{0.05f, 0.0f, -0.2f}, 1);
        self->get_leftSaber()->get_transform()->Translate(UnityEngine::Vector3{0.05f, 0.0f, -0.2f}, 1);

        self->get_rightSaber()->get_transform()->set_localScale(UnityEngine::Vector3{2.0f, 2.0f, 0.5f});
        self->get_leftSaber()->get_transform()->set_localScale(UnityEngine::Vector3{2.0f, 2.0f, 0.5f});
    }

    /*if(Config.BoxingMode)
    {
        self->get_rightSaber()->get_transform()->Translate(UnityEngine::Vector3{0.00f, 0.0f, -0.23f}, 1);
        self->get_leftSaber()->get_transform()->Translate(UnityEngine::Vector3{0.00f, 0.0f, -0.23f}, 1);

        self->get_rightSaber()->get_transform()->set_localScale(UnityEngine::Vector3{4.0f, 4.0f, 0.25f});
        self->get_leftSaber()->get_transform()->set_localScale(UnityEngine::Vector3{4.0f, 4.0f, 0.25f});   
    }

    if(Config.SuperHot && audioSync != nullptr)
    {
        float num = 0.0f;
        num = math.Max(num, UnityEngine::Vector3::Distance(self->get_leftSaber()->get_handlePos(), _prevLeftHandlePos));
        num = math.Max(num, UnityEngine::Vector3::Distance(self->get_rightSaber()->get_handlePos(), _prevRightHandlePos));
        num = math.Clamp01(num *50.0f);
        SetTimeScale(num);
        _prevHeadPos = self->get_headPos();
        _prevLeftHandlePos = self->get_leftSaber()->get_handlePos();
        _prevRightHandlePos = self->get_rightSaber()->get_handlePos();
    }*/

    PlayerController_Update(self);
}

MAKE_HOOK_OFFSETLESS(NoteCutEffectSpawner_SpawnNoteCutEffect, void, NoteCutEffectSpawner* self, UnityEngine::Vector3 pos, INoteController* noteController, NoteCutInfo* noteCutInfo) {
    if(!Config.Vaccum) return;

    NoteCutEffectSpawner_SpawnNoteCutEffect(self, pos, noteController, noteCutInfo);
}

MAKE_HOOK_OFFSETLESS(NoteCutEffectSpawner_SpawnBombCutEffect, void, NoteCutEffectSpawner* self, UnityEngine::Vector3 pos, INoteController* noteController, NoteCutInfo* noteCutInfo) {
    if(!Config.Vaccum) return;

    NoteCutEffectSpawner_SpawnBombCutEffect(self, pos, noteController, noteCutInfo);
}

MAKE_HOOK_OFFSETLESS(BeatmapObjectManager_SpawnBasicNote, void, BeatmapObjectManager* self, NoteData* noteData, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float rotation, bool disappearingArrow, bool ghostNote, float cutDirectionAngleOffset) {
    if(Config.noRed && noteData->get_noteType().value == 0) return;
    if(Config.noBlue && noteData->get_noteType().value == 1) return;

    if(Config.blueToRed)
        noteData->set_noteType(0);
    if(Config.redToBlue)
        noteData->set_noteType(1);
    
    BeatmapObjectManager_SpawnBasicNote(self, noteData, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, rotation, disappearingArrow, ghostNote, cutDirectionAngleOffset);
}

MAKE_HOOK_OFFSETLESS(NoteBasicCutInfo_GetBasicCutInfo, void, NoteBasicCutInfo* self, UnityEngine::Transform* noteTransform, GlobalNamespace::NoteType noteType, GlobalNamespace::NoteCutDirection cutDirection, GlobalNamespace::SaberType saberType, float saberBladeSpeed, UnityEngine::Vector3 cutDirVec, bool& directionOK, bool& speedOK, bool& saberTypeOK, float& cutDirDeviation) {
    if(Config.BoxingMode || Config.Vaccum)
        saberBladeSpeed = 3.0f;

    //NoteBasicCutInfo_GetBasicCutInfo(self, noteTransform, noteType, cutDirection, saberType, saberBladeSpeed, cutDirVec, directionOK, speedOK, saberTypeOK, cutDirDeviation);
    if(Config.Vaccum && (noteType.value != 3))
    {
        directionOK = true;
        saberTypeOK = true;
    }
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
    getConfig().config.AddMember("Vaccum", Config.Vaccum, allocator);
    getConfig().config.AddMember("Center Notes", Config.Centering, allocator);
    getConfig().config.AddMember("Boxing Mode", Config.BoxingMode, allocator);
    getConfig().config.AddMember("Super Hot", Config.SuperHot, allocator);
    getConfig().config.AddMember("Head Bang", Config.Headbang, allocator);

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
    if (getConfig().config.HasMember("Vaccum") && getConfig().config["Vaccum"].IsBool()) {
        Config.Vaccum = getConfig().config["Vaccum"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Center Notes") && getConfig().config["Center Notes"].IsBool()) {
        Config.Centering = getConfig().config["Center Notes"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Boxing Mode") && getConfig().config["Boxing Mode"].IsBool()) {
        Config.BoxingMode = getConfig().config["Boxing Mode"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Head Bang") && getConfig().config["Head Bang"].IsBool()) {
        Config.Headbang = getConfig().config["Head Bang"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Super Hot") && getConfig().config["Super Hot"].IsBool()) {
        Config.SuperHot = getConfig().config["Super Hot"].GetBool();
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
    info.version = "0.1.2";
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

    INSTALL_HOOK_OFFSETLESS(NoteJump_ManualUpdate, FindMethodUnsafe("", "NoteJump", "ManualUpdate", 0));
    INSTALL_HOOK_OFFSETLESS(PlayerController_Update, FindMethodUnsafe("", "PlayerController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(NoteMovement_Init, FindMethodUnsafe("", "NoteMovement", "Init", 11));
    INSTALL_HOOK_OFFSETLESS(ScoreDisabler, FindMethodUnsafe("OnlineServices", "LevelScoreUploader", "SendLevelScoreResult", 1));
    INSTALL_HOOK_OFFSETLESS(BeatmapObjectManager_SpawnBasicNote, FindMethodUnsafe("", "BeatmapObjectManager", "SpawnBasicNote", 11));
    INSTALL_HOOK_OFFSETLESS(NoteCutEffectSpawner_SpawnNoteCutEffect, FindMethodUnsafe("", "NoteCutEffectSpawner", "SpawnNoteCutEffect", 3));
    INSTALL_HOOK_OFFSETLESS(NoteCutEffectSpawner_SpawnBombCutEffect, FindMethodUnsafe("", "NoteCutEffectSpawner", "SpawnBombCutEffect", 3));
    //INSTALL_HOOK_OFFSETLESS(NoteBasicCutInfo_GetBasicCutInfo, FindMethodUnsafe("", "NoteBasicCutInfo", "GetBasicCutInfo", 10));
    getLogger().debug("Installed all hooks!");
}