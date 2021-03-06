#include "pch.h"
#include "file_monitor.h"

#include "ansi.h"
#include "config.h"
#include "encoding.h"
#include "hooks.h"
#include "injector.h"

using namespace uif::ansi;

static const wchar_t* tryGetRelativePath(const wchar_t* path)
{
	if(path[0] == '\0' || path[1] != ':')
		return path;

	wchar_t currentDirectory[MAX_PATH];
	GetCurrentDirectoryW(MAX_PATH, currentDirectory);

	const wchar_t* cd = currentDirectory;
	const wchar_t* pp = path;
	while(true)
	{
		auto ca = static_cast<wchar_t>(tolower(*cd));
		auto cb = static_cast<wchar_t>(tolower(*pp));
		if(cb == '\0') return path;
		if(ca == '\0') return pp + 1;
		if(ca == L'\\') ca = L'/';
		if(cb == L'\\') cb = L'/';
		if(ca != cb) return path;
		cd++;
		pp++;
	}
}

HANDLE __stdcall CreateFileWHook(
	LPCWSTR lpFileName,
	DWORD dwDesiredAccess,
	DWORD dwShareMode,
	LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	DWORD dwCreationDisposition,
	DWORD dwFlagsAndAttributes,
	HANDLE hTemplateFile)
{
	auto& monitor = uif::injector::instance().feature<uif::features::file_monitor>();
	std::wstring redirected;

	const auto* action = monitor.get_action(lpFileName, dwDesiredAccess);

	if(monitor.log_all || action && action->log)
	{
		std::cout << monitor << " Accessing ";
		std::wcout << yellow(tryGetRelativePath(lpFileName));
		std::cout << " [";
		if(dwDesiredAccess & GENERIC_READ) std::cout << 'R';
		if(dwDesiredAccess & GENERIC_WRITE) std::cout << 'W';
		if(dwDesiredAccess & GENERIC_EXECUTE) std::cout << 'X';
		std::cout << "]\n";
	}

	if(action) {
		if(action->breakpoint)
		{
			__debugbreak();
		}

		if(!action->redirect_path.empty())
		{
			std::cout << monitor;
			redirected = std::regex_replace(lpFileName, action->path_pattern, action->redirect_path);
			std::wcout << L" Redirecting " << yellow(tryGetRelativePath(lpFileName)) << L" to " << yellow(tryGetRelativePath(redirected.c_str())) << L'\n';
			lpFileName = redirected.c_str();
		}
	}

	return CreateFileW(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
}

HANDLE __stdcall CreateFileAHook(
	LPCSTR lpFileName,
	DWORD dwDesiredAccess,
	DWORD dwShareMode,
	LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	DWORD dwCreationDisposition,
	DWORD dwFlagsAndAttributes,
	HANDLE hTemplateFile)
{
	wchar_t path[MAX_PATH];
	MultiByteToWideChar(CP_ACP, 0, lpFileName, -1, path, MAX_PATH);
	return CreateFileWHook(path, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
}

void uif::features::file_monitor::initialize()
{
	log_all = config().value("log_all", false);

	if(config().contains("actions"))
	{
		const auto& actionArray = config()["actions"];
		if(actionArray.is_array())
		{
			for(auto& actionObject : actionArray)
			{
				if(!actionObject.is_object()) {
					std::cout << *this << dark_red(" Error:") << " expected object\n";
					continue;
				}

				const auto& pattern = encoding::utf8_to_utf16(actionObject.value("pattern", ""));
				const auto& path = encoding::utf8_to_utf16(actionObject.value("path", ""));

				if(path.empty() && pattern.empty())
				{
					std::cout << *this << dark_red(" Error:") << " no path or pattern specified\n";
					continue;
				}

				if(!path.empty() && !pattern.empty())
				{
					std::cout << *this << dark_yellow(" Warning:") << " both a path and a pattern specified. the pattern will be used\n";
				}

				std::wregex regex = pattern.empty() ? build_path_pattern(path) : std::wregex(pattern);
				const auto& redirectPath = encoding::utf8_to_utf16(actionObject.value("redirect", ""));
				const auto& accessFilterString = actionObject.value("access", "");
				const bool breakpoint = actionObject.value("breakpoint", false);
				const bool log = actionObject.value("log", false);

				DWORD accessFilter = 0;
				for(const char ch : accessFilterString)
				{
					switch(ch)
					{
					case 'r':
					case 'R':
						accessFilter |= GENERIC_READ;
						break;
					case 'w':
					case 'W':
						accessFilter |= GENERIC_WRITE;
						break;
					case 'x':
					case 'X':
						accessFilter |= GENERIC_EXECUTE;
						break;
					default:
						break;
					}
				}

				actions.push_back({ std::move(regex), redirectPath, accessFilter, breakpoint, log });
			}
		}
		else
		{
			std::cout << *this << dark_red(" Error:") << " expected array\n";
		}
	}

	if(actions.empty() && !log_all)
	{
		std::cout << *this << dark_yellow(" Warning:") << " no actions specified, disabling file monitor\n";
		_enabled = false;
		return;
	}

	hooks::hook_import(this, "CreateFileA", CreateFileAHook);
	hooks::hook_import(this, "CreateFileW", CreateFileWHook);
}

void uif::features::file_monitor::finalize()
{
	hooks::unhook_import(this, "CreateFileA", CreateFileAHook);
	hooks::unhook_import(this, "CreateFileW", CreateFileWHook);
}

std::wregex uif::features::file_monitor::build_path_pattern(const std::wstring& path)
{
	std::wstring pattern = L"^.*(";
	for(const wchar_t c : path)
	{
		switch(c)
		{
		case L'.':
		case L'^':
		case L'$':
		case L'+':
		case L'-':
		case L'(':
		case L')':
		case L'[':
		case L']':
		case L'{':
		case L'}':
		case L'|':
			pattern += L'\\';
			pattern += c;
			break;

		case L'\\':
		case L'/':
			pattern += L"\\/";
			break;

		case '?':
			pattern += L".";
			break;

		case '*':
			pattern += L".*";
			break;

		default:
			pattern += c;
			break;
		}
	}

	pattern += L")$";

	return std::wregex(pattern);
}

uif::features::file_monitor::file_action* uif::features::file_monitor::get_action(std::wstring path, DWORD desiredAccess)
{
	std::ranges::replace(path, L'\\', L'/');
	for(auto& action : actions)
	{
		if(std::regex_match(path, action.path_pattern))
		{
			if(action.accessFilter && !(action.accessFilter & desiredAccess))
				continue;
			return &action;
		}
	}
	return nullptr;
}
