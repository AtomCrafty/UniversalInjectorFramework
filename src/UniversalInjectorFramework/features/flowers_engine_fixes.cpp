#include "pch.h"
#include "flowers_engine_fixes.h"

#pragma comment(lib, "winmm.lib")
#include <timeapi.h>

#include "ansi.h"
#include "callconv.h"
#include "config.h"
#include "encoding.h"
#include "hooks.h"
#include "injector.h"

using namespace uif::ansi;
using namespace uif::calling_conventions;

namespace omega {

	const int OptionLineHeight = 30;
	const int OptionTextBoxWidth = 250;

	/* Types */

	struct Texture;
	struct Layer;
	struct SGame;

	struct Texture_vtable
	{
		int field_0;
		int field_4;
		bool(__thiscall* Create)(Texture*, int width, int height, int);
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
		void(__stdcall* CopyFrom)(RECT* dstRect, Texture* srcTexture, RECT* srcRect, DWORD);
		int field_38;
		int field_3C;
		int field_40;
		int field_44;
		int(__thiscall* GetWidth)(Texture* _this);
		int(__thiscall* GetHeight)(Texture* _this);
		int field_50;
		int field_54;
		int field_58;
		int(__thiscall* GetField30)(Texture* _this);
		int field_60;
		int field_64;
	};

	struct Texture
	{
		Texture_vtable* vft;
		int width;
		int height;
		int field_C;
		int field_10;
		int field_14;
		int field_18;
		int field_1C;
		int field_20;
		int field_24;
		int field_28;
		char field_2C;
		int field_30;
		int field_34;
		int field_38;
		int field_3C;
	};

	struct Layer
	{
		int(__cdecl* GetZero)(Layer* layer);
		bool(__cdecl* RemoveRef)(Layer* a1);
		void(__cdecl* SetField64)(Layer*, const wchar_t*);
		const wchar_t* (__cdecl* GetField64)(Layer*);
		const wchar_t* (*GetClassName)(void);
		int field_14;
		int field_18;
		void(__cdecl* SetField70)(Layer*, int);
		int(__cdecl* GetField70)(Layer* layer);
		void(__cdecl* SetPosition)(Layer* layer, int x, int y);
		int(__cdecl* GetPosX)(Layer* layer);
		int(__cdecl* GetPosY)(Layer* layer);
		void(__cdecl* SetSize)(Layer* layer, int width, int height);
		int(__cdecl* GetWidth)(Layer* layer);
		int(__cdecl* GetHeight)(Layer* layer);
		void(__cdecl* SetField88)(Layer*, int);
		int(__cdecl* GetField88)(Layer* layer);
		void(__cdecl* SetOpacity)(Layer*, bool);
		bool(__cdecl* GetOpacity)(Layer*);
		void(__cdecl* SetField84)(Layer*, int);
		int(__cdecl* GetField84)(Layer*);
		void(__cdecl* SetField94)(Layer*, int);
		int(__cdecl* GetField94)(Layer*);
		void(__cdecl* Blit)(Layer* src, Layer* dst, int dstX, int dstY, int dstW, int dstH, int srcX, int srcY, int srcW, int srcH);
		bool(__cdecl* Execute)(Layer*, const wchar_t* name, int, int);
		const wchar_t* field_64;
		int refCount_;
		int field_6C;
		int field_70;
		int posX;
		int posY;
		int width;
		int height;
		int bufferingMode;
		int field_88;
		int field_8C;
		bool opacity;
		int field_94;
		int field_98;
		int field_9C;
		Texture* texture;
		int field_A4;
		int field_A8;
		int field_AC;
		int field_B0;
		int field_B4;
		int field_B8;
		int field_BC;
		int field_C0;
		int field_C4;
		int field_C8;
	};

