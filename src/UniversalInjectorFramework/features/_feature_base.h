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
		explicit feature_base(injector& injector, std::string name);
		explicit feature_base(feature_base&) = delete;
		explicit feature_base(feature_base&&) = delete;
		virtual ~feature_base() = default;

		feature_base& operator=(const feature_base&) = delete;
		feature_base& operator=(const feature_base&&) = delete;

		bool try_init();

		virtual bool pre_init();
		virtual void initialize() = 0;
		virtual void finalize() = 0;

		[[nodiscard]] injector& injector() const { return _injector; }
		[[nodiscard]] nlohmann::json& config() const { return _config; }
		[[nodiscard]] const std::string& name() const { return _name; }
		[[nodiscard]] bool is_enabled() const { return _enabled; }
		[[nodiscard]] bool is_debugging_enabled() const { return _debug; }

	private:
		uif::injector& _injector;
		nlohmann::json& _config;
		const std::string _name;

	protected:
		bool _enabled = false;
		bool _debug = false;
	};

	extern std::ostream& operator<<(std::ostream& os, const feature_base& feature);
}
