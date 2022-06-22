#pragma once
#include "_feature_base.h"

namespace uif::features
{
	class custom_feature final : public feature_base
	{
	public:
		explicit custom_feature(uif::injector& injector) : feature_base(injector, "custom_feature") {}
		void initialize() override;
		void finalize() override;

		bool overwrite_exit_code = false;
		UINT exit_code = 0;
	};
}
