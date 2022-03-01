#pragma once
#include "_feature_base.h"

namespace yuka
{
	struct GraphicsContext;
	struct Surface;
	struct Layer;
	struct Sprite;
	struct AnimationFrame;

	struct MainWindow;
	struct Sync;

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
		bool field_0;
		int x;
		int y;
		int w;
		int h;
		RECT field_14;
		int field_24;
		Surface* surface;
		int field_2C;
		int type;
		void* field_34;
		int field_38;
		bool field_3C;
		int field_40;
		char field_44;
		char character;
		char characterByte2;
		char* text;
		int fontId;
		COLORREF textColor;
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
		int animationId;
		int field_84;
		void* animationFrames;
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
		void* layerId;
		int field_64[27];
		double spriteOffsetX;
		double spriteOffsetY;
		int field_E0;
		int field_E4;
		char field_E8;
		int fontId;
		int field_F0;
		int field_F4;
		int field_F8;
		int field_FC;
		int cursorX;
		int cursorY;
		int cursorX2;
		int cursorY2;
		int defaultCursorX;
		int defaultCursorY;
		int cursorXLimit;
		int cursorYLimit;
		int field_120;
		int field_124;
		int field_128;
		int field_12C;
		Sprite* sprites[1000];
		int spriteCount;
		bool waitForNextPage;
		GraphicsContext* graphics;
		int field_10DC[17];
		char field_1120;
		char isFlushed_;
		int field_1124[97];
		char field_12A8;
		char field_12A9;
		int field_12AC;
		int field_12B0;
		char field_12B4;
		char field_12B5;
		char field_12B6;
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

	struct YksFileInfo
	{
		int field_0;
		int field_4;
		int field_8;
		int field_C;
		int field_10;
		int field_14;
		int field_18;
		int field_1C;
		int field_20;
		int field_24;
		int field_28;
		int field_2C;
		int field_30;
		int field_34;
		int field_38;
		int field_3C;
		int field_40;
		const char* fileName;
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
		char field_90;
		YksFileInfo* prev;
		YksFileInfo* next;
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

	struct struc_20
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
		int field_C;
		int field_10;
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
		int field_58;
		int field_5C;
		int field_60;
		int field_64;
		char field_68;
		int field_6C[15];
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
		int field_F0;
		int field_F4;
		int field_F8;
		int field_FC;
		int field_100;
		int flags[65536];
		void* strings[65536];
		char* tempGlobalString;
		char* generalPurposeString;
		char* indexName;
		char field_80110;
		char field_80111;
		HANDLE scriptSync;
		int selectionMode;
		int field_8011C;
		int field_80120;
		int field_80124;
		int mouseSelectFunction;
		int field_8012C;
		char field_80130;
		int field_80134;
		char field_80138;
		int field_8013C;
		int field_80140;
		std_string currentVoiceClipName;
		struc_20 field_80160[1000];
		int field_88E00[34];
		int field_88E88;
		int field_88E8C[237];
		YksFileInfo* field_89240;
		const char* field_89244;
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
		int(__thiscall* WindowProc)(MainWindow* _this, HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
		int Create;
		int Destroy;
	};

	struct MainWindow
	{
		MainWindow_vtable* vtable;
		HWND hWnd;
		HMENU hMenu;
		HMENU subMenu;
		HRGN field_10;
		HRGN field_14;
		int style;
		int exStyle;
		int height;
		int width;
		int x;
		int y;
		int hWndParent;
		const char* className;
		const char* caption;
		bool field_3C;
		bool field_3D;
		int field_40;
		int field_44;
		int field_48;
		int field_4C;
		char field_50;
		Surface surfaces[3];
		GraphicsContext* field_15C;
	};

	struct Sync
	{
		int field_0;
		_RTL_CRITICAL_SECTION criticalSection;
		int field_1C;
		int field_20;
		int field_24;
		HANDLE setEvent;
		HANDLE waitEvent;
		int field_30;
		int timeout;
	};
}
