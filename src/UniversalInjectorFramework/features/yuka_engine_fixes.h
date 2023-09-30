#pragma once
#include "_feature_base.h"

namespace yuka
{
	struct GraphicsContext;
	struct Surface;
	struct Layer;
	struct Sprite;
	struct AnimationFrame;

	struct Window;
	struct RenderThread;

	struct ScriptContext;
	struct ScriptFrame;
	struct FontInfo;
}

namespace uif::features
{
	class yuka_engine_fixes final : public feature_base
	{
	public:
		explicit yuka_engine_fixes(uif::injector& injector) : feature_base(injector, "yuka_engine_fixes") {}
		void initialize() override;
		void finalize() override;

		bool enabled = false;

	private:
		template<typename T> void get_address(intptr_t fallback, T& target, const std::string& name);
	};
}

namespace yuka
{
	// Graphics

	struct AnimationFrame
	{
		int x;
		int y;
		int w;
		int h;
		int duration;
		int type;
		int field_18;
		int action;
	};

	struct Surface
	{
		int state;
		HBITMAP bitmap;
		int* pixels;
		HBITMAP alphaBitmap;
		int* alphaPixels;
		int* field_14;
		int field_18;
		int field_1C;
		int bpp;
		int height;
		int width;
		const char* fileName;
		int field_30;
		AnimationFrame* animations;
		int field_38;
		int animationCount;
		int* animationStartFrameIds;
		int* animationFrameCounts;
		int field_48;
		int field_4C;
		int field_50;
		int field_54;
	};

	struct Sprite
	{
		bool isVisible;
		int x;
		int y;
		int w;
		int h;
		RECT currentFrameSourceRect;
		int currentFrameDuration;
		Surface* surface;
		int currentFrameType;
		int type;
		Layer* layer;
		int spriteId;
		bool isValid;
		int field_40;
		char field_44;
		char character;
		char characterByte2;
		char* text;
		int fontId;
		COLORREF textColor;
		int fontEffect;
		int shadowColor;
		int borderColor;
		int field_60;
		int field_64;
		int field_68;
		int field_6C;
		int field_70;
		int field_74;
		int field_78;
		int field_7C;
		int animationId;
		int currentAnimationFrame;
		AnimationFrame* animationFrames;
		int animationFrameCount;
		int field_90;
		int field_94;
	};

	struct GraphicsContext
	{
		int field_0;
		int field_4;
		Layer* first;
		Layer* last;
		RECT rect;
		int field_20;
		int field_24;
		int field_28;
		char field_2C;
		int field_30;
		int field_34;
		int field_38;
		int field_3C;
		int field_40;
		int field_44;
	};

	struct Layer
	{
		Surface surface;
		Layer* prev;
		Layer* next;
		int layerId;
		Surface surface2;
		char field_BC;
		int field_C0;
		int field_C4;
		int field_C8;
		int field_CC;
		double offsetX;
		double offsetY;
		int field_E0;
		int field_E4;
		char isVisible;
		int fontId;
		int textColor;
		int fontEffect;
		int shadowColor;
		int borderColor;
		int cursorX;
		int cursorY;
		int cursorWithoutAutoWrapX;
		int cursorWithoutAutoWrapY;
		RECT textArea;
		int keyWaitIconOffsetX;
		int keyWaitIconOffsetY;
		int keyWaitIconPositioning;
		int field_12C;
		Sprite* sprites[1000];
		int spriteCount;
		bool waitForNextPage;
		GraphicsContext* graphics;
		int scrollMode;
		double field_10E0;
		double field_10E8;
		int field_10F0;
		int field_10F4;
		double transparency;
		double transparencyStep;
		double targetTransparency;
		int field_1110;
		int field_1114;
		int field_1118;
		int field_111C;
		char field_1120;
		char isFlushed_;
		char isScaled;
		int field_1124;
		double scaleX;
		double scaleY;
		int scaleCenterX;
		int scaleCenterY;
		char field_1140;
		int field_1144;
		double scaleStepX;
		double scaleStepY;
		double targetScaleX;
		double targetScaleY;
		Surface field_1168;
		int field_11C0;
		int field_11C4;
		int field_11C8;
		int field_11CC;
		int field_11D0;
		int field_11D4;
		int field_11D8;
		int field_11DC;
		double rotation;
		int rotationCenterX;
		int rotationCenterY;
		int rotationMode;
		int field_11F4;
		double rotationStep;
		int rotationTarget;
		Surface field_1204;
		int field_125C;
		int field_1260;
		int field_1264;
		int field_1268;
		int field_126C;
		bool isRasterScrollActive;
		int field_1274;
		int field_1278;
		int field_127C;
		double field_1280;
		double field_1288;
		double field_1290;
		int field_1298;
		int field_129C;
		int field_12A0;
		int field_12A4;
		char doNotSaveGraphicAttributes;
		char textNoWait;
		int addColor;
		int subColor;
		char sepia;
		char monochrome;
		char inverted;
		int field_12B8[75];
		int field_13E4;
	};

