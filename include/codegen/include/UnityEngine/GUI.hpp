// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUISkin
  class GUISkin;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: GUIContent
  class GUIContent;
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: ScaleMode
  struct ScaleMode;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: FocusType
  struct FocusType;
  // Forward declaring type: TextEditor
  class TextEditor;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Forward declaring type: GenericStack
  class GenericStack;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.GUI
  class GUI : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::GUI::WindowFunction
    class WindowFunction;
    // Get static field: static private System.Int32 s_ScrollControlId
    static int _get_s_ScrollControlId();
    // Set static field: static private System.Int32 s_ScrollControlId
    static void _set_s_ScrollControlId(int value);
    // Get static field: static private System.Int32 s_HotTextField
    static int _get_s_HotTextField();
    // Set static field: static private System.Int32 s_HotTextField
    static void _set_s_HotTextField(int value);
    // Get static field: static private readonly System.Int32 s_BoxHash
    static int _get_s_BoxHash();
    // Set static field: static private readonly System.Int32 s_BoxHash
    static void _set_s_BoxHash(int value);
    // Get static field: static private readonly System.Int32 s_ButonHash
    static int _get_s_ButonHash();
    // Set static field: static private readonly System.Int32 s_ButonHash
    static void _set_s_ButonHash(int value);
    // Get static field: static private readonly System.Int32 s_RepeatButtonHash
    static int _get_s_RepeatButtonHash();
    // Set static field: static private readonly System.Int32 s_RepeatButtonHash
    static void _set_s_RepeatButtonHash(int value);
    // Get static field: static private readonly System.Int32 s_ToggleHash
    static int _get_s_ToggleHash();
    // Set static field: static private readonly System.Int32 s_ToggleHash
    static void _set_s_ToggleHash(int value);
    // Get static field: static private readonly System.Int32 s_ButtonGridHash
    static int _get_s_ButtonGridHash();
    // Set static field: static private readonly System.Int32 s_ButtonGridHash
    static void _set_s_ButtonGridHash(int value);
    // Get static field: static private readonly System.Int32 s_SliderHash
    static int _get_s_SliderHash();
    // Set static field: static private readonly System.Int32 s_SliderHash
    static void _set_s_SliderHash(int value);
    // Get static field: static private readonly System.Int32 s_BeginGroupHash
    static int _get_s_BeginGroupHash();
    // Set static field: static private readonly System.Int32 s_BeginGroupHash
    static void _set_s_BeginGroupHash(int value);
    // Get static field: static private readonly System.Int32 s_ScrollviewHash
    static int _get_s_ScrollviewHash();
    // Set static field: static private readonly System.Int32 s_ScrollviewHash
    static void _set_s_ScrollviewHash(int value);
    // Get static field: static private System.Int32 <scrollTroughSide>k__BackingField
    static int _get_$scrollTroughSide$k__BackingField();
    // Set static field: static private System.Int32 <scrollTroughSide>k__BackingField
    static void _set_$scrollTroughSide$k__BackingField(int value);
    // Get static field: static private System.DateTime <nextScrollStepTime>k__BackingField
    static System::DateTime _get_$nextScrollStepTime$k__BackingField();
    // Set static field: static private System.DateTime <nextScrollStepTime>k__BackingField
    static void _set_$nextScrollStepTime$k__BackingField(System::DateTime value);
    // Get static field: static private UnityEngine.GUISkin s_Skin
    static UnityEngine::GUISkin* _get_s_Skin();
    // Set static field: static private UnityEngine.GUISkin s_Skin
    static void _set_s_Skin(UnityEngine::GUISkin* value);
    // Get static field: static private UnityEngineInternal.GenericStack <scrollViewStates>k__BackingField
    static UnityEngineInternal::GenericStack* _get_$scrollViewStates$k__BackingField();
    // Set static field: static private UnityEngineInternal.GenericStack <scrollViewStates>k__BackingField
    static void _set_$scrollViewStates$k__BackingField(UnityEngineInternal::GenericStack* value);
    // static public UnityEngine.Color get_color()
    // Offset: 0x1249A64
    static UnityEngine::Color get_color();
    // static public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1249B3C
    static void set_color(UnityEngine::Color value);
    // static public System.Void set_changed(System.Boolean value)
    // Offset: 0x1249C10
    static void set_changed(bool value);
    // static System.Boolean get_usePageScrollbars()
    // Offset: 0x1249C50
    static bool get_usePageScrollbars();
    // static UnityEngine.Material get_blendMaterial()
    // Offset: 0x1249C84
    static UnityEngine::Material* get_blendMaterial();
    // static UnityEngine.Material get_blitMaterial()
    // Offset: 0x1249CB8
    static UnityEngine::Material* get_blitMaterial();
    // static UnityEngine.Material get_roundedRectMaterial()
    // Offset: 0x1249CEC
    static UnityEngine::Material* get_roundedRectMaterial();
    // static UnityEngine.Material get_roundedRectWithColorPerBorderMaterial()
    // Offset: 0x1249D20
    static UnityEngine::Material* get_roundedRectWithColorPerBorderMaterial();
    // static System.Void GrabMouseControl(System.Int32 id)
    // Offset: 0x1249D54
    static void GrabMouseControl(int id);
    // static System.Boolean HasMouseControl(System.Int32 id)
    // Offset: 0x1249D94
    static bool HasMouseControl(int id);
    // static System.Void ReleaseMouseControl()
    // Offset: 0x1249DD4
    static void ReleaseMouseControl();
    // static System.Void InternalRepaintEditorWindow()
    // Offset: 0x1249E08
    static void InternalRepaintEditorWindow();
    // static private System.Void .cctor()
    // Offset: 0x1249E3C
    static void _cctor();
    // static System.Int32 get_scrollTroughSide()
    // Offset: 0x124A080
    static int get_scrollTroughSide();
    // static System.Void set_scrollTroughSide(System.Int32 value)
    // Offset: 0x124A0E8
    static void set_scrollTroughSide(int value);
    // static System.DateTime get_nextScrollStepTime()
    // Offset: 0x124A154
    static System::DateTime get_nextScrollStepTime();
    // static System.Void set_nextScrollStepTime(System.DateTime value)
    // Offset: 0x124A1BC
    static void set_nextScrollStepTime(System::DateTime value);
    // static public System.Void set_skin(UnityEngine.GUISkin value)
    // Offset: 0x124A228
    static void set_skin(UnityEngine::GUISkin* value);
    // static public UnityEngine.GUISkin get_skin()
    // Offset: 0x124A3EC
    static UnityEngine::GUISkin* get_skin();
    // static System.Void DoSetSkin(UnityEngine.GUISkin newSkin)
    // Offset: 0x124A334
    static void DoSetSkin(UnityEngine::GUISkin* newSkin);
    // static public System.Void Label(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x124A5BC
    static void Label(UnityEngine::Rect position, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style);
    // static public System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image)
    // Offset: 0x124A818
    static void DrawTexture(UnityEngine::Rect position, UnityEngine::Texture* image);
    // static public System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode)
    // Offset: 0x124A8B0
    static void DrawTexture(UnityEngine::Rect position, UnityEngine::Texture* image, UnityEngine::ScaleMode scaleMode);
    // static public System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend)
    // Offset: 0x124A958
    static void DrawTexture(UnityEngine::Rect position, UnityEngine::Texture* image, UnityEngine::ScaleMode scaleMode, bool alphaBlend);
    // static public System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect)
    // Offset: 0x124AA08
    static void DrawTexture(UnityEngine::Rect position, UnityEngine::Texture* image, UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect);
    // static public System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, System.Single borderWidth, System.Single borderRadius)
    // Offset: 0x124AAE4
    static void DrawTexture(UnityEngine::Rect position, UnityEngine::Texture* image, UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine::Color color, float borderWidth, float borderRadius);
    // static public System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, UnityEngine.Vector4 borderWidths, System.Single borderRadius)
    // Offset: 0x124AC18
    static void DrawTexture(UnityEngine::Rect position, UnityEngine::Texture* image, UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine::Color color, UnityEngine::Vector4 borderWidths, float borderRadius);
    // static public System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, UnityEngine.Vector4 borderWidths, UnityEngine.Vector4 borderRadiuses)
    // Offset: 0x124AD78
    static void DrawTexture(UnityEngine::Rect position, UnityEngine::Texture* image, UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine::Color color, UnityEngine::Vector4 borderWidths, UnityEngine::Vector4 borderRadiuses);
    // static System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, UnityEngine.Vector4 borderWidths, UnityEngine.Vector4 borderRadiuses, System.Boolean drawSmoothCorners)
    // Offset: 0x124AEE0
    static void DrawTexture(UnityEngine::Rect position, UnityEngine::Texture* image, UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine::Color color, UnityEngine::Vector4 borderWidths, UnityEngine::Vector4 borderRadiuses, bool drawSmoothCorners);
    // static System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color leftColor, UnityEngine.Color topColor, UnityEngine.Color rightColor, UnityEngine.Color bottomColor, UnityEngine.Vector4 borderWidths, UnityEngine.Vector4 borderRadiuses, System.Boolean drawSmoothCorners)
    // Offset: 0x124B030
    static void DrawTexture(UnityEngine::Rect position, UnityEngine::Texture* image, UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine::Color leftColor, UnityEngine::Color topColor, UnityEngine::Color rightColor, UnityEngine::Color bottomColor, UnityEngine::Vector4 borderWidths, UnityEngine::Vector4 borderRadiuses, bool drawSmoothCorners);
    // static System.Boolean CalculateScaledTextureRects(UnityEngine.Rect position, UnityEngine.ScaleMode scaleMode, System.Single imageAspect, UnityEngine.Rect outScreenRect, UnityEngine.Rect outSourceRect)
    // Offset: 0x124B6FC
    static bool CalculateScaledTextureRects(UnityEngine::Rect position, UnityEngine::ScaleMode scaleMode, float imageAspect, UnityEngine::Rect& outScreenRect, UnityEngine::Rect& outSourceRect);
    // static public System.Void DrawTextureWithTexCoords(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.Rect texCoords)
    // Offset: 0x124B960
    static void DrawTextureWithTexCoords(UnityEngine::Rect position, UnityEngine::Texture* image, UnityEngine::Rect texCoords);
    // static public System.Void DrawTextureWithTexCoords(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.Rect texCoords, System.Boolean alphaBlend)
    // Offset: 0x124BA28
    static void DrawTextureWithTexCoords(UnityEngine::Rect position, UnityEngine::Texture* image, UnityEngine::Rect texCoords, bool alphaBlend);
    // static public System.Void Box(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x124BC94
    static void Box(UnityEngine::Rect position, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style);
    // static public System.Boolean Button(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x124BF24
    static bool Button(UnityEngine::Rect position, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style);
    // static System.Boolean Button(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x124C054
    static bool Button(UnityEngine::Rect position, int id, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style);
    // static private System.Boolean DoRepeatButton(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.FocusType focusType)
    // Offset: 0x124C228
    static bool DoRepeatButton(UnityEngine::Rect position, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, UnityEngine::FocusType focusType);
    // static System.String PasswordFieldGetStrToShow(System.String password, System.Char maskChar)
    // Offset: 0x124C60C
    static ::Il2CppString* PasswordFieldGetStrToShow(::Il2CppString* password, ::Il2CppChar maskChar);
    // static System.Void DoTextField(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style)
    // Offset: 0x124C760
    static void DoTextField(UnityEngine::Rect position, int id, UnityEngine::GUIContent* content, bool multiline, int maxLength, UnityEngine::GUIStyle* style);
    // static System.Void DoTextField(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText)
    // Offset: 0x124C828
    static void DoTextField(UnityEngine::Rect position, int id, UnityEngine::GUIContent* content, bool multiline, int maxLength, UnityEngine::GUIStyle* style, ::Il2CppString* secureText);
    // static System.Void DoTextField(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText, System.Char maskChar)
    // Offset: 0x124C900
    static void DoTextField(UnityEngine::Rect position, int id, UnityEngine::GUIContent* content, bool multiline, int maxLength, UnityEngine::GUIStyle* style, ::Il2CppString* secureText, ::Il2CppChar maskChar);
    // static private System.Void HandleTextFieldEventForTouchscreen(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText, System.Char maskChar, UnityEngine.TextEditor editor)
    // Offset: 0x124CDFC
    static void HandleTextFieldEventForTouchscreen(UnityEngine::Rect position, int id, UnityEngine::GUIContent* content, bool multiline, int maxLength, UnityEngine::GUIStyle* style, ::Il2CppString* secureText, ::Il2CppChar maskChar, UnityEngine::TextEditor* editor);
    // static private System.Void HandleTextFieldEventForDesktop(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, UnityEngine.TextEditor editor)
    // Offset: 0x124D2B4
    static void HandleTextFieldEventForDesktop(UnityEngine::Rect position, int id, UnityEngine::GUIContent* content, bool multiline, int maxLength, UnityEngine::GUIStyle* style, UnityEngine::TextEditor* editor);
    // static public System.Boolean Toggle(UnityEngine.Rect position, System.Boolean value, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x124E7AC
    static bool Toggle(UnityEngine::Rect position, bool value, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style);
    // static private System.Boolean DoControl(UnityEngine.Rect position, System.Int32 id, System.Boolean on, System.Boolean hover, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x124E9B0
    static bool DoControl(UnityEngine::Rect position, int id, bool on, bool hover, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style);
    // static private System.Void DoLabel(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x124A664
    static void DoLabel(UnityEngine::Rect position, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style);
    // static System.Boolean DoToggle(UnityEngine.Rect position, System.Int32 id, System.Boolean value, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x124E880
    static bool DoToggle(UnityEngine::Rect position, int id, bool value, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style);
    // static System.Boolean DoButton(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x124C104
    static bool DoButton(UnityEngine::Rect position, int id, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style);
    // static public System.Single HorizontalSlider(UnityEngine.Rect position, System.Single value, System.Single leftValue, System.Single rightValue, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb)
    // Offset: 0x124EFB8
    static float HorizontalSlider(UnityEngine::Rect position, float value, float leftValue, float rightValue, UnityEngine::GUIStyle* slider, UnityEngine::GUIStyle* thumb);
    // static public System.Single Slider(UnityEngine.Rect position, System.Single value, System.Single size, System.Single start, System.Single end, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb, System.Boolean horiz, System.Int32 id, UnityEngine.GUIStyle thumbExtent)
    // Offset: 0x124F094
    static float Slider(UnityEngine::Rect position, float value, float size, float start, float end, UnityEngine::GUIStyle* slider, UnityEngine::GUIStyle* thumb, bool horiz, int id, UnityEngine::GUIStyle* thumbExtent);
    // static public System.Single HorizontalScrollbar(UnityEngine.Rect position, System.Single value, System.Single size, System.Single leftValue, System.Single rightValue, UnityEngine.GUIStyle style)
    // Offset: 0x124F31C
    static float HorizontalScrollbar(UnityEngine::Rect position, float value, float size, float leftValue, float rightValue, UnityEngine::GUIStyle* style);
    // static System.Boolean ScrollerRepeatButton(System.Int32 scrollerID, UnityEngine.Rect rect, UnityEngine.GUIStyle style)
    // Offset: 0x124FF2C
    static bool ScrollerRepeatButton(int scrollerID, UnityEngine::Rect rect, UnityEngine::GUIStyle* style);
    // static public System.Single VerticalScrollbar(UnityEngine.Rect position, System.Single value, System.Single size, System.Single topValue, System.Single bottomValue, UnityEngine.GUIStyle style)
    // Offset: 0x1250270
    static float VerticalScrollbar(UnityEngine::Rect position, float value, float size, float topValue, float bottomValue, UnityEngine::GUIStyle* style);
    // static System.Single Scroller(UnityEngine.Rect position, System.Single value, System.Single size, System.Single leftValue, System.Single rightValue, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb, UnityEngine.GUIStyle leftButton, UnityEngine.GUIStyle rightButton, System.Boolean horiz)
    // Offset: 0x124F828
    static float Scroller(UnityEngine::Rect position, float value, float size, float leftValue, float rightValue, UnityEngine::GUIStyle* slider, UnityEngine::GUIStyle* thumb, UnityEngine::GUIStyle* leftButton, UnityEngine::GUIStyle* rightButton, bool horiz);
    // static public System.Void BeginGroup(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x1250478
    static void BeginGroup(UnityEngine::Rect position, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style);
    // static System.Void BeginGroup(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.Vector2 scrollOffset)
    // Offset: 0x125055C
    static void BeginGroup(UnityEngine::Rect position, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, UnityEngine::Vector2 scrollOffset);
    // static public System.Void EndGroup()
    // Offset: 0x1250908
    static void EndGroup();
    // static UnityEngineInternal.GenericStack get_scrollViewStates()
    // Offset: 0x1250974
    static UnityEngineInternal::GenericStack* get_scrollViewStates();
    // static UnityEngine.Vector2 BeginScrollView(UnityEngine.Rect position, UnityEngine.Vector2 scrollPosition, UnityEngine.Rect viewRect, System.Boolean alwaysShowHorizontal, System.Boolean alwaysShowVertical, UnityEngine.GUIStyle horizontalScrollbar, UnityEngine.GUIStyle verticalScrollbar, UnityEngine.GUIStyle background)
    // Offset: 0x12509DC
    static UnityEngine::Vector2 BeginScrollView(UnityEngine::Rect position, UnityEngine::Vector2 scrollPosition, UnityEngine::Rect viewRect, bool alwaysShowHorizontal, bool alwaysShowVertical, UnityEngine::GUIStyle* horizontalScrollbar, UnityEngine::GUIStyle* verticalScrollbar, UnityEngine::GUIStyle* background);
    // static public System.Void EndScrollView(System.Boolean handleScrollWheel)
    // Offset: 0x125197C
    static void EndScrollView(bool handleScrollWheel);
    // static System.Void CallWindowDelegate(UnityEngine.GUI/WindowFunction func, System.Int32 id, System.Int32 instanceID, UnityEngine.GUISkin _skin, System.Int32 forceRect, System.Single width, System.Single height, UnityEngine.GUIStyle style)
    // Offset: 0x1251E10
    static void CallWindowDelegate(UnityEngine::GUI::WindowFunction* func, int id, int instanceID, UnityEngine::GUISkin* _skin, int forceRect, float width, float height, UnityEngine::GUIStyle* style);
    // static private System.Void get_color_Injected(UnityEngine.Color ret)
    // Offset: 0x1249AFC
    static void get_color_Injected(UnityEngine::Color& ret);
    // static private System.Void set_color_Injected(UnityEngine.Color value)
    // Offset: 0x1249BD0
    static void set_color_Injected(UnityEngine::Color& value);
  }; // UnityEngine.GUI
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUI*, "UnityEngine", "GUI");
#pragma pack(pop)