	struct SGame
	{
		__int16 rubyCursorX;
		__int16 rubyCursorY;
		char rubyNesting;
		char field_5;
		__int16 field_6;
		LOGFONTW field_8;
		LOGFONTW field_64;
		Layer* layers[20];
		__int64 field_110[20];
		char field_1B0;
		int field_1B4[15];
		char field_1F0;
		int field_1F4[32];
		char field_274;
		char field_275;
		char field_276;
		char historyFile[128];
		int field_2F8[139];
		char textBuffer[256];
		char* characterName;
		int field_628;
		LOGFONTW field_62C;
		int field_688[936];
		LOGFONTW field_1528;
		int field_1584[747];
		char fastForward;
		int field_2134[39];
		int field_21D0;
		int field_21D4;
		int field_21D8;
		int field_21DC;
		char* buffer;
		char* field_21E4;
		char* instructionPointer;
		char* nextIP;
		char* text;
		int field_21F4;
		int field_21F8;
		int field_21FC;
		int field_2200;
		int field_2204;
		int field_2208;
		int field_220C;
		int field_2210;
		char textProcessingState;
		int charsInLine;
		int textLength;
		int textOffset;
		int cursorX;
		int cursorY;
		int field_222C;
		int field_2230;
		int textColor;
		int field_2238;
		char field_223C;
		int field_2240;
		char field_2244;
		char field_2245;
		char field_2246;
		char field_2247;
		int field_2248[13];
		char field_227C;
		char field_227D;
		char field_227E;
		int field_2280[10];
		int textFinishTime;
		int field_22AC;
		int field_22B0[30];
		RECT field_2328;
		RECT field_2338;
		RECT field_2348;
		RECT field_2358;
		RECT field_2368;
		RECT field_2378;
		RECT field_2388;
		RECT field_2398;
		RECT field_23A8;
		RECT field_23B8;
		RECT field_23C8;
		RECT field_23D8;
		RECT field_23E8;
		RECT field_23F8;
		RECT field_2408;
		RECT field_2418;
		RECT field_2428;
		RECT field_2438;
		RECT field_2448;
		RECT field_2458;
		RECT field_2468;
		RECT field_2478;
		RECT field_2488;
		RECT field_2498;
		RECT field_24A8;
		RECT field_24B8;
		RECT field_24C8;
		RECT field_24D8;
		RECT field_24E8;
		RECT field_24F8;
		RECT field_2508;
		RECT field_2518;
		RECT field_2528;
		RECT field_2538;
		RECT field_2548;
		RECT field_2558;
		RECT field_2568;
		RECT field_2578;
		RECT field_2588;
		int field_2598[27];
		__int16 field_2604[78];
		char field_26A0[156];
		Layer* field_273C;
		int field_2740[12];
		Layer* windowLayer;
		Layer* windowFrameLayer;
		Layer* windowMenuLayer;
		Layer* quickSaveMenuLayer;
		Layer* nameLayer;
		Layer* lilyGaugeLayer;
		Layer* clickWaitLayer;
		Layer* textLayer;
		Layer* flowerLayer;
		Layer* selectPLayer;
		int field_2798;
		int field_279C;
		int field_27A0;
		int field_27A4;
		Layer* field_27A8;
		int field_27AC;
		int field_27B0;
		int field_27B4;
		char field_27B8;
		char field_27B9;
		char field_27BA;
		char field_27BB;
		char field_27BC;
		LOGFONTW font;
		LOGFONTW field_281C;
		int field_2878[11];
		int field_28A4;
	};

	struct char256
	{
		char value[256];
	};

	struct ScriptState
	{
		int field_0[262];
		char state;
		char field_419;
		int field_41C[6];
		int field_434[9][128];
		int field_1634[189];
		int historyCount;
		char256 historyText[256];
		char256 historyName[256];
		char256 historyFile[256];
		int field_3192C[352];
		char currentScriptName_[128];
		int field_31F2C[16673];
		char field_423B0;
		char field_423B1;
		int field_423B4;
	};

