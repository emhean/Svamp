#include "Log.h"

#include <stdio.h>
#include "spdlog/sinks/stdout_color_sinks.h" // For stdout_color_mt

namespace Svamp
{
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");

		s_CoreLogger = spdlog::stdout_color_mt("Svamp");
		s_ClientLogger = spdlog::stdout_color_mt("App");

	}
}

