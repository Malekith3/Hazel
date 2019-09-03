#pragma once
#include "Core.h"
#include "Events/Event.h"
#include "Window.h"

namespace Hazel {
class HAZEL_API application
{
public:
	application();
	virtual ~application();
	void Run();
private:
private:
	std::unique_ptr<Window> m_Window;
	bool m_Running = true;
};
///to be defind in CLIENT
application* CreateApplication();
}