#include "pch.h"
#include "yuka_engine_fixes.h"

#pragma comment(lib, "Winmm.lib")
#include <mmsystem.h>

#include "config.h"
#include "hooks.h"
#include "utils.h"

static void* (__cdecl* operator_new)(size_t Size);
template<typename T>
static T* make_new()
{
	void* ptr = operator_new(sizeof(T));
	memset(ptr, 0, sizeof(T));
	return static_cast<T*>(ptr);
}

static int(__cdecl* ProcessText)(yuka::Layer* layer, const char* text, yuka::ScriptContext* ctx);
static int(__cdecl* HandleControlSequence_R)(yuka::Layer* messageLayer, const char* text);
static int(__cdecl* HandleControlSequence_M)(yuka::Layer* messageLayer, const char* text);
static int(__cdecl* HandleControlSequence_GF)(yuka::Layer* messageLayer, const char* text);
static int(__cdecl* HandleControlSequence_OF)(yuka::Layer* messageLayer, const char* text);
static bool(__cdecl* RestoreDisplayMode)();
static void(__cdecl* LoadCursors)();

static void(__thiscall* YWindow_RefreshSynced)(yuka::Window* this_);
static bool(__thiscall* YWindow_SetWindowMode)(yuka::Window* this_, bool fullscreen);
static void(__thiscall* YWindow_AdjustWindowRect)(yuka::Window* this_, RECT* rect);
static LRESULT(__thiscall* YMainWindow_WindowProc)(yuka::Window* this_, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
static void(__thiscall* YWindow_Repaint)(yuka::Window* this_, RECT* area);
static bool(__thiscall* YWindow_Create)(yuka::Window* this_);
static void(__thiscall* YRenderThread_WaitForRepaint)(yuka::RenderThread* this_);
static void(__thiscall* YGraphicsContext_Invalidate)(yuka::GraphicsContext* this_, int x1, int y1, int x2, int y2);
static yuka::Layer* (__thiscall* YGraphicsContext_FindLayer)(yuka::GraphicsContext* this_, int layerId);
static yuka::Layer* (__thiscall* YGraphicsContext_CreateLayer)(yuka::GraphicsContext* this_, int layerId);
static bool(__thiscall* YGraphicsContext_DestroyLayer)(yuka::GraphicsContext* this_, int layerId);
static bool(__thiscall* YFontInfo_MeasureText)(yuka::FontInfo* this_, const char* text, SIZE* pSize);
static bool(__thiscall* YSprite_CreateFromChar)(yuka::Sprite* this_, const char* text, int x, int y, int fontId, int textColor, int fontEffect, int shadowColor, int borderColor);
static bool(__thiscall* YSprite_CreateFromString)(yuka::Sprite* this_, const char* text, int x, int y, int fontId, int textColor, int fontEffect, int shadowColor, int borderColor);
static bool(__thiscall* YLayer_SetVisible)(yuka::Layer* this_, bool visible);
static bool(__thiscall* YLayer_AddSprite)(yuka::Layer* this_, yuka::Sprite* sprite);
static yuka::Sprite* (__thiscall* YLayer_AddStringSprite)(yuka::Layer* this_, const char* text, int fontId, int textColor, int x, int y, int fontEffect, int shadowColor, int borderColor);
static bool(__thiscall* YLayer_AppendCharacterSprite)(yuka::Layer* this_, const char* text);
static bool(__thiscall* YLayer_AppendCharacterSpriteInternal)(yuka::Layer* this_, const char* text, int fontId, int textColor, int fontEffect, int shadowColor, int borderColor);
static bool(__thiscall* YLayer_DestroyAllSprites)(yuka::Layer* this_);
static bool(__thiscall* YLayer_DestroySprite)(yuka::Layer* this_, yuka::Sprite* sprite);

static yuka::ScriptValue* (__cdecl* f_TextBoxSet)(yuka::ScriptContext* ctx, int argc, const void** argv);
static yuka::ScriptValue* (__cdecl* f_TextBoxDelete)(yuka::ScriptContext* ctx, int argc, const void** argv);
static yuka::ScriptValue* (__cdecl* f_TextBoxStringGet)(yuka::ScriptContext* ctx, int argc, const void** argv);
static yuka::ScriptValue* (__cdecl* f_TextBoxStringSet)(yuka::ScriptContext* ctx, int argc, const void** argv);
static yuka::ScriptValue* (__cdecl* f_GraphicLoad)(yuka::ScriptContext* ctx, int argc, const void** argv);
static yuka::ScriptValue* (__cdecl* f_GraphicLoadHide)(yuka::ScriptContext* ctx, int argc, const void** argv);
static yuka::ScriptValue* (__cdecl* f_KeyWait)(yuka::ScriptContext* ctx, int argc, const void** argv);
static yuka::ScriptValue* (__cdecl* f_StrOut)(yuka::ScriptContext* ctx, int argc, const void** argv);
static yuka::ScriptValue* (__cdecl* f_StrOutNW)(yuka::ScriptContext* ctx, int argc, const void** argv);
static yuka::ScriptValue* (__cdecl* f_StrOutNWC)(yuka::ScriptContext* ctx, int argc, const void** argv);
static yuka::ScriptValue* (__cdecl* f_PF)(yuka::ScriptContext* ctx, int argc, const void** argv);
static yuka::ScriptValue* (__cdecl* f_LF)(yuka::ScriptContext* ctx, int argc, const void** argv);

static yuka::FontInfo* GlobalFontTable;
static yuka::Window* GlobalMainWindow;
static yuka::RenderThread* GlobalRenderThread;
static yuka::Game* GameGlobals;

class CriticalLock {
	CRITICAL_SECTION* section;

public:
	CriticalLock(CRITICAL_SECTION& cs) : section(&cs)
	{
		EnterCriticalSection(section);
	}

	~CriticalLock()
	{
		LeaveCriticalSection(section);
	}
};

static int measure_first_char(const char* text, int fontId)
{
	char ch[] = { *text, 0, 0 };
	if (IsDBCSLeadByteEx(932, *text)) ch[1] = text[1];
	SIZE size;
	YFontInfo_MeasureText(&GlobalFontTable[fontId], ch, &size);
	return size.cx;
}

static std::string baseWindowTitle{};
static std::string lastWindowTitle{};

static int __cdecl HandleControlSequence_L(yuka::Layer* messageLayer, const char* text)
{
	if (text[0] != '@' || text[1] != 'l' || text[2] != '(')
		return 1;

	const char* start = &text[3];
	const char* end = strchr(text, ')');

	if (end == nullptr) return 1;

	const int len = end - start;

	//__debugbreak();

	const int oldWindowTitleLength = GetWindowTextLengthA(GlobalMainWindow->hWnd);
	std::string oldWindowTitle{};
	oldWindowTitle.resize(oldWindowTitleLength + 1);
	GetWindowTextA(GlobalMainWindow->hWnd, oldWindowTitle.data(), oldWindowTitleLength + 1);
	oldWindowTitle.resize(strlen(oldWindowTitle.c_str()));

	//std::cout << "last: " << lastWindowTitle << '\n';
	//std::cout << "base: " << baseWindowTitle << '\n';

	if (lastWindowTitle != oldWindowTitle) {
		baseWindowTitle.assign(oldWindowTitle);
	}

	std::string newWindowTitle{};
	newWindowTitle.append(baseWindowTitle);
	newWindowTitle.append(" [");
	newWindowTitle.append(start, end);
	newWindowTitle.append("]");

	lastWindowTitle.assign(newWindowTitle);
	SetWindowTextA(GlobalMainWindow->hWnd, newWindowTitle.c_str());

	//std::cout << "old: " << oldWindowTitle << '\n';
	//std::cout << "new: " << newWindowTitle << '\n';

	//std::cout << std::string(start, end) << '\n';

	return end - text + 1;
}

static int __cdecl HandleControlSequence_R2(yuka::Layer* messageLayer, const char* text)
{
	if (text[0] != '@' || text[1] != 'r' || text[2] != '(')
		return 1;

	const char* start = &text[3];
	const char* comma = strchr(text, ',');
	const char* end = strchr(text, ')');

	if (comma == nullptr || end == nullptr) return 1;

	const std::string charCountText(start, comma - start);
	const std::string rubyText(comma + 1, end - comma - 1);

	const int charCount = strtol(charCountText.c_str(), nullptr, 10);

	const char* textPtr = end + 1;
	for (int i = 0; i < charCount; i++)
	{
		if (!*textPtr) break;
		textPtr += IsDBCSLeadByteEx(932, *textPtr) ? 2 : 1;
	}

	const std::string measureText(end + 1, textPtr);

	SIZE baseSize, rubySize;
	YFontInfo_MeasureText(&GlobalFontTable[messageLayer->fontId], measureText.c_str(), &baseSize);
	YFontInfo_MeasureText(&GlobalFontTable[GameGlobals->rubyFontId], rubyText.c_str(), &rubySize);

	int posX = messageLayer->cursorX + (baseSize.cx - rubySize.cx) / 2;
	int posY = messageLayer->cursorY - rubySize.cy;

	//__debugbreak();

	auto* sprite = make_new<yuka::Sprite>();
	YSprite_CreateFromString(sprite, rubyText.c_str(), posX, posY, GameGlobals->rubyFontId, messageLayer->textColor, messageLayer->fontEffect, messageLayer->shadowColor, messageLayer->borderColor);
	sprite->isVisible = true;
	YLayer_AddSprite(messageLayer, sprite);
	YGraphicsContext_Invalidate(messageLayer->graphics,
		static_cast<int>(messageLayer->offsetX) + sprite->x - 1,
		static_cast<int>(messageLayer->offsetY) + sprite->y - 1,
		static_cast<int>(messageLayer->offsetX) + sprite->x + sprite->w + 1,
		static_cast<int>(messageLayer->offsetY) + sprite->y + sprite->h + 1);

	//const int cursorX = messageLayer->cursorX;
	//const int cursorY = messageLayer->cursorY;
	//const int cursorWithoutAutoWrapX = messageLayer->cursorWithoutAutoWrapX;
	//const int cursorWithoutAutoWrapY = messageLayer->cursorWithoutAutoWrapY;

	//messageLayer->cursorX = cursorX;
	//messageLayer->cursorY = cursorY;
	//messageLayer->cursorWithoutAutoWrapX = cursorWithoutAutoWrapX;
	//messageLayer->cursorWithoutAutoWrapY = cursorWithoutAutoWrapY;

	return end - text + 1;
}

static int __cdecl ProcessTextHook(yuka::Layer* layer, const char* text, yuka::ScriptContext* ctx)
{
	//std::cout << "ProcessText: " << text << "\n";

	if (text == nullptr || *text == '\0')
		return 0;

	if (layer == nullptr)
		return static_cast<int>(strlen(text));

	if (layer->waitForNextPage)
	{
		YWindow_RefreshSynced(GlobalMainWindow);
		const bool wasDrawingSuspended = GlobalMainWindow->isDrawingSuspended;
		GlobalMainWindow->isDrawingSuspended = false;
		YRenderThread_WaitForRepaint(GlobalRenderThread);

		const std::string temp{ ctx->currentVoiceClipName.value };

		f_KeyWait(ctx, 0, nullptr);

		int messageLayerId = ctx->messageLayerId;
		const void* params[16] = { &messageLayerId };

		f_PF(ctx, 1, params);

		layer->cursorX = layer->textArea.left;
		layer->cursorY = layer->textArea.top;
		layer->waitForNextPage = false;

		ctx->currentVoiceClipName.value.assign(temp);

		YWindow_RefreshSynced(GlobalMainWindow);
		GlobalMainWindow->isDrawingSuspended = wasDrawingSuspended;
	}

	if (*text == '@')
	{
		if (text[1] == 'r')
			return HandleControlSequence_R2(layer, text);

		if (text[1] == 'm')
			return HandleControlSequence_M(layer, text);

		if (text[1] == 'l')
			return HandleControlSequence_L(layer, text);

		if (text[1] == 'g' && text[2] == 'f')
			return HandleControlSequence_GF(layer, text);

		if (text[1] == 'o' && text[2] == 'f')
			return HandleControlSequence_OF(layer, text);
	}

	// calculate width of next word
	int width = 0;
	for (int i = 0; text[i]; ++i)
	{
		if (text[i] <= ' ')
			break;

		width += measure_first_char(&text[i], layer->fontId);
		if (IsDBCSLeadByteEx(932, text[i])) i++;
	}

	// emit a line break if the word would overflow the line
	if (layer->textArea.right && layer->cursorX + width >= layer->textArea.right)
	{
		const int lineHeight = GlobalFontTable[layer->fontId].charHeight;
		layer->cursorX = layer->textArea.left;
		layer->cursorY += lineHeight;

		if (layer->textArea.bottom && layer->cursorY + lineHeight >= layer->textArea.bottom)
		{
			layer->cursorY = layer->textArea.top;
			layer->waitForNextPage = true;
		}
	}

	// skip whitespace at the start of a line
	if (text[0] == ' ' && layer->cursorX == layer->textArea.left)
		return 1;

	YLayer_AppendCharacterSprite(layer, text);
	return IsDBCSLeadByteEx(932, *text) ? 2 : 1;
}

#pragma region TextBox

constexpr int textBoxLayerId = 998;

bool textBoxActive = false;
int textBoxX{};
int textBoxY{};
int textBoxW{};
int textBoxH{};
std::string textBoxContents{};
HFONT textBoxFont{};

void DeleteTextBox()
{
	CriticalLock lock(GlobalRenderThread->thread.criticalSection);

	if (!textBoxActive) return;

	textBoxContents.clear();
	textBoxActive = false;

	YGraphicsContext_DestroyLayer(GlobalMainWindow->graphics, textBoxLayerId);

	DeleteObject(textBoxFont);
	textBoxFont = nullptr;
}

void CreateTextBox(yuka::ScriptContext* ctx, int x, int y, int w, int h, int textColor, int fontId, int fontEffect, int shadowColor, int borderColor)
{
	CriticalLock lock(GlobalRenderThread->thread.criticalSection);

	DeleteTextBox();

	textBoxActive = true;
	textBoxX = x;
	textBoxY = y;
	textBoxW = w;
	textBoxH = h;

	int zero = 0;
	const void* params[16] = { &textBoxLayerId, "ykg\\system\\damy.ykg", &zero, &zero };
	f_GraphicLoad(ctx, 4, params);

	const auto layer = YGraphicsContext_FindLayer(GlobalMainWindow->graphics, textBoxLayerId);
	if (layer == nullptr) return;

	SetRect(&layer->textArea, textBoxX, textBoxY, textBoxX + textBoxW, textBoxY + textBoxH);
	layer->cursorX = layer->cursorWithoutAutoWrapX = layer->textArea.left;
	layer->cursorY = layer->cursorWithoutAutoWrapY = layer->textArea.top;
	layer->fontId = fontId >= 0 ? fontId : ctx->messageLayer->fontId;
	layer->fontEffect = fontEffect >= 0 ? fontEffect : ctx->messageLayer->fontEffect;
	layer->textColor = textColor >= 0 ? textColor : ctx->messageLayer->textColor;
	layer->shadowColor = borderColor >= 0 ? borderColor : ctx->messageLayer->shadowColor;
	layer->borderColor = shadowColor >= 0 ? shadowColor : ctx->messageLayer->borderColor;
}

bool TryAppendTextBoxCharSprite(int ch, bool force = false)
{
	CriticalLock lock(GlobalRenderThread->thread.criticalSection);

	if (!textBoxActive) return false;
	if (ch < ' ' || ch > '~') return false;
	const char text[] = { static_cast<char>(ch), 0 };

	const auto layer = YGraphicsContext_FindLayer(GlobalMainWindow->graphics, textBoxLayerId);
	if (layer == nullptr) return false;

	SIZE size;
	YFontInfo_MeasureText(&GlobalFontTable[layer->fontId], text, &size);

	if (!force && layer->cursorX + size.cx >= layer->textArea.right) return false;

	auto* sprite = make_new<yuka::Sprite>();
	YSprite_CreateFromChar(sprite, text, layer->cursorX, layer->cursorY, layer->fontId, layer->textColor, layer->fontEffect, layer->shadowColor, layer->borderColor);
	sprite->isVisible = true;
	YLayer_AddSprite(layer, sprite);

	layer->cursorX += size.cx;

	return true;
}

bool TryRemoveLastTextBoxCharSprite()
{
	CriticalLock lock(GlobalRenderThread->thread.criticalSection);

	if (!textBoxActive) return false;

	const auto layer = YGraphicsContext_FindLayer(GlobalMainWindow->graphics, textBoxLayerId);
	if (layer == nullptr) return false;

	if (layer->spriteCount == 0) return false;

	const auto sprite = layer->sprites[layer->spriteCount - 1];

	SIZE size;
	YFontInfo_MeasureText(&GlobalFontTable[layer->fontId], &sprite->character, &size);
	
	layer->cursorX -= size.cx;
	YLayer_DestroySprite(layer, sprite);

	return true;
}

void ReplaceTextBoxText(const char* ch)
{
	if (!textBoxActive) return;

	const auto layer = YGraphicsContext_FindLayer(GlobalMainWindow->graphics, textBoxLayerId);
	if (layer == nullptr) return;

	textBoxContents.clear();
	YLayer_DestroyAllSprites(layer);
	layer->cursorX = layer->cursorWithoutAutoWrapX = layer->textArea.left;
	layer->cursorY = layer->cursorWithoutAutoWrapY = layer->textArea.top;

	while (*ch)
	{
		TryAppendTextBoxCharSprite(*ch++, true);
	}
}

LRESULT __cdecl TextBoxWindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	if (!textBoxActive) return false;

	switch (msg)
	{
	case WM_CHAR:
		if (TryAppendTextBoxCharSprite(wParam))
		{
			const char text[] = { static_cast<char>(wParam), 0 };
			textBoxContents.append(text);
		}
		else if (wParam != 8 && wParam != 10)
		{
			PlaySoundA("DeviceConnect", nullptr, SND_ALIAS | SND_ASYNC);
		}
		return true;

	case WM_KEYDOWN:
		if (wParam == VK_BACK)
		{
			if (TryRemoveLastTextBoxCharSprite())
			{
				textBoxContents.resize(textBoxContents.size() - 1);
			}
			else
			{
				PlaySoundA("DeviceConnect", nullptr, SND_ALIAS | SND_ASYNC);
			}
		}
	}

	return false;
}