	struct Config
	{
		char field_0;
		char field_1;
		char field_2;
		char field_3;
		int field_4;
		int field_8;
		int musicVolume;
		int effectVolume;
		int voiceVolume;
		int individualVoiceVolumes[44];
		int field_C8;
		char field_CC;
		char cancelVoiceOnClick;
		char field_CE;
		char field_CF;
		char field_D0;
		char field_D1;
		char mainMenuImage;
		char field_D3;
		int field_D4[30];
		int field_14C;
		char field_150;
		int field_154;
		int field_158;
		int field_15C;
		char field_160[1280];
		char field_660[1024];
		char field_A60[65536];
		int field_10A60[16];
		int field_10AA0;
		int field_10AA4;
		int field_10AA8[10];
		int field_10AD0;
	};

	struct Instruction
	{
		unsigned __int8 opcode;
		unsigned __int8 size;
		unsigned __int8 field_2;
		unsigned __int8 field_3;
	};

	struct SHistory
	{
		__int16 field_0;
		__int16 field_2;
		char field_4;
		char field_5;
		int field_8;
		int field_C;
		int field_10;
		int field_14;
		int field_18;
		char field_1C;
		char field_1D;
		char field_1E;
		char field_1F;
		char field_20;
		char field_21;
		char field_22;
		char field_23;
		int field_24[76];
		char state;
		int field_158;
		int field_15C;
		int hoveredMenuButtonIndex;
		int hoveredMenuButtonIndex2;
		int hoveredVoiceButtonIndex;
		int hoveredVoiceButtonIndex2;
		int field_170;
		int firstShownIndex;
		int field_178;
		int charsInLine;
		int field_180;
		int textOffset;
		char field_188;
		char field_189;
		bool hasVoiceFlags[3];
		RECT voiceButtonRects[3];
		int field_1C0;
		int field_1C4;
		int field_1C8;
		int field_1CC;
		int cursorX;
		int cursorY;
		int field_1D8;
		RECT menuButtonRects[5];
		int field_22C;
		int field_230;
		int field_234;
		int field_238;
		int field_23C;
		int field_240;
		int field_244;
		int field_248;
		int field_24C;
		int field_250;
		int field_254;
		Layer* textLayers[3];
		int field_264;
	};

	struct fields_t
	{
		ScriptState*& GlobalScriptState;
		SHistory*& GlobalSHistory;
		SGame*& GlobalSGame;
		Config& GlobalConfig;

		int& KeyPressed0;
		int& KeyPressed1;
		int& KeyPressed4;
		int& KeyPressedFlags;
		int& MouseWheelDelta;
		int& MouseWheelDelta2;

		int& dword_793BB4E4;
		int& dword_793BB4F8;
		int& dword_793BB4FC;
		int& dword_793BB500;
		int& dword_793BB504;
		int& dword_793BB508;
		char& byte_793BB4A3;
	} *fields;

	// imported functions

	void(*operator_delete_array)(void*);
	void* (*operator_new_array)(unsigned);
	bool(__stdcall* DestroySomeLayers)(SGame* game);

	/* doesn't work because address of the struct instance is not known at compile time
	template<typename TReturn, typename... TArgs>
	struct hook
	{
		template<registers... Registers>
		struct usercall
		{
			TReturn(*RealFunctionPointer)(TArgs...);
			TReturn(*HookFunctionPointer)(TArgs...);

			TReturn(*RealFunctionWrapper)(TArgs...) = usercall_adapter<&RealFunctionPointer, Registers...>::from_cdecl;
			TReturn(*HookFunctionWrapper)(TArgs...) = usercall_adapter<&HookFunctionPointer, Registers...>::to_cdecl;
		};
	};
	//*/

	typedef POINT* (*TAppendTextA)(const char* text, POINT* pCursor, Layer* layer, int color, int x, int y);

