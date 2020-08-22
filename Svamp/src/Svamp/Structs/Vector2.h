#pragma once

namespace Svamp
{
	struct Vector2f
	{
	public:
		float x, y;
		Vector2f(float x, float y);
		~Vector2f();
	};

	struct Vector2i
	{
	public:
		int x, y;
		Vector2i(int x, int y);
		~Vector2i();
	};

}