static yuka::ScriptValue* __cdecl f_TextBoxSetHook(yuka::ScriptContext* ctx, int argc, void** argv)
{
	if (argc < 4)
	{
		DeleteTextBox();
	}
	else
	{
		const int x = *static_cast<int*>(argv[0]);
		const int y = *static_cast<int*>(argv[1]);
		const int w = *static_cast<int*>(argv[2]);
		const int h = *static_cast<int*>(argv[3]);
		const int textColor = argc >= 5 ? *static_cast<int*>(argv[4]) : -1;
		const int fontId = argc >= 6 ? *static_cast<int*>(argv[5]) : -1;
		const int fontEffect = argc >= 7 ? *static_cast<int*>(argv[6]) : -1;
		const int shadowColor = argc >= 8 ? *static_cast<int*>(argv[7]) : -1;
		const int borderColor = argc >= 9 ? *static_cast<int*>(argv[8]) : -1;

		CreateTextBox(ctx, x, y, w, h, textColor, fontId, fontEffect, shadowColor, borderColor);
	}

	return nullptr;
}

static yuka::ScriptValue* __cdecl f_TextBoxDeleteHook(yuka::ScriptContext* ctx, int argc, void** argv)
{
	DeleteTextBox();
	return nullptr;
}

static yuka::ScriptValue* __cdecl f_TextBoxStringGetHook(yuka::ScriptContext* ctx, int argc, void** argv)
{
	const auto result = make_new<yuka::ScriptValue>();
	const auto length = textBoxContents.size();
	const auto string = static_cast<char*>(operator_new(length + 1));

	strcpy_s(string, length + 1, textBoxContents.c_str());

	result->type = yuka::VT_Str;
	result->stringValue = string;

	return result;
}

