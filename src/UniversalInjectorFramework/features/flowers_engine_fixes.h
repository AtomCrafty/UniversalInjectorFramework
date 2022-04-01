#pragma once
#include "_feature_base.h"

namespace uif::features {

	class flowers_engine_fixes : public feature_base
	{
	public:
		explicit flowers_engine_fixes(uif::injector& injector) : feature_base(injector, "flowers_engine_fixes") {}
		void initialize() override;
		void finalize() override;

		bool enabled = false;
	};
}
