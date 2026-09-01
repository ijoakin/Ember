#include <iostream>
#include "application.h"

int main()
{

  Application application;

  application.Initialization();

  application.Execution();

  application.Shutdown();
  std::cout << "Emeber v 1.0" << std::endl;
  return 0;
}