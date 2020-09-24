#pragma once

#include "Svamp/Core.h"


// Might be included in core later by using pre-compiled header
#include <string>
#include <functional>

namespace Svamp
{
	// Currently the event system is blocking.
	// in the future, might be buffered and process them in the event update phase.

	enum class EventType
	{
		None = 0,
		WindowClose, WindowResize, WindowFocus, WindowLostFocus, WindowMoved,
		AppTick, AppUpdate, AppRender,
		KeyPressed, KeyReleased,
		MouseButtonPressed, MouseButtonReleased, MouseMoved, MouseScrolled
	};

	enum EventCategory // Bit fields are defined in the Core header
	{
		None = 0,
		EventCategoryApplication = BIT(0), // bit at pos 0
		EventCategoryInput = BIT(1), // bit at pos 1 
		EventCategoryKeyboard = BIT(2), // bit at pos 2 and so on ....
		EventCategoryMouse = BIT(3),
		EventCategoryMouseButton = BIT(4)
	};


#define EVENT_CLASS_TYPE(type) static EventType GetStaticType() { return EventType::type; }\
								virtual EventType GetEventType() const override { return GetStaticType(); }\
								virtual const char* GetName() const override { return #type; }

#define EVENT_CLASS_CATEGORY(category) virtual int GetCategoryFlags() const override { return category; }


	// Base class for events
	class Event
	{
	public:
		virtual ~Event() = default;

		// If an event has been handled or not.
		bool Handled = false;

		// "Pure" virtuals that must be implemented
		virtual EventType GetEventType() const = 0;
		virtual const char* GetName() const = 0;
		virtual int GetCategoryFlags() const = 0;
		virtual std::string ToString() const 
		{ 
			return GetName(); 
		}

		// Function to check if this event is in the given category
		bool IsInCategory(EventCategory category)
		{
			// Returns 0 if not in category at all, if any other it's true.
			return GetCategoryFlags() & category;
		}
	};



}