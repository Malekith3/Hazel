#pragma once
#include "Core.h"

namespace Hazel {
class HAZEL_API application
{
public:
	application();
	virtual ~application();
	void Run();
};
///to be defind in CLIENT
application* CreateApplication();
}