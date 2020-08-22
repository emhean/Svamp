#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Svamp
{
	class SVAMP_API Log
	{
	public:

		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger()
		{
			return s_CoreLogger;
		}
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger()
		{
			return s_ClientLogger;
		}

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}


// Core log macros
// ... for number of arguments,  __VA__ARGS__  to forward the arguments
#define SP_CORE_ERROR(...) ::Svamp::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SP_CORE_WARN(...) ::Svamp::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SP_CORE_INFO(...) ::Svamp::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SP_CORE_TRACE(...) ::Svamp::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SP_CORE_FATAL(...) ::Svamp::Log::GetCoreLogger()->fatal(__VA__ARGS__)

// Client log macros
// ... for number of arguments,  __VA__ARGS__  to forward the arguments
#define SP_ERROR(...) ::Svamp::Log::GetClientLogger()->error(__VA_ARGS__)
#define SP_WARN(...) ::Svamp::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SP_INFO(...) ::Svamp::Log::GetClientLogger()->info(__VA_ARGS__)
#define SP_TRACE(...) ::Svamp::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SP_FATAL(...) ::Svamp::Log::GetClientLogger()->fatal(__VA__ARGS__)