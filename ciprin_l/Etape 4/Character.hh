#pragma once
#include "AbstractEntity.hh"
class Character : public AbstractEntity{
protected:
  int _life;
  double _x;
  double _y;
  ~Character();

public:
  double GetX() const;
  void SetX(double);
  double GetY() const;
  void SetY(double);
  int GetLife() const;
  void SetLife(int);

};

