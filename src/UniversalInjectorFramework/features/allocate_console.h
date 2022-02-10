#pragma once
#include "_feature_base.h"

namespace uif::features
{
	class allocate_console final : public feature_base
	{
	public:
		explicit allocate_console(uif::injector& injector) : feature_base(injector, "allocate_console") {}
		void initialize() override;
		void finalize() override;
	};
}