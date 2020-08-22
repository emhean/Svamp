#include <Svamp.h>

class Sandbox : public Svamp::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

Svamp::Application* Svamp::CreateApplication()
{
	return new Sandbox();
}

//int main()
//{
//	Sandbox* sandbox = new Sandbox();
//	sandbox->Run();
//	delete sandbox;
//}