static yuka::ScriptValue* __cdecl f_TextBoxStringSetHook(yuka::ScriptContext* ctx, int argc, void** argv)
{
	if (argc < 1) return nullptr;

	ReplaceTextBoxText(static_cast<char*>(argv[0]));

	return nullptr;
}

#pragma endregion TextBox

// dummy class is necessary because C++ won't allow me to declare the function as __thiscall otherwise
class YLayer
{
public:
	bool __thiscall AppendCharacterSpriteInternal(const char* text, int fontId, int textColor, int fontEffect, int shadowColor, int borderColor)
	{
		//std::cout << "AppendCharacterSpriteInternalHook: " << text << "\n";
		//return yuka::YLayer_AppendCharacterSpriteInternal(reinterpret_cast<yuka::Layer*>(this), text, fontId, textColor, a5, a6, a7);

		const auto layer = reinterpret_cast<yuka::Layer*>(this);

		auto* sprite = make_new<yuka::Sprite>();
		YSprite_CreateFromChar(sprite, text, layer->cursorX, layer->cursorY, fontId, textColor, fontEffect, shadowColor, borderColor);
		sprite->isVisible = true;
		YLayer_AddSprite(layer, sprite);
		YGraphicsContext_Invalidate(layer->graphics,
			static_cast<int>(layer->offsetX) + sprite->x,
			static_cast<int>(layer->offsetY) + sprite->y,
			static_cast<int>(layer->offsetX) + sprite->x + sprite->w,
			static_cast<int>(layer->offsetY) + sprite->y + sprite->h);

		layer->cursorX += measure_first_char(text, layer->fontId);

		layer->cursorWithoutAutoWrapX = layer->cursorX;
		layer->cursorWithoutAutoWrapY = layer->cursorY;

		if (layer->textArea.right && layer->cursorX >= layer->textArea.right)
		{
			const int lineHeight = GlobalFontTable[fontId].charHeight;
			layer->cursorX = layer->textArea.left;
			layer->cursorY += lineHeight;

			if (layer->textArea.bottom && layer->cursorY + lineHeight >= layer->textArea.bottom)
			{
				layer->cursorY = layer->textArea.top;
				layer->waitForNextPage = true;
			}
		}

		return true;
	}
};

