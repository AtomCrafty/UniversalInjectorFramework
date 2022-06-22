#include "pch.h"
#include "window_manager.h"

#include "ansi.h"
#include "config.h"
#include "encoding.h"
#include "hooks.h"
#include "injector.h"
#include "utils.h"

using namespace uif::ansi;

#pragma region Hooks

static LRESULT WINAPI DefWindowProcWHook(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	switch (Msg)
	{
	case WM_NCCREATE:
	{
		CREATESTRUCTW paramsW{};
		memcpy(&paramsW, reinterpret_cast<CREATESTRUCTW*>(lParam), sizeof(CREATESTRUCTW));

		const auto& windowMgr = uif::injector::instance().feature<uif::features::window_manager>();
		std::wstring windowTitle = paramsW.lpszName;
		windowMgr.process_title(windowTitle);
		paramsW.lpszName = windowTitle.c_str();

		return DefWindowProcW(hWnd, Msg, wParam, reinterpret_cast<LPARAM>(&paramsW));
	}

	case WM_SETTEXT:
	{
		const auto& windowMgr = uif::injector::instance().feature<uif::features::window_manager>();
		std::wstring windowTitle = reinterpret_cast<const wchar_t*>(lParam);
		windowMgr.process_title(windowTitle);
		return DefWindowProcW(hWnd, Msg, wParam, reinterpret_cast<LPARAM>(windowTitle.c_str()));
	}

	default:
		return DefWindowProcA(hWnd, Msg, wParam, lParam);
	}
}

static LRESULT WINAPI DefWindowProcAHook(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	switch (Msg)
	{
	case WM_NCCREATE:
	{
		const auto* paramsA = reinterpret_cast<CREATESTRUCTA*>(lParam);
		CREATESTRUCTW paramsW{};
		memcpy(&paramsW, paramsA, sizeof(CREATESTRUCTW));

		const auto className = encoding::shiftjis_to_utf16(paramsA->lpszClass);
		paramsW.lpszClass = className.c_str();

		const auto& windowMgr = uif::injector::instance().feature<uif::features::window_manager>();
		const auto windowTitle = windowMgr.process_title(paramsA->lpszName);
		paramsW.lpszName = windowTitle.c_str();

		return DefWindowProcW(hWnd, Msg, wParam, reinterpret_cast<LPARAM>(&paramsW));
	}

	case WM_SETTEXT:
	{
		const auto& windowMgr = uif::injector::instance().feature<uif::features::window_manager>();
		const auto windowTitle = windowMgr.process_title(reinterpret_cast<const char*>(lParam));
		return DefWindowProcW(hWnd, Msg, wParam, reinterpret_cast<LPARAM>(windowTitle.c_str()));
	}

	default:
		return DefWindowProcA(hWnd, Msg, wParam, lParam);
	}
}

#pragma endregion

static BOOL CALLBACK EnumWindowsProc(HWND hWnd, LPARAM lParam)
{
	auto* windows = reinterpret_cast<std::vector<HWND>*>(lParam);

	DWORD windowProcessId = 0;
	GetWindowThreadProcessId(hWnd, &windowProcessId);
	if (windowProcessId == GetCurrentProcessId())
		windows->push_back(hWnd);

	return TRUE;
}

void uif::features::window_manager::initialize()
{
	if (config().contains("overwrite_title"))
	{
		overwrite_title = true;
		overwrite_title_value = encoding::utf8_to_utf16(config().value("overwrite_title", ""));
	}

	if (config().value("process_existing_windows", false))
	{
		std::vector<HWND> windows{};
		EnumWindows(EnumWindowsProc, reinterpret_cast<LPARAM>(&windows));

		for (const auto window : windows)
		{
			std::string title;
			title.resize(1024);
			title.resize(GetWindowTextA(window, title.data(), static_cast<int>(title.length())));
			std::wstring processed = process_title(title);
			DefWindowProcW(window, WM_SETTEXT, 0, reinterpret_cast<LPARAM>(processed.c_str()));
		}
	}

	hooks::hook_import(this, "DefWindowProcA", DefWindowProcAHook);
	hooks::hook_import(this, "DefWindowProcW", DefWindowProcWHook);
}

void uif::features::window_manager::finalize()
{
	hooks::unhook_import(this, "DefWindowProcA", DefWindowProcAHook);
	hooks::unhook_import(this, "DefWindowProcW", DefWindowProcWHook);
}

std::wstring uif::features::window_manager::process_title(const std::string& title) const
{
	auto wide = utils::normalize(title);
	process_title_no_normalize(wide);
	return wide;
}

void uif::features::window_manager::process_title(std::wstring& title) const
{
	utils::normalize(title);
	process_title_no_normalize(title);
}

void uif::features::window_manager::process_title_no_normalize(std::wstring& title) const
{
	if (overwrite_title)
		title.assign(overwrite_title_value);
}
