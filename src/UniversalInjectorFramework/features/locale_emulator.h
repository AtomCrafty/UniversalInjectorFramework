#pragma once
#include "_feature_base.h"

namespace uif::features
{
	class locale_emulator final : public feature_base
	{
	public:
		explicit locale_emulator(uif::injector& injector) : feature_base(injector, "locale_emulator") {}
		void initialize() override;
		void finalize() override;
	};
}
