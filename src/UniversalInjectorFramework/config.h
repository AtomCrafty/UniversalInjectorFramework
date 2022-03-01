#pragma once

#include "json.hpp"

namespace uif
{
	class config : public nlohmann::json
	{
	public:
		explicit config(const std::string& path);

	private:
		std::string _path;
	};
}