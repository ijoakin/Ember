#pragma once
#include <iostream>
#include "ember.h"
#include "resource.h"

class Application
{
private:
  Resource _resource;

public:
  Application();
  ~Application();
  void Initialization();
  void Execution();
  void Shutdown();
};
