#pragma once
#include <regex>

#include "features/_feature_base.h"

namespace uif::features {
	class file_monitor : public feature_base
	{
	public:
		file_monitor(uif::injector& injector) : feature_base(injector, "file_monitor") {}

		void initialize() override;
		void finalize() override;

		struct file_action
		{
			std::wregex path_pattern;
			std::wstring redirect_path;
			DWORD accessFilter;
			bool breakpoint;
			bool log;
		};

		file_action* get_action(std::wstring path, DWORD desiredAccess);
		
		bool log_all = false;
		std::vector<file_action> actions;

	private:
		static std::wregex build_path_pattern(const std::wstring& path);
	};
}