	struct FontInfo
	{
		Surface renderSurface;
		LOGFONTA logFont;
		HFONT hFont;
		HFONT hPrevFont;
		int superScaleFactor;
		int charWidth;
		int charHeight;
		HDC hdc;
		HGDIOBJ hPrevObject;
	};

	// Script

	struct KeyBinding
	{
		int keyCodes[16];
		int count;
	};

	struct AreaDefinition
	{
		int isEnabled;
		int layerId;
		int x1;
		int y1;
		int x2;
		int y2;
		int hoverSpriteSourceLayerId;
		int hoverSpriteX;
		int hoverSpriteY;
		int hoverSpriteAnimationId1;
		int hoverSpriteAnimationId2;
		int field_2C;
		int field_30;
		int hoverSoundId;
		int clickSoundId;
		int soundId3;
		int field_40;
	};

	struct EventHandler
	{
		AreaDefinition mouseArea;
		const char* fileName;
		int id;
		KeyBinding keyBinding;
		char field_90;
		EventHandler* prev;
		EventHandler* next;
	};


	struct struc_31
	{
		void* field_0;
		int type;
		int x;
		int y;
		char field_10;
		char field_11;
		int field_14;
		int field_18;
	};

	struct HistoryEntry
	{
		struc_31* field_0;
		int field_4;
		std::string field_8;
	};

	struct std_string
	{
		int unused;
		std::string value;
	};

	struct ScriptContext
	{
		ScriptFrame* rootScript;
		ScriptFrame* currentScript;
		Layer* messageLayer;
		int messageLayerId;
		int nameLayerId;
		GraphicsContext* graphics;
		int field_18;
		void* field_1C;
		int field_20;
		int field_24;
		void* field_28;
		int field_2C;
		int field_30;
		void* field_34;
		void* field_38;
		void* field_3C;
		int field_40;
		int field_44;
		int field_48;
		int field_4C;
		int field_50;
		int field_54;
		int cdPlayMode;
		bool isHistoryTextColorText_;
		int historyTextColor1;
		int historyTextColor2;
		char isHistoryTextLayerIdValid;
		int historyTextLayerId;
		int historySoundGroupChannels[14];
		int field_A8;
		int field_AC;
		int field_B0;
		int field_B4;
		int field_B8;
		int field_BC;
		int field_C0;
		int field_C4;
		int field_C8;
		int field_CC;
		int field_D0;
		int field_D4;
		int field_D8;
		int field_DC;
		int field_E0;
		int field_E4;
		int field_E8;
		int field_EC;
		int historySoundGroupChannelCount;
		int historySoundIconSourceLayerId;
		char isHistorySoundIconSet;
		int historySoundIconInfo1;
		int historySoundIconInfo2;
		int flags[65536];
		void* strings[65536];
		char* tempGlobalString;
		char* generalPurposeString;
		char* indexName;
		char isSkipping;
		bool wasInstructionExecutedBefore;
		char alreadyNoWaitMode;
		HANDLE scriptSync;
		int selectionMode;
		int field_8011C;
		int field_80120;
		int selectFunction;
		int mouseSelectFunction;
		int keyWaitFlags;
		char field_80130;
		int keyWaitIconAnimationId;
		char field_80138;
		int field_8013C;
		int historyCount;
		std_string currentVoiceClipName;
		HistoryEntry history[1000];
		AreaDefinition areaHistoryMode;
		AreaDefinition areaSkip;
		AreaDefinition areaAlreadySkip;
		AreaDefinition areaAutoMode;
		AreaDefinition areaAutoModeExecute;
		AreaDefinition areaWindowErase;
		AreaDefinition areaHistoryNext;
		AreaDefinition areaHistoryNextPage;
		AreaDefinition areaHistoryPrev;
		AreaDefinition areaHistoryPrevPage;
		AreaDefinition areaHistoryLast;
		AreaDefinition areaHistoryHead;
		AreaDefinition areaHistoryExit;
		AreaDefinition areaHistoryMouseR;
		AreaDefinition areaHistoryScrollbarH;
		AreaDefinition areaHistoryScrollbarV;
		EventHandler* eventHandlers;
		const char* field_89244;
		int field_89248;
		bool skipNextTransition;
		char isKeyWaitIconEnable;
		int historyEntriesPerPage;
		int keyWaitShowLayerIds[16];
		int keyWaitShowLayerIdCount;
		int keyWaitHideLayerIds[16];
		int keyWaitHideLayerIdCount;
		int field_892DC[64];
		int field_893DC;
		int field_893E0;
		int field_893E4;
		int field_893E8;
		int field_893EC;
		int field_893F0;
		int field_893F4;
		int field_893F8;
		int field_893FC;
		int field_89400;
		int field_89404;
		int field_89408;
		int field_8940C;
		int field_89410;
		int keyWaitIconAnimationId2;
		int field_89418;
		int field_8941C;
		int field_89420;
		int field_89424;
		int field_89428;
		int field_8942C;
	};

