#pragma once

#include <string>

#include "features/_feature_base.h"

namespace uif::features {
	class window_manager : public feature_base
	{
	public:
		window_manager(uif::injector& injector) : feature_base(injector, "window_manager") {}

		void initialize() override;
		void finalize() override;

		[[nodiscard]] std::wstring process_title(const std::string& title) const;
		void process_title(std::wstring& title) const;

	protected:
		void process_title_no_normalize(std::wstring& title) const;

		bool overwrite_title = false;
		std::wstring overwrite_title_value{};
	};
}
