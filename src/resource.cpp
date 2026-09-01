#include <stdio.h>
#include <string.h>
#include "resource.h"

Resource::Resource(std::string fileName) : _fileName(fileName)
{
  this->Acquire();
}

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

bool Resource::IsOpen() const
{

  return this->_myFile != nullptr;
}