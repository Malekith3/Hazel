#include"hzpch.h"
#include "application.h"
#include "Hazel/Log.h"
namespace Hazel{
   #define BIND_EVENT_FN(x) std::bind(&application::x,this ,std::placeholders::_1)

application::application()
{
	m_Window =std::unique_ptr<Window>( Window::Create());
	m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));
}


application::~application()
{
}
void application:: OnEvent(Event& e) 
{
	EventDispatcher dispatcher(e);
	dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowsClosed));
	HZ_CORE_TRACE("{0}",e);
}

  void application::Run()
  {
	
	  while (m_Running)
	  {
		  m_Window->OnUpdate();

	  }
	  

  }
bool application::OnWindowsClosed(WindowCloseEvent& e) 
{
	m_Running = false;
	return true;
}
}