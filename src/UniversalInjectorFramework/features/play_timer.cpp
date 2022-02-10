#include "pch.h"
#include "play_timer.h"

void uif::features::play_timer::initialize()
{
	enable = config().value("/play_timer/enable"_json_pointer, false);
	if (enable)
	{
		start_time = epoch_time();
		save_file_path = config().value("/play_timer/save_file_path"_json_pointer, "play_timer.json");

		auto_save_enable = config().value("/play_timer/auto_save/enable"_json_pointer, false);
		if (auto_save_enable) {
			auto_save_interval = config().value("/play_timer/auto_save/interval"_json_pointer, 60);
			auto_save_start();
		}
	}
}

void uif::features::play_timer::finalize()
{
	if(!enable) return;
	
	auto_save_stop();
	end_time = epoch_time();
	write_save_file();
}

void uif::features::play_timer::auto_save_start()
{
	auto_save_enable = true;
	auto_save_thread = std::thread([this]()
		{
			while (auto_save_enable) {
				write_save_file();
				std::unique_lock<std::mutex> lk(auto_save_mutex);
				auto_save_stop_signal.wait_for(lk, std::chrono::seconds(auto_save_interval));
			}
		});
}

void uif::features::play_timer::auto_save_stop()
{
	if (auto_save_enable) {
		auto_save_enable = false;
		{
			std::lock_guard<std::mutex> _(auto_save_mutex);
			auto_save_stop_signal.notify_one();
		}
		auto_save_thread.join();
	}
}

void uif::features::play_timer::write_save_file() const
{
	std::cout << "Writing play timer save file..." << std::endl;
	json data;
	std::ifstream in;
	in.open(save_file_path);
	if (in.is_open())
	{
		try
		{
			in >> data;
		}
		catch (nlohmann::json::parse_error& error)
		{
			std::cout << "Failed to read play timer save file (" << save_file_path << "): " << error.what() << std::endl;
		}
		in.close();
	}
	else
	{
		data = json({});
	}

	if (!data.contains("times"))
	{
		data["times"] = json::array();
	}

	const bool was_active = data.value("active", false);
	if (was_active && data["active_start"] != start_time)
	{
		std::cout << "Found stale active marker. The app didn't exit properly last time." << std::endl;
		data["times"].emplace_back(json({
			{ "start", data["active_start"] },
			{ "end", data["active_ping"] }
			}));
	}

	const bool is_active = end_time == -1;
	if (is_active)
	{
		data["active"] = true;
		data["active_start"] = start_time;
		data["active_ping"] = epoch_time();
	}
	else
	{
		data.erase("active");
		data.erase("active_start");
		data.erase("active_ping");
		data["times"].emplace_back(json({
			{ "start", start_time },
			{ "end", end_time },
			{ "duration", end_time - start_time }
			}));
	}

	long long total_time = 0;
	for (auto time_entry : data["times"])
	{
		long long duration = time_entry["duration"];
		total_time += duration;
	}
	data["total_time"] = total_time;

	std::ofstream out;
	out.open(save_file_path);
	if (!out.is_open())
	{
		std::cout << "Failed to write play timer save file (" << save_file_path << ")" << std::endl;
		return;
	}
	out << std::setw(4) << data;
	out.close();
}

long long uif::features::play_timer::epoch_time()
{
	const auto duration = std::chrono::system_clock::now().time_since_epoch();
	return std::chrono::duration_cast<std::chrono::seconds>(duration).count();
}
