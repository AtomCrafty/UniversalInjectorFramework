#include "pch.h"
#include "start_suspended.h"

#include "config.h"
#include "hooks.h"

void uif::features::start_suspended::initialize()
{
	if (config().value("/start_suspended/enable"_json_pointer, false) == true)
	{
		std::cout << "Starting in suspended mode" << std::endl;

		const int waitTime = config().value("/start_suspended/wait_time"_json_pointer, -1);
		if (waitTime > 0)
		{
			std::cout << "Waiting for " << waitTime << " ms" << std::endl;
			Sleep(waitTime);
		}


		if (config().value("/start_suspended/wait_for_input"_json_pointer, false) == true)
		{
			std::cout << "Waiting for input. Please press enter."<< std::endl;
			std::cin.get();
		}
	}
}

void uif::features::start_suspended::finalize()
{
}