	TAppendTextA AppendTextA;
	TAppendTextA AppendTextAWrapper = usercall_adapter_indirect<&AppendTextA, registers::ecx, registers::edx>::from_cdecl;

	static POINT* AppendTextAHook(const char* text, POINT* pCursor, Layer* layer, int color, int x, int y)
	{
		if(fields->GlobalSGame) fields->GlobalSGame->charsInLine = 0;
		if(fields->GlobalSHistory) fields->GlobalSHistory->charsInLine = 0;
		
		AppendTextAWrapper(text, pCursor, layer, color, x, y - 6);

		pCursor->y += 6;

		return pCursor;
	}

	static constexpr auto* AppendTextAHookWrapper = usercall_adapter<AppendTextAHook, registers::ecx, registers::edx>::to_cdecl;

	typedef char* (*TTextCommand)(SGame* game, Instruction* instruction);

	TTextCommand TextCommand;
	TTextCommand TextCommandWrapper = userpurge_adapter_indirect<&TextCommand, registers::eax>::from_cdecl;

	static char* TextCommandHook(SGame* game, Instruction* instruction)
	{
		auto* state = fields->GlobalScriptState;
		const auto& config = fields->GlobalConfig;

		if(game->text)
		{
			operator_delete_array(game->text);
			game->text = nullptr;
		}

		auto* newText = reinterpret_cast<char*>(instruction) + instruction->size;
		const size_t textLength = strlen(newText) + 1;

		char truncatedText[256] = { 0 };
		memcpy_s(truncatedText, 0x100, newText, std::min(0x100u, textLength));
		truncatedText[255] = 0;
		if(IsDBCSLeadByte(truncatedText[254]))
			truncatedText[254] = 0;

		game->text = static_cast<char*>(operator_new_array(textLength));
		memcpy(game->text, newText, textLength);
		memset(game->textBuffer, 0, 0x100);
		strcpy_s(game->textBuffer, truncatedText);

		if(state->historyCount >= 250)
		{
			auto* textPtr = state->historyText;
			auto* namePtr = state->historyName;
			auto* filePtr = state->historyFile;

			for(int i = 0; i < 249; ++i)
			{
				memcpy(textPtr, textPtr + 1, 0x100);
				memcpy(namePtr, namePtr + 1, 0x100);
				memcpy(filePtr, filePtr + 1, 0x100);

				textPtr++;
				namePtr++;
				filePtr++;
			}

			state->historyCount--;
		}

		memset(state->historyText + state->historyCount, 0, 0x100);
		memset(state->historyName + state->historyCount, 0, 0x100);
		memset(state->historyFile + state->historyCount, 0, 0x100);

		strcpy_s(state->historyText[state->historyCount].value, truncatedText);
		if(game->characterName)
			strcpy_s(state->historyName[state->historyCount].value, game->characterName);
		strcpy_s(state->historyFile[state->historyCount].value, game->historyFile);

		if(game->fastForward == 0)
		{
			state->state = 3;
			game->textProcessingState = 0;
		}
		else if(newText[0] == static_cast<char>(0x81) && newText[1] == static_cast<char>(0x94)) // ”
		{
			if(game->characterName)
			{
				operator_delete_array(game->characterName);
				game->characterName = nullptr;
			}

			game->characterName = static_cast<char*>(operator_new_array(textLength));
			strcpy_s(game->characterName, textLength, newText + 2);

			state->state = 2;
		}
		else
		{
			// clear current line info and add new history entry

			state->historyCount++;
			if(state->field_423B0 == 1)
				game->field_628++;
			fields->GlobalConfig.field_A60[game->field_21F4] = 1;

			if(game->characterName)
			{
				operator_delete_array(game->characterName);
				game->characterName = nullptr;
			}

			game->field_1F0 = 0;

			if(config.cancelVoiceOnClick == 1)
			{
				__debugbreak();
				// TODO
			}

			memset(game->historyFile, 0, 0x80);
			DestroySomeLayers(game);

			if(game->textLayer)
				game->textLayer->Execute(game->textLayer, L"TextClear", 0, 0);
			if(game->nameLayer)
				game->nameLayer->Execute(game->nameLayer, L"TextClear", 0, 0);

			state->state = 2;
		}

		// round text length up to the next multiple of four to preserve instruction alignment
		game->nextIP = newText + (textLength + 3 & ~3);
		return game->nextIP;
	}

