#include "pch.h"
#include "start_suspended.h"

#include "config.h"
#include "hooks.h"

void uif::features::start_suspended::initialize()
{
	std::cout << "Starting in suspended mode" << std::endl;

	const int waitTime = config().value("wait_time", -1);
	if(waitTime > 0)
	{
		std::cout << "Waiting for " << waitTime << " ms" << std::endl;
		Sleep(waitTime);
	}


	if(config().value("wait_for_input", false) == true)
	{
		std::cout << "Waiting for input. Please press enter." << std::endl;
		std::cin.get();
	}
}

void uif::features::start_suspended::finalize()
{
}