class YWindow {
public:
	bool __thiscall SetWindowMode(bool fullscreen)
	{
		const auto window = reinterpret_cast<yuka::Window*>(this);
		const auto hWnd = window->hWnd;
		const int screenWidth = GetSystemMetrics(SM_CXSCREEN);
		const int screenHeight = GetSystemMetrics(SM_CYSCREEN);
		GameGlobals->fullscreenWindowSize = { screenWidth, screenHeight };

		GameGlobals->isFullscreen = fullscreen;

		if (fullscreen)
		{
			CalculateViewport(screenWidth, screenHeight);

			HMONITOR hmon = MonitorFromWindow(hWnd, MONITOR_DEFAULTTONEAREST);
			MONITORINFO mi = { sizeof mi };
			if (!GetMonitorInfo(hmon, &mi)) return false;

			const int x = mi.rcMonitor.left;
			const int y = mi.rcMonitor.top;
			const int w = mi.rcMonitor.right - x;
			const int h = mi.rcMonitor.bottom - y;

			SetWindowLongA(hWnd, GWL_STYLE, WS_POPUP | WS_VISIBLE);
			SetWindowPos(hWnd, nullptr, x, y, w, h, SWP_DRAWFRAME | SWP_NOZORDER);
		}
		else
		{
			if (RestoreDisplayMode())
			{
				if (GameGlobals->isWindowResized && GameGlobals->resizedWindowWidth && GameGlobals->resizedWindowHeight)
				{
					window->viewportWidth = GameGlobals->resizedWindowWidth;
					window->viewportHeight = GameGlobals->resizedWindowHeight;
				}
				else
				{
					window->viewportWidth = GameGlobals->resolutionX2;
					window->viewportHeight = GameGlobals->resolutionY2;
				}

				GameGlobals->pillarBoxSize = 0;
				GameGlobals->letterBoxSize = 0;

				window->x = (screenWidth - window->viewportWidth) / 2;
				window->y = (screenHeight - window->viewportHeight) / 2;

				RECT windowRect{ window->x, window->y, window->x + window->viewportWidth, window->y + window->viewportHeight };
				YWindow_AdjustWindowRect(window, &windowRect);

				SetWindowLongA(hWnd, GWL_STYLE, window->style);
				SetWindowPos(hWnd,
					HWND_NOTOPMOST,
					windowRect.left,
					windowRect.top,
					windowRect.right - windowRect.left,
					windowRect.bottom - windowRect.top,
					SWP_SHOWWINDOW);
			}
		}

		if (window->graphics)
		{
			YGraphicsContext_Invalidate(window->graphics, 0, 0, GameGlobals->resolutionX, GameGlobals->resolutionY);
		}
		LoadCursors();
		return true;
	}