	static constexpr auto* TextCommandHookWrapper = userpurge_adapter<TextCommandHook, registers::eax>::to_cdecl;
}

template<typename FuncPtrType>
static void set_function_ptr(FuncPtrType& ref, void* address)
{
	ref = reinterpret_cast<FuncPtrType>(address);
}

template<typename FieldType>
static FieldType& get_field_at(void* address)
{
	return *static_cast<FieldType*>(address);
}

void uif::features::flowers_engine_fixes::initialize()
{
	enabled = config().value("/flowers_engine_fixes/enable"_json_pointer, false);
	if(!enabled) return;

	char* imageBase = reinterpret_cast<char*>(GetModuleHandleA("Script.dll"));
	std::cout << *this << " Script image base: " << blue(reinterpret_cast<void*>(imageBase)) << "\n";

	omega::fields = new omega::fields_t{
		get_field_at<omega::ScriptState*>(imageBase + 0x00B2B49C),
		get_field_at<omega::SHistory*>(imageBase + 0x00B2B490),
		get_field_at<omega::SGame*>(imageBase + 0x00B2B4F4),
		get_field_at<omega::Config>(imageBase + 0x0007AFB8),

		get_field_at<int>(imageBase + 0x00B2B53C),
		get_field_at<int>(imageBase + 0x00B2B53D),
		get_field_at<int>(imageBase + 0x00B2B53E),
		get_field_at<int>(imageBase + 0x00B2B52C),
		get_field_at<int>(imageBase + 0x00B2B538),
		get_field_at<int>(imageBase + 0x00B2B54C),

		get_field_at<int>(imageBase + 0x00B2B4E4),
		get_field_at<int>(imageBase + 0x00B2B4F8),
		get_field_at<int>(imageBase + 0x00B2B4FC),
		get_field_at<int>(imageBase + 0x00B2B500),
		get_field_at<int>(imageBase + 0x00B2B504),
		get_field_at<int>(imageBase + 0x00B2B508),
		get_field_at<char>(imageBase + 0x00B2B4A3)
	};

	set_function_ptr(omega::AppendTextA, imageBase + 0x000088F0);
	set_function_ptr(omega::TextCommand, imageBase + 0x0001EFD0);
	//set_function_ptr(omega::ProcessText, imageBase + 0x00028B90);

	set_function_ptr(omega::operator_delete_array, imageBase + 0x00051EF6);
	set_function_ptr(omega::operator_new_array, imageBase + 0x000421A3);
	set_function_ptr(omega::DestroySomeLayers, imageBase + 0x00023D20);
	//set_function_ptr(omega::sub_788B5600, imageBase + 0x00025600);
	//set_function_ptr(omega::sub_788B8B40, imageBase + 0x00028B40);
	//set_function_ptr(omega::sub_788AE4A0, imageBase + 0x0001E4A0);
	//set_function_ptr(omega::ClearInputFlags, imageBase + 0x000118E0);

	hooks::hook_function(this, omega::AppendTextA, omega::AppendTextAHookWrapper, "AppendTextA");
	hooks::hook_function(this, omega::TextCommand, omega::TextCommandHookWrapper, "TextCommand");
}

void uif::features::flowers_engine_fixes::finalize()
{
	if(!enabled) return;

	hooks::unhook_function(this, omega::AppendTextA, omega::AppendTextAHookWrapper, "AppendTextA");
	hooks::unhook_function(this, omega::TextCommand, omega::TextCommandHookWrapper, "TextCommand");
}