	struct Thread
	{
		HANDLE handle;
		_RTL_CRITICAL_SECTION criticalSection;
		char terminate;
		void* entrypoint;
	};

	struct RenderThread
	{
		Thread thread;
		int field_24;
		HANDLE setEvent;
		HANDLE waitEvent;
		int frameCount;
		int frameDelay;
	};

	enum DataElementType
	{
		DE_Func = 0x0,
		DE_Ctrl = 0x1,
		DE_UInt = 0x2,
		DE_UStr = 0x3,
		DE_CInt = 0x4,
		DE_CStr = 0x5,
		DE_SInt = 0x6,
		DE_SStr = 0x7,
		DE_VInt = 0x8,
		DE_VStr = 0x9,
		DE_VLoc = 0xA,
		DE_RInt = 0xB,
		DE_RStr = 0xC,
	};

	struct DataElement
	{
		DataElementType type;
		int name;
		int value;
		int index;
	};

	enum ScriptValueType
	{
		VT_Int = 0x1,
		VT_Str = 0x2,
	};

	struct ScriptValue
	{
		ScriptValueType type;
		int intValue;
		char* stringValue;
	};

	struct ScriptFrame
	{
		ScriptFrame* parentScript;
		ScriptFrame* childScript;
		const char* scriptName;
		int instructionPointer;
		int nextInstructionPointer;
		int* code;
		int codeLength;
		DataElement* index;
		int indexCount;
		const char* data;
		int dataLength;
		ScriptValue* locals;
		int rdataLength;
		int field_34;
		int field_38;
		int assignmentTargetIndex;
		char assignmentTargetIndexValid;
		int textOffset;
		int field_48;
		int field_4C;
		int field_50;
		int field_54;
		int field_58;
		int field_5C;
		int field_60;
		int field_64;
		int field_68;
		int field_6C;
		int field_70;
		int field_74;
		int field_78;
		int field_7C;
		int field_80;
		int field_84;
		int field_88;
		int field_8C;
		int field_90;
		int field_94;
		int field_98;
		int field_9C;
		int field_A0;
		int field_A4;
		int field_A8;
		int field_AC;
		int field_B0;
		int field_B4;
		int field_B8;
		int field_BC;
		int field_C0;
		int field_C4;
		char field_C8;
		char field_C9;
		bool* readFlags;
		int field_D0[19];
		int field_11C;
	};

	// Other

	struct MainWindow_vtable
	{
		int dtor;
		int(__thiscall* WindowProc)(Window* _this, HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
		int Create;
		int Destroy;
	};

	struct Window
	{
		MainWindow_vtable* vtable;
		HWND hWnd;
		HMENU hMenu;
		HMENU subMenu;
		HRGN field_10;
		HRGN field_14;
		int style;
		int exStyle;
		int viewportHeight;
		int viewportWidth;
		int x;
		int y;
		HWND hWndParent;
		const char* className;
		const char* caption;
		char field_3C;
		bool isDrawingSuspended;
		HCURSOR cursor;
		int field_44;
		WNDPROC baseClassWindowProc;
		Window* editWindow;
		char isCursorHidden;
		Surface surfaces[3];
		GraphicsContext* graphics;
		int gameExitHandlers[16];
		int gameExitHandlerCount;
		int field_1A4;
		int field_1A8;
		int field_1AC;
		int field_1B0;
		int field_1B4;
		int field_1B8;
		int field_1BC;
		int field_1C0;
		int field_1C4;
		int field_1C8;
		int field_1CC;
		int field_1D0;
		int field_1D4;
		int field_1D8;
		int field_1DC;
		int mouseWheelPosition;
		bool field_1E4;
		bool field_1E5;
		HMENU hQuickSaveMenu;
		HMENU hQuickLoadMenu;
		HMENU hFontMenu;
		int field_1F4;
		ScriptContext* scriptContext;
	};

