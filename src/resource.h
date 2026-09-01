#pragma once
#include <string>
#include <stdio.h>

class Resource
{
private:
  std::string _fileName;
  FILE *_myFile;

public:
  Resource(std::string fileName) : _fileName(fileName)
  {
  }
  ~Resource();

  void Acquire();

  void Release();
};