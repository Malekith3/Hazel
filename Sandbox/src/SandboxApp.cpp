#include<Hazel.h>
class Sandbox : public Hazel::application
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}

private:

};

Hazel::application* Hazel::CreateApplication()
{
	return new Sandbox();
}