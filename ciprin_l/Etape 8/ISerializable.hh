#pragma once
#include <string>
class ISerializable{
public :
  virtual std::string& Serialize();
  virtual ~ISerializable();
};