	LRESULT __thiscall MainWindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
	{
		const auto window = reinterpret_cast<yuka::Window*>(this);

		if (const LRESULT textBoxResult = TextBoxWindowProc(hWnd, msg, wParam, lParam)) {
			return textBoxResult;
		}

		switch (msg)
		{
		case WM_SIZING:
		{
			const auto rect = reinterpret_cast<LPRECT>(lParam);

			constexpr int minClientWidth = 800;
			constexpr int minClientHeight = 600;

			RECT adjustRect;
			SetRectEmpty(&adjustRect);
			AdjustWindowRect(&adjustRect, GetWindowLongA(hWnd, GWL_STYLE), false);

			const int adjustWidth = adjustRect.right - adjustRect.left;
			const int adjustHeight = adjustRect.bottom - adjustRect.top;

			const int clientWidth = rect->right - rect->left - adjustWidth;
			const int clientHeight = rect->bottom - rect->top - adjustHeight;

			if (clientWidth < minClientWidth)
			{
				switch (wParam)
				{
				case WMSZ_LEFT:
				case WMSZ_BOTTOMLEFT:
				case WMSZ_TOPLEFT:
					rect->left = rect->right - minClientWidth - adjustWidth;
					break;

				default:
					rect->right = rect->left + minClientWidth + adjustWidth;
					break;
				}
			}

			if (clientHeight < minClientHeight)
			{
				switch (wParam)
				{
				case WMSZ_TOP:
				case WMSZ_TOPLEFT:
				case WMSZ_TOPRIGHT:
					rect->top = rect->bottom - minClientHeight - adjustHeight;
					break;

				default:
					rect->bottom = rect->top + minClientHeight + adjustHeight;
					break;
				}
			}
			break;
		}


		case WM_SIZE: {
			GameGlobals->isWindowResized = true;
			const int width = LOWORD(lParam);
			const int height = HIWORD(lParam);
			CalculateViewport(width, height);
			if (!GameGlobals->isFullscreen)
			{
				GameGlobals->resizedWindowWidth = width;
				GameGlobals->resizedWindowHeight = height;
			}
			return TRUE;
		}

		default:
			return YMainWindow_WindowProc(window, hWnd, msg, wParam, lParam);
		}
	}

