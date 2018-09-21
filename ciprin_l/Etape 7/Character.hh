#pragma once

#include "AbstractEntity.hh"
#include "IObservable.hh"
class Character : public AbstractEntity, public IObservable{
protected:
  int _life;
  double _x;
  double _y;
  ~Character();

private:
  void  NotifyAll();
  
public:
  double GetX() const;
  void SetX(double);
  double GetY() const;
  void SetY(double);
  int GetLife() const;
  void SetLife(int);

};

