#pragma once
#include "_feature_base.h"

namespace uif::features
{
	class start_suspended final : public feature_base
	{
	public:
		explicit start_suspended(uif::injector& injector) : feature_base(injector, "start_suspended") {}
		void initialize() override;
		void finalize() override;
	};
}