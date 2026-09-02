#pragma once
#include <string>
#include <stdio.h>

class Resource
{
private:
  std::string _fileName;

  FILE *_myFile = nullptr;

public:
  Resource(const std::string &fileName);
  Resource(Resource &&other);
  ~Resource();

  void Acquire();

  void Release();

  bool IsOpen() const;
};