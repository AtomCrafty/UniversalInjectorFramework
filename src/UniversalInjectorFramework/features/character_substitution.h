#pragma once
#include "_feature_base.h"

namespace uif::features
{
	class character_substitution final : public feature_base
	{
	public:
		explicit character_substitution(uif::injector& injector) : feature_base(injector, "character_substitution") {}
		void initialize() override;
		void finalize() override;

		void substitute(wchar_t* text, int length) const;
		void substitute(std::wstring& text) const;
		
		std::map<wchar_t, wchar_t> substitutions;
	};
}
