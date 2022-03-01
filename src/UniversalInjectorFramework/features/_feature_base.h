#pragma once

namespace uif
{
	class injector;
	class config;
}

namespace uif::features
{
	class feature_base
	{
	public:
		explicit feature_base(injector& injector, std::string name) : _injector(injector), _name(std::move(name)) {}
		explicit feature_base(feature_base&) = delete;
		explicit feature_base(feature_base&&) = delete;
		virtual ~feature_base() = default;

		feature_base& operator=(const feature_base&) = delete;
		feature_base& operator=(const feature_base&&) = delete;

		virtual void initialize() = 0;
		virtual void finalize() = 0;
		
		[[nodiscard]] injector& injector() const;
		[[nodiscard]] config& config() const;
		[[nodiscard]] const std::string& name() const;

	private:
		uif::injector& _injector;
		const std::string _name;
	};

	extern std::ostream& operator<<(std::ostream& os, const feature_base& feature);
}
