#pragma once

namespace uif
{
	class config : public json
	{
	public:
		explicit config(const std::string& path);

	private:
		std::string _path;
	};
}