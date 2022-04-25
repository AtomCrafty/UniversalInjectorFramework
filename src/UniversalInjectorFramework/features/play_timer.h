#pragma once
#include "_feature_base.h"

namespace uif::features
{
	class play_timer final : public feature_base
	{
	public:
		explicit play_timer(uif::injector& injector) : feature_base(injector, "play_timer") {}
		void initialize() override;
		void finalize() override;
		
	private:
		long long start_time = -1;
		long long end_time = -1;
		std::string save_file_path;
		
		bool auto_save_enable = false;
		long long auto_save_interval = -1;
		std::thread auto_save_thread;
		std::mutex auto_save_mutex;
		std::condition_variable auto_save_stop_signal;
		
		void auto_save_start();
		void auto_save_stop();
		void write_save_file() const;
		
		static long long epoch_time();
	};
}
