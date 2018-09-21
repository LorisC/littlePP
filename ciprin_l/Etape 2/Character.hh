#pragma once
#include "AbstractEntity.hh"
class Character : AbstractEntity{
private:
  int _life;
  double _x;
  double _y;

public:
  double GetX() const;
  void SetX(double);
  double GetY() const;
  void SetY(double);
  int GetLife() const;
  void SetLife(int);

protected:
  ~Character();
};

