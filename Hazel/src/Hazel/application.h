#pragma once
#include "Core.h"
#include "Hazel/Events/Event.h"
#include "Hazel/LayerStack.h"
#include "Hazel/Events/ApplicationEvent.h"
#include "Window.h"

namespace Hazel {
class HAZEL_API application
{
public:
	application();
	virtual ~application();
	void Run();

	void OnEvent(Event& e);

	void PushLayer(Layer* layer);
	void PushOverlay(Layer* layer);
	inline Window& GetWindow() { return *m_Window; }
	inline static application& Get() { return *s_Instance; }
private:
	bool OnWindowsClosed(WindowCloseEvent& e);
private:
	std::unique_ptr<Window> m_Window;
	bool m_Running = true;
	LayerStack m_LayerStack;
private:
	static application* s_Instance;
};
///to be defind in CLIENT
application* CreateApplication();
}