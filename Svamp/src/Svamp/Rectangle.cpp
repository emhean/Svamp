#include "Rectangle.h"

namespace Svamp
{
	Rectangle::Rectangle()
	{
	}
	Rectangle::~Rectangle()
	{
	}

	Rectangle::Rectangle(int x, int y, int width, int height)
	{
		this->x = x;
		this->y = y;
		this->w = width;
		this->h = height;
	}

	// Check if intersecting with other rectangle.
	bool Rectangle::Intersect(const Rectangle& rectangle)
	{
		return (x < rectangle.x + rectangle.w) && (rectangle.x < x + w) &&
			(y < rectangle.y + rectangle.h) && (rectangle.y < y + h);
	}

	// Get intersection of two rectangles.
	Rectangle Rectangle::Intersection(const Rectangle& rectangle)
	{
		if (Intersect(rectangle) == 1) // if true.
		{
			unsigned int x = 0, y = 0, w = 0, h = 0;

			// Calculate width of intersection.
			if (x < rectangle.x + rectangle.w) // If to the right
			{

			}
			else if (rectangle.x < x + w) // If to the left
			{

			}

			// Calculate height of intersection.
			if (y < rectangle.y + rectangle.h) // If above
			{

			}
			else if (rectangle.y < y + h) // If below
			{

			}

			return Rectangle(x, y, w, h);
		}
		else return Rectangle();
	}

}