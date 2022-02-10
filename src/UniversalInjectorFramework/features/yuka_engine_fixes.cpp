#include "pch.h"
#include "yuka_engine_fixes.h"

#include "hooks.h"

static void* (__cdecl* operator_new)(size_t Size);
template<typename T>
static T* make_new()
{
	void* ptr = operator_new(sizeof(T));
	memset(ptr, 0, sizeof(T));
	return static_cast<T*>(ptr);
}

static int(__cdecl* ProcessText)(yuka::Layer* layer, const char* text, yuka::ScriptContext* ctx);
static int(__cdecl* HandleEscapeSequence_R)(yuka::Layer* messageLayer, const char* text);
static int(__cdecl* HandleEscapeSequence_M)(yuka::Layer* messageLayer, const char* text);
static int(__cdecl* HandleEscapeSequence_GF)(yuka::Layer* messageLayer, const char* text);
static int(__cdecl* HandleEscapeSequence_OF)(yuka::Layer* messageLayer, const char* text);

static void(__thiscall* YMainWindow_RefreshSynced)(yuka::MainWindow* this_);
static void(__thiscall* YSync_WaitForRepaint)(yuka::Sync* this_);
static void(__thiscall* YGraphicsContext_Invalidate)(yuka::GraphicsContext* this_, int x1, int y1, int x2, int y2);
static bool(__thiscall* YFontInfo_MeasureText)(yuka::FontInfo* this_, const char* text, SIZE* pSize);
static bool(__thiscall* YSprite_CreateFromChar)(yuka::Sprite* this_, const char* text, int x, int y, int fontId, int textColor, int a7, int a8, int a9);
static bool(__thiscall* YLayer_AddSprite)(yuka::Layer* this_, yuka::Sprite* sprite);
static bool(__thiscall* YLayer_AppendCharacterSprite)(yuka::Layer* this_, const char* text);
static bool(__thiscall* YLayer_AppendCharacterSpriteInternal)(yuka::Layer* this_, const char* text, int fontId, int textColor, int a5, int a6, int a7);

static yuka::ScriptValue* (__cdecl* f_KeyWait)(yuka::ScriptContext* ctx, int argc, void** argv);
static yuka::ScriptValue* (__cdecl* f_PF)(yuka::ScriptContext* ctx, int argc, void** argv);
static yuka::ScriptValue* (__cdecl* f_LF)(yuka::ScriptContext* ctx, int argc, void** argv);

static yuka::FontInfo* GlobalFontTable;
static yuka::MainWindow* GlobalMainWindow;
static yuka::Sync* GlobalSync;

static int measure_first_char(const char* text, int fontId)
{
	char ch[] = { *text, 0, 0 };
	if(IsDBCSLeadByteEx(0, *text)) ch[1] = text[1];
	SIZE size;
	YFontInfo_MeasureText(&GlobalFontTable[fontId], ch, &size);
	return size.cx;
}

static int __cdecl ProcessTextHook(yuka::Layer* layer, const char* text, yuka::ScriptContext* ctx)
{
	//std::cout << "ProcessText: " << text << "\n";

	if(text == nullptr || *text == '\0')
		return 0;

	if(layer == nullptr)
		return static_cast<int>(strlen(text));

	if(layer->waitForNextPage)
	{
		YMainWindow_RefreshSynced(GlobalMainWindow);
		const bool oldField3D = GlobalMainWindow->field_3D;
		GlobalMainWindow->field_3D = false;
		YSync_WaitForRepaint(GlobalSync);

		const std::string temp{ ctx->currentVoiceClipName.value };

		f_KeyWait(ctx, 0, nullptr);

		int fieldC = ctx->field_C;
		void* params[16];
		params[0] = &fieldC;

		f_PF(ctx, 1, params);

		layer->cursorX = layer->defaultCursorX;
		layer->cursorY = layer->defaultCursorY;
		layer->waitForNextPage = false;

		ctx->currentVoiceClipName.value.assign(temp);

		YMainWindow_RefreshSynced(GlobalMainWindow);
		GlobalMainWindow->field_3D = oldField3D;
	}

	if(*text == '@')
	{
		if(text[1] == 'r')
			return HandleEscapeSequence_R(layer, text);

		if(text[1] == 'm')
			return HandleEscapeSequence_M(layer, text);

		if(text[1] == 'g' && text[2] == 'f')
			return HandleEscapeSequence_GF(layer, text);

		if(text[1] == 'o' && text[2] == 'f')
			return HandleEscapeSequence_OF(layer, text);
	}

	// calculate width of next word
	int width = 0;
	for(int i = 0; text[i]; ++i)
	{
		if(text[i] <= ' ')
			break;

		width += measure_first_char(&text[i], layer->fontId);
		if(IsDBCSLeadByteEx(0, text[i])) i++;
	}

	// emit a line break if the word would overflow the line
	if(layer->cursorXLimit && layer->cursorX + width >= layer->cursorXLimit)
	{
		const int lineHeight = GlobalFontTable[layer->fontId].charHeight;
		layer->cursorX = layer->defaultCursorX;
		layer->cursorY += lineHeight;

		if(layer->cursorYLimit && layer->cursorY + lineHeight >= layer->cursorYLimit)
		{
			layer->cursorY = layer->defaultCursorY;
			layer->waitForNextPage = true;
		}
	}

	// skip whitespace at the start of a line
	if(text[0] == ' ' && layer->cursorX == layer->defaultCursorX)
		return 1;

	YLayer_AppendCharacterSprite(layer, text);
	return IsDBCSLeadByteEx(0, *text) ? 2 : 1;
}

