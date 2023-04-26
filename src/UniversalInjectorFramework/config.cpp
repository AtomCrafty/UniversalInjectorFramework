#include "pch.h"
#include "config.h"

#include <filesystem>

#include "utils.h"

namespace uif
{
	config::config(const std::string& path)
	{
		std::filesystem::path dir = utils::get_dll_path().parent_path();

		std::ifstream ifs;
		while(true)
		{
			ifs.open(dir / path);
			if(ifs.is_open()) {
				_path = (dir / path).string();
				break;
			}

			std::filesystem::path parent = dir.parent_path();
			
			if(parent.empty() || parent == dir)
			{
				utils::fail("Failed to open config file " + path + " in " + utils::get_dll_path().parent_path().string() + ".");
			}

			dir = parent;
		}

		try
		{
			ifs >> *this;
		}
		catch (nlohmann::json::parse_error& error)
		{
			utils::fail(std::string("Failed to parse config file.\n\n") + error.what());
		}
	}
}
