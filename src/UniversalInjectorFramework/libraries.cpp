#include "pch.h"

#include "proxies/d3d8.h"
#include "proxies/d3d9.h"
#include "proxies/d3d11.h"
#include "proxies/dxgi.h"
#include "proxies/d3dcompiler_43.h"
#include "proxies/d3dcompiler_47.h"
#include "proxies/opengl32.h"
#include "proxies/winmm.h"

namespace uif::libraries
{
	void load()
	{
		int loaded = false;

		loaded += load_library_d3d8();
		loaded += load_library_d3d9();
		loaded += load_library_d3d11();
		loaded += load_library_dxgi();
		loaded += load_library_d3dcompiler_43();
		loaded += load_library_d3dcompiler_47();
		loaded += load_library_opengl32();
		loaded += load_library_winmm();

		if (!loaded)
		{
			std::cout << "No library loaded" << std::endl;
		}
	}

	void unload()
	{
		int loaded = false;

		loaded += unload_library_d3d8();
		loaded += unload_library_d3d9();
		loaded += unload_library_d3d11();
		loaded += unload_library_dxgi();
		loaded += unload_library_d3dcompiler_43();
		loaded += unload_library_d3dcompiler_47();
		loaded += unload_library_winmm();

		if (!loaded)
		{
			std::cout << "No library unloaded" << std::endl;
		}
	}
}
