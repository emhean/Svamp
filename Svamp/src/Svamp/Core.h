#pragma once

#ifdef SP_PLATFORM_WINDOWS
	#ifdef SP_BUILD_DLL
		#define SVAMP_API __declspec(dllexport) // active when building the dll
	#else
		#define SVAMP_API __declspec(dllimport) // active for the sandbox
	#endif
#else
	#error Svamp only support Windows as of currently!
#endif


#define BIT(x) (1 << x)