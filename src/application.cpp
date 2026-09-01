
#include "application.h"

Application::Application()
    : _resource("testing.txt")
{
  std::cout << "Constructor" << std::endl;
}

void Application::Initialization()
{
  std::cout << "Initialization" << std::endl;
}

void Application::Execution()
{
  std::cout << "Execution" << std::endl;
}

void Application::Shutdown()
{
  std::cout << "Shutdown" << std::endl;
}

Application::~Application()
{
  std::cout << "Destructor" << std::endl;
}