// dummy class is necessary because C++ won't allow me to declare the function as __thiscall otherwise
class DummyClass
{
public:
	bool __thiscall AppendCharacterSpriteInternalHook(const char* text, int fontId, int textColor, int a5, int a6, int a7)
	{
		//std::cout << "AppendCharacterSpriteInternalHook: " << text << "\n";
		//return yuka::YLayer_AppendCharacterSpriteInternal(reinterpret_cast<yuka::Layer*>(this), text, fontId, textColor, a5, a6, a7);

		const auto layer = reinterpret_cast<yuka::Layer*>(this);

		auto* sprite = make_new<yuka::Sprite>();
		YSprite_CreateFromChar(sprite, text, layer->cursorX, layer->cursorY, fontId, textColor, a5, a6, a7);
		sprite->field_0 = true;
		YLayer_AddSprite(layer, sprite);
		YGraphicsContext_Invalidate(layer->graphics,
			static_cast<int>(layer->spriteOffsetX) + sprite->x,
			static_cast<int>(layer->spriteOffsetY) + sprite->y,
			static_cast<int>(layer->spriteOffsetX) + sprite->x + sprite->w,
			static_cast<int>(layer->spriteOffsetY) + sprite->y + sprite->h);

		layer->cursorX += measure_first_char(text, layer->fontId);

		if(layer->cursorXLimit && layer->cursorX >= layer->cursorXLimit)
		{
			const int lineHeight = GlobalFontTable[fontId].charHeight;
			layer->cursorX = layer->defaultCursorX;
			layer->cursorY += lineHeight;

			if(layer->cursorYLimit && layer->cursorY + lineHeight >= layer->cursorYLimit)
			{
				layer->cursorY = layer->defaultCursorY;
				layer->waitForNextPage = true;
			}
		}

		return true;
	}
};

void uif::features::yuka_engine_fixes::initialize()
{
	if(config().value("/yuka_process_text_hook/enable"_json_pointer, false))
	{
		enabled = true;

		get_address(0x0046FEFF, operator_new, "operator_new");

		get_address(0x00441640, ProcessText, "process_text");
		get_address(0x004311B0, HandleEscapeSequence_R, "handle_escape_sequence_r");
		get_address(0x00431400, HandleEscapeSequence_M, "handle_escape_sequence_m");
		get_address(0x004315B0, HandleEscapeSequence_GF, "handle_escape_sequence_gf");
		get_address(0x00431720, HandleEscapeSequence_OF, "handle_escape_sequence_of");

		get_address(0x00422F90, YMainWindow_RefreshSynced, "ymainwindow_refresh_synced");
		get_address(0x0040DDE0, YSync_WaitForRepaint, "ysync_wait_for_repaint");
		get_address(0x00410E70, YGraphicsContext_Invalidate, "ygraphics_context_invalidate");
		get_address(0x00403960, YFontInfo_MeasureText, "yfont_info_measure_text");
		get_address(0x004080F0, YSprite_CreateFromChar, "ysprite_create_from_char");
		get_address(0x00410FA0, YLayer_AddSprite, "ylayer_add_sprite");
		get_address(0x00414770, YLayer_AppendCharacterSprite, "ylayer_append_character_sprite");
		get_address(0x00413390, YLayer_AppendCharacterSpriteInternal, "ylayer_append_character_sprite_internal");

		get_address(0x00441540, f_KeyWait, "f_key_wait");
		get_address(0x0043F600, f_PF, "f_pf");
		get_address(0x00430670, f_LF, "f_lf");

		get_address(0x004C32C8, GlobalFontTable, "global_font_table");
		get_address(0x0054D608, GlobalMainWindow, "global_main_window");
		get_address(0x004C3F0C, GlobalSync, "global_sync");

		hooks::hook_function(this, ProcessText, ProcessTextHook, "yuka::ProcessText");
		hooks::hook_function(this, YLayer_AppendCharacterSpriteInternal, &DummyClass::AppendCharacterSpriteInternalHook, "yuka::Layer::AppendCharacterSpriteInternal");
	}
}

void uif::features::yuka_engine_fixes::finalize()
{
	if(enabled)
	{
		hooks::unhook_function(this, ProcessText, ProcessTextHook, "yuka::ProcessText");
		hooks::unhook_function(this, YLayer_AppendCharacterSpriteInternal, &DummyClass::AppendCharacterSpriteInternalHook, "yuka::Layer::AppendCharacterSpriteInternal");
	}
}

template <typename T>
void uif::features::yuka_engine_fixes::get_address(long fallback, T& target, const std::string& name)
{
	long offset = config().value("/yuka_process_text_hook/addresses/"_json_pointer / name, fallback);
	target = reinterpret_cast<T>(offset);
}