	struct Game
	{
		HINSTANCE hInstance;
		HWND applicationWindowHandle;
		int hMutex;
		bool isFullscreen;
		__declspec(align(4)) char isSavingEnabled;
		char isLoadingEnabled;
		char field_12;
		int field_14;
		int globalFlags[10000];
		void* globalStrings[10000];
		const char* playerName;
		KeyBinding keybindKeyInScript;
		KeyBinding keybindSkip;
		KeyBinding keybindDecide;
		KeyBinding keybindWindowErase;
		KeyBinding keybindAutoMode;
		KeyBinding keybindSelectHistoryMode;
		int keyCodeLeft;
		int keyCodeRight;
		int keyCodePrev;
		int keyCodeNext;
		KeyBinding keybindSelectPrev;
		KeyBinding keybindSelectNext;
		int characterPrintDelay;
		int field_13AD0;
		char field_13AD4;
		char field_13AD5;
		int bitsPerPixel;
		int screenHeight;
		int screenWidth;
		int screenEffectsQuality;
		char disableScreenEffects;
		__declspec(align(8)) char saveBeforeNextInstruction;
		int saveBeforeNextInstructionSlot;
		char field_13AF8;
		int quickLoadSlot;
		char field_13B00;
		char field_13B01;
		int field_13B04;
		int field_13B08;
		char field_13B0C;
		char field_13B0D;
		char field_13B0E;
		int field_13B10;
		char field_13B14[16];
		int defaultFontEffect;
		int defaultTextShadowColor;
		int defaultTextBorderColor;
		int defaultTextWindowGroupLayerCount;
		int defaultTextWindowGroupLayerIds[16];
		char field_13B74;
		int field_13B78;
		int timerStartTimes[16];
		int field_13BBC;
		int field_13BC0;
		int field_13BC4;
		int field_13BC8;
		int field_13BCC;
		int field_13BD0;
		int field_13BD4;
		int field_13BD8;
		int field_13BDC;
		int field_13BE0;
		int field_13BE4;
		int field_13BE8;
		int resolutionX;
		int resolutionY;
		char field_13BF4;
		int rubyFontId;
		HCURSOR cursor1;
		HCURSOR cursor2;
		char cursorFileName1a[260];
		char cursorFileName2a[260];
		char cursorFileName1b[260];
		char cursorFileName2b[260];
		int field_14014;
		int saveDataComment1Offset;
		char field_1401C;
		char field_1401D;
		char field_1401E;
		int saveDataDirectory;
		char field_14024;
		char field_14025;
		int field_14028;
		int field_1402C;
		int field_14030;
		int field_14034;
		int field_14038;
		char field_1403C;
		char field_1403D;
		char field_1403E;
		char field_1403F;
		char field_14040;
		char field_14041;
		int field_14044;
		int fontPadding_;
		char field_1404C;
		char field_1404D;
		char field_1404E;
		char field_1404F;
		int field_14050;
		int field_14054;
		int field_14058;
		int field_1405C;
		int field_14060;
		int field_14064;
		int field_14068;
		int field_1406C;
		int field_14070;
		int field_14074;
		int field_14078;
		int field_1407C;
		int field_14080;
		int field_14084;
		int field_14088;
		int field_1408C;
		int field_14090;
		int startTimeInSeconds;
		int cursorAutoHideDelay;
		char field_1409C;
		char field_1409D;
		char field_1409E;
		int readTextColor;
		int field_140A4;
		int field_140A8;
		char field_140AC;
		char field_140AD;
		char field_140AE;
		char field_140AF;
		const char* forbiddenWrapCharacters;
		int field_140B4;
		int field_140B8;
		int field_140BC;
		int a7;
		char field_140C4;
		char field_140C5;
		char field_140C6;
		POINTL fullscreenWindowSize;
		POINTL fullscreenResolutionExplicit;
		int resolutionX2;
		int resolutionY2;
		int pillarBoxSize;
		int letterBoxSize;
		bool isWindowResizable;
		int fullscreenSizingMode;
		int field_140F0;
		bool isWindowResized;
		int resizedWindowWidth;
		int resizedWindowHeight;
		int field_14100;
		int field_14104;
	};
}
