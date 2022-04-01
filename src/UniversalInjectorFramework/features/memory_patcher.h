#pragma once
#include "_feature_base.h"

namespace uif::features {

	class memory_patcher : public feature_base
	{
	public:
		explicit memory_patcher(uif::injector& injector) : feature_base(injector, "memory_patcher") {}
		void initialize() override;
		void finalize() override;

	private:
		struct patch_entry
		{
			size_t length;
			void* address;
			void* patch_value;
			void* original_value;

			patch_entry(size_t length, void* address, void* patch_value, void* original_value)
				: length(length),
				  address(address),
				  patch_value(patch_value),
				  original_value(original_value)
			{
			}
		};

		std::vector<patch_entry> patches;
	};
}