	void __thiscall Repaint(RECT* area)
	{
		const auto window = reinterpret_cast<yuka::Window*>(this);

		if (window->field_1E5 == 1)
			return;

		const int resX = window->surfaces[0].width;
		const int resY = window->surfaces[0].height;

		const auto dstDc = GetDC(window->hWnd);
		const auto srcDc = CreateCompatibleDC(nullptr);
		const auto prevBitmap = SelectObject(srcDc, window->surfaces[0].bitmap);

		PaintBlackBars(dstDc);

		if (window->viewportWidth == resX && window->viewportHeight == resY)
		{
			BitBlt(
				dstDc,
				GameGlobals->pillarBoxSize,
				GameGlobals->letterBoxSize,
				resX,
				resY,
				srcDc,
				0,
				0,
				0xCC0020u);
		}
		else
		{
			SetStretchBltMode(dstDc, STRETCH_HALFTONE);
			SetBrushOrgEx(dstDc, 0, 0, nullptr);
			StretchBlt(
				dstDc,
				GameGlobals->pillarBoxSize,
				GameGlobals->letterBoxSize,
				window->viewportWidth,
				window->viewportHeight,
				srcDc,
				0,
				0,
				window->surfaces[0].width,
				window->surfaces[0].height,
				0xCC0020u);
		}

		SelectObject(srcDc, prevBitmap);
		DeleteDC(srcDc);
		ReleaseDC(window->hWnd, dstDc);
	}

