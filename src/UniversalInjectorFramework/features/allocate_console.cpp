#include "pch.h"
#include "allocate_console.h"

#include "ansi.h"
#include "utils.h"

using namespace uif::ansi;

void uif::features::allocate_console::initialize()
{
	if (config().value("/allocate_console"_json_pointer, false) == true)
	{
		utils::alloc_console();

		std::cout << cyan("Universal Injector Framework") << ", created by " << yellow("AtomCrafty") << ", 2021\n";
		std::cout << "Loaded configuration:\n" << std::setw(4) << config() << std::endl;
	}
}

void uif::features::allocate_console::finalize()
{
}