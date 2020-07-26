#include "../include/Main.hpp"

using namespace GlobalNamespace;
using namespace OnlineServices;
using namespace UnityEngine;
using namespace il2cpp_utils;

UnityEngine::Vector3 TopBladePos;

Mathf math;

static UnityEngine::Vector3 center = UnityEngine::Vector3{0, 0.9f, 0};

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
            UnityEngine::Vector3 endPos = TopBladePos;
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
    }
    NoteMovement_Init(self, beatTime, worldRotation, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, flipYSide, cutDirection, cutDirectionAngleOffset);
}

MAKE_HOOK_OFFSETLESS(ScoreDisabler, void, LevelScoreUploader* self, LevelScoreResultsData* levelScoreResultsData) {
    if(Config.parabola || Config.blueToRed || Config.redToBlue || Config.noBlue || Config.noRed || Config.Vaccum || Config.Centering)
    {
        setenv("disable_ss_upload", "1", true);
        return;
    }
    else
        setenv("disable_ss_upload", "0", true);
    
    ScoreDisabler(self, levelScoreResultsData);
}

MAKE_HOOK_OFFSETLESS(PlayerController_Update, void, PlayerController* self) {
    PlayerController_Update(self);
    TopBladePos = self->get_rightSaber()->get_saberBladeTopPos();
}

MAKE_HOOK_OFFSETLESS(NoteCutEffectSpawner_SpawnNoteCutEffect, void, PlayerController* self, UnityEngine::Vector3 pos, INoteController noteController, NoteCutInfo noteCutInfo) {
    if(!Config.Vaccum) return;

    NoteCutEffectSpawner_SpawnNoteCutEffect(self, pos, noteController, noteCutInfo);
}

MAKE_HOOK_OFFSETLESS(NoteCutEffectSpawner_SpawnBombCutEffect, void, PlayerController* self, UnityEngine::Vector3 pos, INoteController noteController, NoteCutInfo noteCutInfo) {
    if(!Config.Vaccum) return;

    NoteCutEffectSpawner_SpawnBombCutEffect(self, pos, noteController, noteCutInfo);
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

    INSTALL_HOOK_OFFSETLESS(NoteJump_ManualUpdate, FindMethodUnsafe("", "NoteJump", "ManualUpdate", 0));
    INSTALL_HOOK_OFFSETLESS(NoteMovement_Init, FindMethodUnsafe("", "NoteMovement", "Init", 11));
    INSTALL_HOOK_OFFSETLESS(ScoreDisabler, FindMethodUnsafe("OnlineServices", "LevelScoreUploader", "SendLevelScoreResult", 1));
    INSTALL_HOOK_OFFSETLESS(PlayerController_Update, FindMethodUnsafe("", "PlayerController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(NoteCutEffectSpawner_SpawnNoteCutEffect, FindMethodUnsafe("", "NoteCutEffectSpawner", "SpawnNoteCutEffect", 3));
    INSTALL_HOOK_OFFSETLESS(NoteCutEffectSpawner_SpawnBombCutEffect, FindMethodUnsafe("", "NoteCutEffectSpawner", "SpawnBombCutEffect", 3));

    getLogger().debug("Installed all hooks!");
}