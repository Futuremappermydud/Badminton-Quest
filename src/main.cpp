    #include "../include/Main.hpp"

    using namespace GlobalNamespace;
    using namespace OnlineServices;
    using namespace UnityEngine;
    using namespace il2cpp_utils;
    using namespace HMUI;
    using namespace UnityEngine::UI;
    using namespace bs_utils;

    static UnityEngine::Vector3 center = UnityEngine::Vector3{0, 0.9f, 0};

    AudioTimeSyncController* audioSync = nullptr;
    AudioSource* _audioSource = nullptr;
    UnityEngine::Vector3 _prevHeadPos = UnityEngine::Vector3{0, 0, 0};

    UnityEngine::Vector3 _prevLeftHandlePos = UnityEngine::Vector3{0, 0, 0};

    UnityEngine::Vector3 _prevRightHandlePos = UnityEngine::Vector3{0, 0, 0};

    UnityEngine::Vector3 TopBladePos;

    Transform* LeftSaberTransform;
    Transform* RightSaberTransform;

    SaberBurnMarkArea* _saberBurnMarkArea;
    SaberBurnMarkSparkles* _saberBurnMarkSparkles;
    SaberClashChecker* _saberClashChecker;
    GameEnergyCounter* _gameEnergyCounter;

    float amount = 0;

    void SetTimescale2(float timescale) {
        if (audioSync) {
            audioSync->timeScale = timescale;
            if (!audioSync->get_isAudioLoaded()) return;
            if (_audioSource)
                AudioSource::SetPitch(_audioSource, timescale);
        }
    }

    void SetTimescale(float timescale) {
        while (amount < 0)
        {
            float currentTimeScale = audioSync->timeScale;
            SetTimescale2(Mathf::Lerp(currentTimeScale, timescale, amount));
            amount += 0.1f;
        }
    }

    void SetSaberVisible(Saber* saber, bool active)
    {

        auto meshFilters = saber->get_transform()->GetComponentsInChildren<MeshFilter*>();
        for (int i = 0; meshFilters->Length(); ++i)
        {
            MeshFilter* meshFilter = meshFilters->values[i];
            meshFilter->get_gameObject()->SetActive(active);

            MeshFilter* filter = meshFilter->GetComponentInChildren<MeshFilter*>();
            if (filter != nullptr)
            {
                filter->get_gameObject()->SetActive(active);
            }
        }
    }

    void SetTrailWidth(float trailWidth)
    {
        //logger().info("%s:%i", __FILE__, __LINE__);
        auto trails = (Array<Xft::XWeaponTrail*>*)Resources::FindObjectsOfTypeAll(il2cpp_utils::GetSystemType(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Xft::XWeaponTrail*>::get()));
        //logger().info("%s:%i", __FILE__, __LINE__);
        for (int i = 0; trails->Length(); ++i)
        {
            //logger().info("%s:%i", __FILE__, __LINE__);
            Xft::XWeaponTrail* trail = trails->values[i];
            //logger().info("%s:%i", __FILE__, __LINE__);
            //trail->trailWidth = trailWidth;
            //logger().info("%s:%i", __FILE__, __LINE__);
        }
        //logger().info("%s:%i", __FILE__, __LINE__);
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

            self->localPosition.z = Mathf::Lerp(self->startPos.z, self->endPos.z, amount);
            
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
            
            amount = Mathf::Clamp01(amount * 2);

            if(amount >  0.7f)
            {
                UnityEngine::Vector3 endPos = self->playerController->get_rightSaber()->get_saberBladeTopPos();
                float t = (amount - 0.5f) * 2;
                t = t * t * t * t;
                self->localPosition.x = Mathf::Lerp(self->localPosition.x, endPos.x, t);
                self->localPosition.y = Mathf::Lerp(self->localPosition.y, endPos.y, t);

                UnityEngine::Vector3 Result = self->worldRotation * self->localPosition;

                self->get_transform()->set_position(Result);

                return Result;
            }
        }
        return NoteJump_ManualUpdate(self);
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

    MAKE_HOOK_OFFSETLESS(FlyingObjectEffect_Update, void, FlyingObjectEffect* self) {
        if(Config.Vaccum)
        {
            self->targetPos = TopBladePos;
            self->targetPos.y += 1.0f;
        }
        FlyingObjectEffect_Update(self);
    }

    MAKE_HOOK_OFFSETLESS(ScoreDisabler, void, LevelScoreUploader* self, LevelScoreResultsData* levelScoreResultsData) {
        if(Config.parabola || Config.blueToRed || Config.redToBlue || Config.noBlue || Config.noRed || Config.Vaccum || Config.Centering || Config.Headbang || Config.SuperHot || Config.BoxingMode || Config.RotateController180)
        {
            Submission::disable(modInfo);
        }
        else
            Submission::enable(modInfo);
        
        ScoreDisabler(self, levelScoreResultsData);
    }
    MAKE_HOOK_OFFSETLESS(PlayerController_Update, void, PlayerController* self) {  
        
        TopBladePos = self->get_rightSaber()->get_saberBladeTopPos();
        if(Config.Headbang)
        {
            //SetTrailWidth(0.0f);
            RightSaberTransform->set_rotation(self->get_headRot());
            LeftSaberTransform->set_rotation(self->get_headRot());

            RightSaberTransform->Rotate(UnityEngine::Vector3{270.0f, 0.0f, 0.0f});
            LeftSaberTransform->Rotate(UnityEngine::Vector3{270.0f, 0.0f, 0.0f});

            RightSaberTransform->set_position(self->get_headPos());
            LeftSaberTransform->set_position(self->get_headPos());

            RightSaberTransform->Translate(UnityEngine::Vector3{0.05f, 0.0f, -0.2f}, 1);
            LeftSaberTransform->Translate(UnityEngine::Vector3{0.05f, 0.0f, -0.2f}, 1);

            RightSaberTransform->set_localScale(UnityEngine::Vector3{2.0f, 2.0f, 0.5f});
            LeftSaberTransform->set_localScale(UnityEngine::Vector3{2.0f, 2.0f, 0.5f});
        }
        if(Config.RotateController180)
        {
            RightSaberTransform->Rotate(0, 180, 0);
            LeftSaberTransform->Rotate(0, 180, 0);
        }
        if(Config.BoxingMode)
        {
            //SetTrailWidth(0.05f);
            RightSaberTransform->Translate(UnityEngine::Vector3{0.00f, 0.0f, -0.23f}, 1);
            LeftSaberTransform->Translate(UnityEngine::Vector3{0.00f, 0.0f, -0.23f}, 1);

            RightSaberTransform->set_localScale(UnityEngine::Vector3{4.0f, 4.0f, 0.25f});
            LeftSaberTransform->set_localScale(UnityEngine::Vector3{4.0f, 4.0f, 0.25f});   
        }
        
        if(Config.SuperHot && audioSync != nullptr)
        {
            float num = 0.0f;
            num = Mathf::Max(num, UnityEngine::Vector3::Distance(self->get_leftSaber()->get_handlePos(), _prevLeftHandlePos));
            num = Mathf::Max(num, UnityEngine::Vector3::Distance(self->get_rightSaber()->get_handlePos(), _prevRightHandlePos));
            num = Mathf::Clamp01(num *50.0f);
            SetTimescale2(num);
            _prevHeadPos = self->get_headPos();
            _prevLeftHandlePos = self->get_leftSaber()->get_handlePos();
            _prevRightHandlePos = self->get_rightSaber()->get_handlePos();
        }

        self->get_leftSaber()->get_gameObject()->SetActive(Config.blueToRed || (!Config.noRed && !Config.redToBlue));
        self->get_rightSaber()->get_gameObject()->SetActive(Config.redToBlue || (!Config.noBlue && !Config.blueToRed));

        if(Config.Vaccum)
        {
            if (_gameEnergyCounter == nullptr)
                _gameEnergyCounter = (GameEnergyCounter*)Object::FindObjectOfType(il2cpp_utils::GetSystemType(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameEnergyCounter*>::get()));
            _gameEnergyCounter->hitBombEnergyDrain = 0.0f;
            self->get_leftSaber()->get_gameObject()->SetActive(false);
        }

        PlayerController_Update(self);
    }
    bool FirstGame = false;
    MAKE_HOOK_OFFSETLESS(PlayerController_Start, void, PlayerController* self) {
        PlayerController_Start(self);
        
        //if(!FirstGame) {FirstGame = true; return;}
        audioSync = (AudioTimeSyncController*)Object::FindObjectOfType(il2cpp_utils::GetSystemType(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AudioTimeSyncController*>::get()));
        _audioSource = CRASH_UNLESS(il2cpp_utils::GetFieldValue<AudioSource*>(audioSync, "_audioSource"));
        _saberClashChecker = (SaberClashChecker*)Object::FindObjectOfType(il2cpp_utils::GetSystemType(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SaberClashChecker*>::get()));
        _saberBurnMarkArea = (SaberBurnMarkArea*)Object::FindObjectOfType(il2cpp_utils::GetSystemType(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SaberBurnMarkArea*>::get()));
        _saberBurnMarkSparkles = (SaberBurnMarkSparkles*)Object::FindObjectOfType(il2cpp_utils::GetSystemType(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SaberBurnMarkSparkles*>::get()));

        LeftSaberTransform = self->get_leftSaber()->get_transform();
        RightSaberTransform = self->get_rightSaber()->get_transform();  

        
        if(Config.HideSaberEffects || Config.HideSabers)
        {
            //SetTrailWidth(0.0f);
            _saberClashChecker->set_enabled(false);
            if(_saberBurnMarkArea != nullptr)
            {
                _saberBurnMarkArea->set_enabled(false);
            }
            _saberBurnMarkSparkles->set_enabled(false);
        }
        
        
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

    MAKE_HOOK_OFFSETLESS(NoteBasicCutInfo_GetBasicCutInfo, void, UnityEngine::Transform* noteTransform, GlobalNamespace::NoteType noteType, GlobalNamespace::NoteCutDirection cutDirection, GlobalNamespace::SaberType saberType, float saberBladeSpeed, UnityEngine::Vector3 cutDirVec, bool& directionOK, bool& speedOK, bool& saberTypeOK, float& cutDirDeviation) {
        if(Config.BoxingMode || Config.Vaccum || Config.Headbang)
            saberBladeSpeed = 3.0f;
        NoteBasicCutInfo_GetBasicCutInfo(noteTransform, noteType, cutDirection, saberType, saberBladeSpeed, cutDirVec, directionOK, speedOK, saberTypeOK, cutDirDeviation);
        if(Config.Vaccum && (noteType.value != 3))
        {
            directionOK = true;
            saberTypeOK = true;
        }
    }

    void ReloadConfig()
    {
        if(!LoadConfig())
        {
            SaveConfig();
        }
    }

    Il2CppObject* PlayButton;

    Il2CppObject* ReloadButton;
    Il2CppObject* ReloadButtonTMP;

    void Destroy(Il2CppObject* obj)
    {
        RunMethod("UnityEngine", "Object", "Destroy", obj);
    }

    MAKE_HOOK_OFFSETLESS(MainMenuViewController_DidActivate, void, Il2CppObject* self, bool firstActivation, int activationType) {
        MainMenuViewController_DidActivate(self, firstActivation, activationType);
        if(!LoadConfig())
        {
            SaveConfig();
        }
        return; //temp disable
        if(ReloadButton != nullptr)
        {
            Destroy(ReloadButton);
        }
        UnityEngine::Vector3 Pos = {0, 0, 2.6f};
        UnityEngine::Vector3 Scale = {1, 1, 1};
        PlayButton = *GetFieldValue(self, "_settingsButton");	
        ReloadButton = *RunMethod("UnityEngine", "Object", "Instantiate", PlayButton);
        auto PlayButtonTransform = CRASH_UNLESS(il2cpp_utils::RunMethod(PlayButton, "get_transform"));
        auto parent = CRASH_UNLESS(il2cpp_utils::RunMethod(PlayButtonTransform, "get_parent"));
        Il2CppObject* OnClick = CRASH_UNLESS(il2cpp_utils::GetPropertyValue(ReloadButton, "onClick"));
        std::string ReloadButtonText = "Reload \n<size=70%>Nalululuna Modifier</size>\n Config";
        auto ReloadButtonTransform = CRASH_UNLESS(il2cpp_utils::RunMethod(ReloadButton, "get_transform"));
        RunMethod(ReloadButtonTransform, "SetParent", parent);
        RunMethod(ReloadButtonTransform, "set_position", Pos);
        RunMethod(ReloadButtonTransform, "set_localScale", Scale);
        Il2CppObject* ReloadButtonObj2 = *RunMethod(ReloadButton, "get_gameObject");
        ReloadButtonTMP = *RunMethod(ReloadButtonObj2, "GetComponentInChildren", GetSystemType("TMPro", "TextMeshProUGUI"));
        auto ReloadButtonTMPLocalizer = *RunMethod(ReloadButtonObj2, "GetComponentInChildren", GetSystemType("Polyglot", "LocalizedTextMeshProUGUI"));
        if (ReloadButtonTMPLocalizer != nullptr)
        {
            Destroy(ReloadButtonTMPLocalizer);
        }
        RunMethod(ReloadButtonTMP, "set_text", createcsstr(ReloadButtonText));
        auto action = MakeAction(il2cpp_functions::class_get_type(il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")), (Il2CppObject*)nullptr, ReloadConfig);
        RunMethod(OnClick, "AddListener", action);
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
        getConfig().config.AddMember("Head Bang", Config.Headbang, allocator);
        getConfig().config.AddMember("Super Hot", Config.SuperHot, allocator);
        getConfig().config.AddMember("Rotate Controllers 180", Config.RotateController180, allocator);
        getConfig().config.AddMember("Hide Sabers", Config.HideSabers, allocator);
        getConfig().config.AddMember("Hide Saber Effects", Config.HideSaberEffects, allocator);

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
        if (getConfig().config.HasMember("Rotate Controllers 180") && getConfig().config["Rotate Controllers 180"].IsBool()) {
            Config.RotateController180 = getConfig().config["Rotate Controllers 180"].GetBool();
        }
        else {
            foundEverything = false;
        }
        if (getConfig().config.HasMember("Hide Sabers") && getConfig().config["Hide Sabers"].IsBool()) {
            Config.HideSabers = getConfig().config["Hide Sabers"].GetBool();
        }
        else {
            foundEverything = false;
        }
        if (getConfig().config.HasMember("Hide Saber Effects") && getConfig().config["Hide Saber Effects"].IsBool()) {
            Config.HideSaberEffects = getConfig().config["Hide Saber Effects"].GetBool();
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
        info.id = "Naluluna Modifier";
        info.version = "0.1.4";
        modInfo = info;

        getConfig().Load();
    }

    extern "C" void load() {
        if(!LoadConfig())
        {
            SaveConfig();
        }

        il2cpp_functions::Init();

        INSTALL_HOOK_OFFSETLESS(NoteJump_ManualUpdate, FindMethod("", "NoteJump", "ManualUpdate"));
        INSTALL_HOOK_OFFSETLESS(PlayerController_Update, FindMethod("", "PlayerController", "Update"));
        INSTALL_HOOK_OFFSETLESS(PlayerController_Start, FindMethod("", "PlayerController", "Start"));
        INSTALL_HOOK_OFFSETLESS(NoteMovement_Init, FindMethodUnsafe("", "NoteMovement", "Init", 11));
        INSTALL_HOOK_OFFSETLESS(ScoreDisabler, FindMethodUnsafe("OnlineServices", "LevelScoreUploader", "SendLevelScoreResult", 1));
        INSTALL_HOOK_OFFSETLESS(BeatmapObjectManager_SpawnBasicNote, FindMethodUnsafe("", "BeatmapObjectManager", "SpawnBasicNote", 11));
        INSTALL_HOOK_OFFSETLESS(NoteCutEffectSpawner_SpawnNoteCutEffect, FindMethodUnsafe("", "NoteCutEffectSpawner", "SpawnNoteCutEffect", 3));
        INSTALL_HOOK_OFFSETLESS(NoteCutEffectSpawner_SpawnBombCutEffect, FindMethodUnsafe("", "NoteCutEffectSpawner", "SpawnBombCutEffect", 3));
        INSTALL_HOOK_OFFSETLESS(NoteBasicCutInfo_GetBasicCutInfo, FindMethodUnsafe("", "NoteBasicCutInfo", "GetBasicCutInfo", 10));
        INSTALL_HOOK_OFFSETLESS(FlyingObjectEffect_Update, FindMethod("", "FlyingObjectEffect", "Update"));
        INSTALL_HOOK_OFFSETLESS(MainMenuViewController_DidActivate, FindMethodUnsafe("", "MainMenuViewController", "DidActivate", 2));
        getLogger().debug("Installed all hooks!");
    }