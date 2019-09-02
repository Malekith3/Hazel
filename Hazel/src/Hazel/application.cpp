#include"hzpch.h"
#include "application.h"
#include "Hazel/Events/ApplicationEvent.h"
#include "Hazel/Log.h"
namespace Hazel{

application::application()
{
}


application::~application()
{
}
  void application::Run()
  {
	  WindowResizeEvent e(1280, 720);
	  HZ_TRACE(e);
	  while (true);
	  

  }
}