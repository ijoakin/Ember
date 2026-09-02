#include <stdio.h>
#include <string.h>
#include "resource.h"

Resource::Resource(const std::string &fileName) : _fileName(fileName)
{
  this->Acquire();
}

Resource::Resource(Resource &&other)
{
  _fileName = std::move(other._fileName);
  _myFile = other._myFile;

  other._myFile = nullptr;
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
  if (this->_myFile != nullptr)
  {
    fclose(this->_myFile);
    _myFile = nullptr;
  }
}

bool Resource::IsOpen() const
{

  return this->_myFile != nullptr;
}