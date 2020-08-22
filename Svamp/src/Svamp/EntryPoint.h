#pragma once


// Entry point for Windows
#ifdef SP_PLATFORM_WINDOWS
extern Svamp::Application* Svamp::CreateApplication();

int main(int argc, char** argv)
{
	printf("Svamp Engine Alpha 1.0\n");

	Svamp::Log::Init();
	SP_CORE_WARN("Initialized Core Logger.");

	SP_INFO("Initialized Client Logger.");


	// Get an instance of application
	auto app = Svamp::CreateApplication();
	app->Run(); // Run  appliction
	delete app;
}

#endif

