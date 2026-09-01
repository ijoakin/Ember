#pragma once

#include <stdio.h>
#include "resource.h"

void Resource::Acquire()
{
  this->_myFile = fopen(this->_fileName.c_str(), "r");
}

Resource::~Resource()
{
  this->Release();
}

void Resource::Release()
{
  fclose(this->_myFile);
}