	bool __thiscall Create()
	{
		const auto window = reinterpret_cast<yuka::Window*>(this);

		if (strcmp(window->className, "YukaWindowClass") == 0)
		{
			window->style = WS_OVERLAPPEDWINDOW;
		}

		return YWindow_Create(window);
	}

private:
	void __thiscall CalculateViewport(int width, int height)
	{
		const auto window = reinterpret_cast<yuka::Window*>(this);

		const int resW = window->surfaces[0].width;
		const int resH = window->surfaces[0].height;

		const double scale = std::min(static_cast<double>(width) / resW, static_cast<double>(height) / resH);
		const int scaledW = static_cast<int>(resW * scale);
		const int scaledH = static_cast<int>(resH * scale);

		window->viewportWidth = scaledW;
		window->viewportHeight = scaledH;

		GameGlobals->pillarBoxSize = (width - scaledW) / 2;
		GameGlobals->letterBoxSize = (height - scaledH) / 2;
	}

	void __thiscall PaintBlackBars(HDC dstDc)
	{
		const auto window = reinterpret_cast<yuka::Window*>(this);

		const auto blackBrush = static_cast<HBRUSH>(GetStockObject(BLACK_BRUSH));

		const int vl = GameGlobals->pillarBoxSize;
		const int vt = GameGlobals->letterBoxSize;
		const int vr = window->viewportWidth + vl;
		const int vb = window->viewportHeight + vt;

		RECT client{};
		GetClientRect(window->hWnd, &client);

		const int cl = client.left;
		const int ct = client.top;
		const int cr = client.right;
		const int cb = client.bottom;

		RECT rc;

		// left pillar
		SetRect(&rc, cl, ct, vl, cb);
		FillRect(dstDc, &rc, blackBrush);

		// right pillar
		SetRect(&rc, vr, ct, cr, cb);
		FillRect(dstDc, &rc, blackBrush);

		// top center
		SetRect(&rc, vl, ct, vr, vt);
		FillRect(dstDc, &rc, blackBrush);

		// bottom center
		SetRect(&rc, vl, vb, vr, cb);
		FillRect(dstDc, &rc, blackBrush);
	}
};

