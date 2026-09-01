#pragma once

#include <stdio.h>
#include "resource.h"

void Resource::Acquire()
{
  this->_myFile = fopen(this->_fileName.c_str(), "r");
}

void Resource::Release()
{
  fclose(this->_myFile);
}