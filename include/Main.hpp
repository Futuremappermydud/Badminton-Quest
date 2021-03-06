#include "codegen/include/GlobalNamespace/BeatmapObjectManager.hpp"
#include "codegen/include/GlobalNamespace/NoteData.hpp"
#include "codegen/include/GlobalNamespace/NoteJump.hpp"
#include "codegen/include/GlobalNamespace/NoteType.hpp"
#include "codegen/include/GlobalNamespace/AudioTimeSyncController.hpp"
#include "codegen/include/GlobalNamespace/NoteMovement.hpp"
#include "codegen/include/GlobalNamespace/PlayerController.hpp"
#include "codegen/include/GlobalNamespace/NoteBasicCutInfo.hpp"
#include "codegen/include/GlobalNamespace/SaberType.hpp"
#include "codegen/include/GlobalNamespace/INoteController.hpp"
#include "codegen/include/GlobalNamespace/NoteCutInfo.hpp"
#include "codegen/include/GlobalNamespace/Saber.hpp"
#include "codegen/include/GlobalNamespace/NoteCutEffectSpawner.hpp"
#include "codegen/include/GlobalNamespace/FlyingObjectEffect.hpp"
#include "codegen/include/GlobalNamespace/MainMenuViewController.hpp"
#include "codegen/include/GlobalNamespace/SaberClashChecker.hpp"
#include "codegen/include/GlobalNamespace/SaberBurnMarkArea.hpp"
#include "codegen/include/GlobalNamespace/SaberBurnMarkSparkles.hpp"
#include "codegen/include/GlobalNamespace/GameEnergyCounter.hpp"

#include "codegen/include/Xft/XWeaponTrail.hpp"
#include "codegen/include/GlobalNamespace/XWeaponTrailRenderer.hpp"

#include "codegen/include/OnlineServices/LevelScoreUploader.hpp"
#include "codegen/include/OnlineServices/LevelScoreResultsData.hpp"

#include "codegen/include/UnityEngine/Vector3.hpp"
#include "codegen/include/UnityEngine/Mathf.hpp"
#include "codegen/include/UnityEngine/Transform.hpp"
#include "codegen/include/UnityEngine/Resources.hpp"
#include "codegen/include/UnityEngine/Space.hpp"
#include "codegen/include/UnityEngine/AudioSource.hpp"
#include "codegen/include/UnityEngine/GameObject.hpp"
#include "codegen/include/UnityEngine/Object.hpp"
#include "codegen/include/UnityEngine/MeshFilter.hpp"
#include "codegen/include/UnityEngine/UI/Button.hpp"

#include "codegen/include/TMPro/TextMeshProUGUI.hpp"

#include "codegen/include/Polyglot/LocalizedTextMeshProUGUI.hpp"

#include "codegen/include/HMUI/ViewController.hpp"
#include "codegen/include/HMUI/ViewController_ActivationType.hpp"

#include "../extern/bs-utils/shared/utils.hpp"

#include <unordered_set>  // specific types that you might want here

// Any beatsaber-hook specific includes here

#include "../extern/beatsaber-hook/shared/utils/utils.h"
#include "../extern/beatsaber-hook/shared/utils/logging.hpp"
// For displaying modloader information (ex: Modloader.getInfo().name)
#include "../extern/modloader/shared/modloader.hpp"
// For using il2cpp_utils:: methods
#include "../extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp" 
// For using il2cpp_functions:: methods
#include "../extern/beatsaber-hook/shared/utils/il2cpp-functions.hpp"
// For using commonly used types (such as Vector2, UnityEngine::Vector3, Color, Scene, etc.)
#include "../extern/beatsaber-hook/shared/utils/typedefs.h"
// For using configuration
#include "../extern/beatsaber-hook/shared/config/config-utils.hpp"

#include <stdlib.h>

static ModInfo modInfo;

static Configuration& getConfig() {
    static Configuration config(modInfo);
    return config;
}

static const Logger& getLogger() {
    static const Logger logger(modInfo);
    return logger;
}

static struct Config_t {
    bool parabola = false;
    float parabolaOffsetY = 1.8000000000f;
	bool noBlue = false;
	bool noRed = false;
	bool redToBlue = false;
	bool blueToRed = false;
    bool Vaccum = false;
    bool Centering = false;
    bool BoxingMode = false;
    bool SuperHot = true;
    bool Headbang = false;
    bool RotateController180 = false;
    bool HideSabers = false;
    bool HideSaberEffects = false;
} Config;

extern void SaveConfig();
extern bool LoadConfig();