void uif::features::yuka_engine_fixes::initialize()
{
	get_address(0x0046FEFF, operator_new, "operator_new");

	get_address(0x00441640, ProcessText, "process_text");
	get_address(0x004311B0, HandleControlSequence_R, "handle_control_sequence_r");
	get_address(0x00431400, HandleControlSequence_M, "handle_control_sequence_m");
	get_address(0x004315B0, HandleControlSequence_GF, "handle_control_sequence_gf");
	get_address(0x00431720, HandleControlSequence_OF, "handle_control_sequence_of");
	get_address(0x00406140, RestoreDisplayMode, "restore_display_mode");
	get_address(0x00428210, LoadCursors, "load_cursors");

	get_address(0x0040E990, YMainWindow_WindowProc, "ymainwindow_window_proc");
	get_address(0x00422F90, YWindow_RefreshSynced, "ywindow_refresh_synced");
	get_address(0x00417A20, YWindow_SetWindowMode, "ywindow_set_window_mode");
	get_address(0x00417950, YWindow_AdjustWindowRect, "ywindow_adjust_window_rect");
	get_address(0x00417770, YWindow_Create, "ywindow_create");
	get_address(0x00417E40, YWindow_Repaint, "ywindow_repaint");
	get_address(0x0040DDE0, YRenderThread_WaitForRepaint, "yrenderthread_wait_for_repaint");
	get_address(0x00410E70, YGraphicsContext_Invalidate, "ygraphics_context_invalidate");
	get_address(0x00410D40, YGraphicsContext_FindLayer, "ygraphics_context_find_layer");
	get_address(0x00410BF0, YGraphicsContext_CreateLayer, "ygraphics_context_create_layer");
	get_address(0x00414550, YGraphicsContext_DestroyLayer, "ygraphics_context_destroy_layer");
	get_address(0x00403960, YFontInfo_MeasureText, "yfont_info_measure_text");
	get_address(0x004080F0, YSprite_CreateFromChar, "ysprite_create_from_char");
	get_address(0x00408170, YSprite_CreateFromString, "ysprite_create_from_string");
	get_address(0x00413C20, YLayer_SetVisible, "ylayer_set_visible");
	get_address(0x00410FA0, YLayer_AddSprite, "ylayer_add_sprite");
	get_address(0x00414770, YLayer_AppendCharacterSprite, "ylayer_append_character_sprite");
	get_address(0x00413390, YLayer_AppendCharacterSpriteInternal, "ylayer_append_character_sprite_internal");
	get_address(0x00413880, YLayer_AddStringSprite, "ylayer_add_string_sprite");
	get_address(0x00413A50, YLayer_DestroyAllSprites, "ylayer_destroy_all_sprites");
	get_address(0x00413B20, YLayer_DestroySprite, "ylayer_destroy_sprite");

	get_address(0x00439A20, f_TextBoxSet, "f_text_box_set");
	get_address(0x00431B30, f_TextBoxDelete, "f_text_box_delete");
	get_address(0x00431B50, f_TextBoxStringGet, "f_text_box_string_get");
	get_address(0x00431C00, f_TextBoxStringSet, "f_text_box_string_set");
	get_address(0x00439B00, f_GraphicLoad, "f_graphic_load");
	get_address(0x0043A0C0, f_GraphicLoadHide, "f_graphic_load_hide");
	get_address(0x00441540, f_KeyWait, "f_key_wait");
	get_address(0x00441AB0, f_StrOut, "f_str_out");
	get_address(0x00441D30, f_StrOutNW, "f_str_out_nw");
	get_address(0x00441D70, f_StrOutNWC, "f_str_out_nwc");
	get_address(0x0043F600, f_PF, "f_pf");
	get_address(0x00430670, f_LF, "f_lf");

	get_address(0x004C32C8, GlobalFontTable, "global_font_table");
	get_address(0x0054D608, GlobalMainWindow, "global_main_window");
	get_address(0x004C3F0C, GlobalRenderThread, "global_render_thread");
	get_address(0x0054ED18, GameGlobals, "game_globals");

	hooks::hook_function(this, ProcessText, ProcessTextHook, "yuka::ProcessText");
	hooks::hook_function(this, YLayer_AppendCharacterSpriteInternal, &YLayer::AppendCharacterSpriteInternal, "yuka::Layer::AppendCharacterSpriteInternal");
	hooks::hook_function(this, YMainWindow_WindowProc, &YWindow::MainWindowProc, "yuka::MainWindow::WindowProc");
	hooks::hook_function(this, YWindow_SetWindowMode, &YWindow::SetWindowMode, "yuka::Window::SetWindowMode");
	hooks::hook_function(this, YWindow_Repaint, &YWindow::Repaint, "yuka::Window::Repaint");
	hooks::hook_function(this, YWindow_Create, &YWindow::Create, "yuka::Window::Create");
	hooks::hook_function(this, f_TextBoxSet, f_TextBoxSetHook, "yuka::f_TextBoxSet");
	hooks::hook_function(this, f_TextBoxDelete, f_TextBoxDeleteHook, "yuka::f_TextBoxDelete");
	hooks::hook_function(this, f_TextBoxStringGet, f_TextBoxStringGetHook, "yuka::f_TextBoxStringGet");
	hooks::hook_function(this, f_TextBoxStringSet, f_TextBoxStringSetHook, "yuka::f_TextBoxStringSet");
}

void uif::features::yuka_engine_fixes::finalize()
{
	hooks::unhook_function(this, ProcessText, ProcessTextHook, "yuka::ProcessText");
	hooks::unhook_function(this, YLayer_AppendCharacterSpriteInternal, &YLayer::AppendCharacterSpriteInternal, "yuka::Layer::AppendCharacterSpriteInternal");
	hooks::unhook_function(this, YMainWindow_WindowProc, &YWindow::MainWindowProc, "yuka::MainWindow::WindowProc");
	hooks::unhook_function(this, YWindow_SetWindowMode, &YWindow::SetWindowMode, "yuka::Window::SetWindowMode");
	hooks::unhook_function(this, YWindow_Repaint, &YWindow::Repaint, "yuka::Window::Repaint");
	hooks::unhook_function(this, YWindow_Create, &YWindow::Create, "yuka::Window::Create");
	hooks::unhook_function(this, f_TextBoxSet, f_TextBoxSetHook, "yuka::f_TextBoxSet");
	hooks::unhook_function(this, f_TextBoxDelete, f_TextBoxDeleteHook, "yuka::f_TextBoxDelete");
	hooks::unhook_function(this, f_TextBoxStringGet, f_TextBoxStringGetHook, "yuka::f_TextBoxStringGet");
	hooks::unhook_function(this, f_TextBoxStringSet, f_TextBoxStringSetHook, "yuka::f_TextBoxStringSet");
}

template <typename T>
void uif::features::yuka_engine_fixes::get_address(intptr_t fallback, T& target, const std::string& name)
{
	intptr_t offset = config().value("/addresses/"_json_pointer / name, fallback);
	target = reinterpret_cast<T>(offset);
}
