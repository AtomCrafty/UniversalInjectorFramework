#include "pch.h"
#include "_feature_base.h"

#include "ansi.h"
#include "injector.h"

using namespace uif::ansi;

uif::features::feature_base::feature_base(uif::injector& injector, std::string name) :
	_injector(injector),
	_config(_injector.config()[name]),
	_name(std::move(name))
{
}

bool uif::features::feature_base::try_init()
{
	_enabled = pre_init();
	if(_enabled) initialize();
	return _enabled;
}

bool uif::features::feature_base::pre_init()
{
	if (config().is_boolean()) return config().get<bool>();
	if (!config().is_object()) return false;
	_debug = config().value("debug", false);
	return config().value("enable", false);
}

std::ostream& uif::features::operator<<(std::ostream& os, const feature_base& feature)
{
	return os << white("[") << white(feature.name()) << white("]");
}
