#include "pch.h"
#include "config.h"

#include <filesystem>

#include "utils.h"

namespace uif
{
	bool config::try_load_json(const std::string& path, nlohmann::json& config)
	{
		try
		{
			std::ifstream ifs = try_find_file(path, std::ios::in);
			if (!ifs.is_open())
				return false;

			config = nlohmann::json::parse(ifs, nullptr, true, true);
			return true;
		}
		catch (nlohmann::json::parse_error& error)
		{
			utils::fail(std::string("Failed to parse config file.\n\n") + error.what());
		}
	}

	bool config::try_load_bson(const std::string& path, nlohmann::json& config)
	{
		try
		{
			std::ifstream ifs = try_find_file(path, std::ios::in | std::ios::binary);

			if (!ifs.is_open())
				return false;

			ifs.seekg(0, std::ios::end);
			std::streampos size = ifs.tellg();
			ifs.seekg(0, std::ios::beg);

			std::vector<uint8_t> bytes{};
			bytes.reserve(size);

			ifs.unsetf(std::ios::skipws);
			bytes.insert(bytes.begin(), std::istream_iterator<uint8_t>(ifs), std::istream_iterator<uint8_t>());

			for (uint8_t& byte : bytes)
			{
				byte ^= 0xff;
			}

			config = nlohmann::json::from_bson(bytes);
			return true;
		}
		catch (nlohmann::json::parse_error& error)
		{
			utils::fail(std::string("Failed to parse config file.\n\n") + error.what());
		}
	}

	std::ifstream config::try_find_file(const std::string& path, std::ios::openmode mode)
	{
		std::filesystem::path dir = utils::get_dll_path().parent_path();

		std::ifstream ifs;
		while (true)
		{
			ifs.open(dir / path, mode);
			if (ifs.is_open()) {
				return ifs;
			}

			std::filesystem::path parent = dir.parent_path();

			if (parent.empty() || parent == dir)
			{
				return ifs;
			}

			dir = parent;
		}
	}
}
