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

	private:
		bool wait_for_exit = false;
		ULONG codepage = 0;
		ULONG locale = 0;
		ULONG charset = 0;
		std::string timezone{};

		bool relaunch(HANDLE* pProcessHandle = nullptr) const;
	};
}
