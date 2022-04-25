#include "pch.h"
#include "allocate_console.h"

#include "ansi.h"
#include "config.h"
#include "hooks.h"
#include "injector.h"
#include "utils.h"

using namespace uif::ansi;

static void alloc_console()
{
	// try to reuse the existing console
	if(!AttachConsole(ATTACH_PARENT_PROCESS))
	{
		if(!AllocConsole())
		{
			uif::utils::fail("Failed to allocate console.");
		}
	}

	SetConsoleOutputCP(65001);

	FILE* _;
	freopen_s(&_, "CONOUT$", "w", stdout);
	freopen_s(&_, "CONOUT$", "w", stderr);
	freopen_s(&_, "CONIN$", "r", stdin);

	std::cout.clear();
	std::clog.clear();
	std::cerr.clear();
	std::cin.clear();
}

static void focus_console()
{
	auto* const window = GetConsoleWindow();
	if(window == nullptr) return;
	SetForegroundWindow(window);
}

static bool enable_vt_mode()
{
	const auto hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if(hOut == INVALID_HANDLE_VALUE)
		return false;

	DWORD dwMode = 0;
	if(!GetConsoleMode(hOut, &dwMode))
		return false;

	dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	return SetConsoleMode(hOut, dwMode);
}

bool uif::features::allocate_console::pre_init()
{
	if(config().is_boolean()) return config().get<bool>();
	return feature_base::pre_init();
}

void uif::features::allocate_console::initialize()
{
	alloc_console();
	enable_vt_mode();
	setlocale(LC_ALL, "en_US.UTF-8");  // NOLINT(concurrency-mt-unsafe)

	std::cout << cyan("Universal Injector Framework") << ", created by " << yellow("AtomCrafty") << ", 2021\n";
	std::cout << "Loaded configuration:\n" << std::setw(4) << injector().config() << std::endl;
}

void uif::features::allocate_console::finalize()
{
}