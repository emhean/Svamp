#pragma once

namespace Svamp
{
	class Rectangle
	{
	public:
		Rectangle();
		~Rectangle();
		Rectangle(int x, int y, int width, int height);

		int x, y; // x and y
		int w, h; // width and height
		bool Intersect(const Rectangle& rectangle);
		Rectangle Intersection(const Rectangle& rectangle);
	};
}
