#pragma once

#include "Core.h"

namespace Svamp
{
	class SVAMP_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Will be defined in the client
	Application* CreateApplication();
}


