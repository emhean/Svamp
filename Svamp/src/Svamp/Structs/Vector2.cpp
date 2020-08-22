#include "Vector2.h"


namespace Svamp
{
	Vector2f::Vector2f(const float x, const float y)
	{
		this->x = x;
		this->y = y;
	}
	Vector2f::~Vector2f()
	{
	}

	Vector2i::Vector2i(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	Vector2i::~Vector2i()
	{
	}
}
