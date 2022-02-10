#include "pch.h"
#include "_feature_base.h"

#include "ansi.h"

using namespace uif::ansi;

uif::injector& uif::features::feature_base::injector() const
{
	return _injector;
}

uif::config& uif::features::feature_base::config() const
{
	return injector().config();
}

const std::string& uif::features::feature_base::name() const
{
	return _name;
}

std::ostream& uif::features::operator<<(std::ostream& os, const feature_base& feature)
{
	return os << white("[") << white(feature.name()) << white("]");
}