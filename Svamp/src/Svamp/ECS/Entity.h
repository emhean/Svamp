#pragma once
#include "Component.h"

namespace Svamp
{
	class Entity
	{
	public:
		Entity();
		~Entity();

	private:
		// Unique-unchanged identifier number.
		unsigned int uuid;
		 
		// Pointer to array of components.
		// The size of an array is defined at compile time only.
		Component *components; 
	};

}