#pragma once
#include <string>
#include <stdio.h>

class Resource
{
private:
  const std::string &_fileName;
  FILE *_myFile = nullptr;

public:
  Resource(std::string fileName);
  ~Resource();

  void Acquire();

  void Release();

  bool IsOpen() const;
};