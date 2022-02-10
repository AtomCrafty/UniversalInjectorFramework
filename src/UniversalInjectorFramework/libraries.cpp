#include "pch.h"

#include "proxies/d3d8.h"
#include "proxies/d3d9.h"
#include "proxies/d3d11.h"
#include "proxies/dxgi.h"
#include "proxies/d3dcompiler_47.h"
#include "proxies/gdi32.h"
#include "proxies/ole32.h"
#include "proxies/opengl32.h"

namespace uif::libraries
{
	void load()
	{
		int loaded = false;

		loaded += load_library_d3d8();
		loaded += load_library_d3d9();
		loaded += load_library_d3d11();
		loaded += load_library_dxgi();
		loaded += load_library_d3dcompiler_47();
		loaded += load_library_gdi32();
		loaded += load_library_ole32();
		loaded += load_library_opengl32();

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
		loaded += unload_library_d3dcompiler_47();
		loaded += unload_library_gdi32();
		loaded += unload_library_ole32();
		loaded += unload_library_opengl32();

		if (!loaded)
		{
			std::cout << "No library unloaded" << std::endl;
		}
	}
}
