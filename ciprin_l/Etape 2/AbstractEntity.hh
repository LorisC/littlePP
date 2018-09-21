#pragma once
class AbstractEntity {
public: 
  virtual void Draw();
  virtual void Update();
protected: 
 
  virtual ~AbstractEntity();
};
