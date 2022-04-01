#include "pch.h"
#include "memory_patcher.h"

#include "ansi.h"
#include "callconv.h"
#include "config.h"
#include "encoding.h"
#include "hooks.h"
#include "injector.h"
#include "utils.h"

using namespace uif::ansi;

void uif::features::memory_patcher::initialize()
{
	if(!config().value("/memory_patcher/enable"_json_pointer, false))
		return;

	if(!config().contains("/memory_patcher/patches"_json_pointer))
	{
		std::cout << *this << dark_yellow(" Warning:") << " no patches specified\n";
		return;
	}

	auto& patchTable = config()["/memory_patcher/patches"_json_pointer];

	if(!patchTable.is_object()) {
		std::cout << *this << dark_red(" Error:") << " expected object\n";
		return;
	}

	for(const auto& it : patchTable.items())
	{
		void* address = utils::parse_address(it.key());

		if(address == nullptr)
			continue;

		const auto& bytesJson = it.value();

		if(!bytesJson.is_string())
		{
			std::cout << *this << dark_red(" Error:") << " expected string\n";
			continue;
		}

		const auto& bytesString = bytesJson.get<std::string>();
		if(bytesString.length() == 0)
		{
			std::cout << *this << dark_yellow(" Warning:") << " empty patch\n";
			continue;
		}

		if(bytesString.length() % 3 != 2)
		{
			std::cout << *this << dark_yellow(" Warning:") << " malformed patch bytes\n";
			continue;
		}

		const size_t length = (bytesString.length() + 1) / 3;
		char* newBytes = new char[length * 2];
		char* oldBytes = newBytes + length;

		bool valid = true;

		for(size_t i = 0; i < length; ++i)
		{
			// every third character must be a space or the null terminator
			const char space = bytesString[3 * i + 2];
			if(space && space != ' ')
			{
				valid = false;
				break;
			}

			const char hi = bytesString[3 * i + 0];
			const char lo = bytesString[3 * i + 1];
			char value = 0;

			if(hi >= 'a' && hi <= 'f') value |= (0xA + hi - 'a') << 4;
			else if(hi >= 'A' && hi <= 'F') value |= (0xA + hi - 'A') << 4;
			else if(hi >= '0' && hi <= '9') value |= (0x0 + hi - '0') << 4;
			else
			{
				valid = false;
				break;
			}

			if(lo >= 'a' && lo <= 'f') value |= (0xA + lo - 'a') << 0;
			else if(lo >= 'A' && lo <= 'F') value |= (0xA + lo - 'A') << 0;
			else if(lo >= '0' && lo <= '9') value |= (0x0 + lo - '0') << 0;
			else
			{
				valid = false;
				break;
			}

			newBytes[i] = value;
		}

		if(!valid)
		{
			std::cout << *this << dark_yellow(" Warning:") << " malformed patch bytes\n";
			delete[] newBytes;
			delete[] oldBytes;
			continue;
		}

		patches.emplace_back(length, address, newBytes, oldBytes);
	}

	for(const auto& patch : patches)
	{
		utils::patch_memory(patch.address, patch.patch_value, patch.length, patch.original_value);
	}
}

void uif::features::memory_patcher::finalize()
{
	for(const auto& patch : patches)
	{
		utils::patch_memory(patch.address, patch.original_value, patch.length, nullptr);
	}
}
