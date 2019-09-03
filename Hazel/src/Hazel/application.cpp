#include"hzpch.h"
#include "application.h"
#include "Hazel/Events/ApplicationEvent.h"
#include "Hazel/Log.h"
namespace Hazel{

application::application()
{
	m_Window =std::unique_ptr<Window>( Window::Create());
}


application::~application()
{
}
  void application::Run()
  {
	
	  while (m_Running)
	  {
		  m_Window->OnUpdate();

	  }
	  

  }
}