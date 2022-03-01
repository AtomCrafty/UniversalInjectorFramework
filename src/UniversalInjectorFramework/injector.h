#pragma once
#include "config.h"
#include "features/_feature_base.h"

namespace uif
{
	class injector
	{
	public:
		static injector& instance();
		injector();
		config& config();
		void attach();
		void detach();
		template<typename T> T& feature() const;

		HMODULE load_real_library(const std::string& dllName);

		HMODULE game_module;
		std::vector<HMODULE> additional_modules{};
		
		template <typename T>
		void initialize_feature()
		{
			features::feature_base* feature = new T(*this);
			feature->initialize();
			features.push_back(feature);
		}

	private:
		static injector* _instance;
		uif::config _config;
		std::vector<features::feature_base*> features;
		bool enabled;
	};

	template <typename T>
	T& injector::feature() const
	{
		for (auto* feature : features)
		{
			T* casted = dynamic_cast<T*>(feature);
			if (casted != nullptr)
			{
				T& reference = *casted;
				return reference;
			}
		}

		throw std::runtime_error(std::string("no matching feature found for type ") + typeid(T).name());
	}
}
