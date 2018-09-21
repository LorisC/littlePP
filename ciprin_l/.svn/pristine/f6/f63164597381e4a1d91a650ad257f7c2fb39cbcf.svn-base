#include "Character.hh"
#include "IObserver.hh"
#include <string>
double Character::GetX() const {
  return _x;
}

double Character::GetY() const {
  return _y;
}

void Character::SetX(double x){
 _x = x;
}

void Character::SetY(double y){
  _y = y;
}

int Character::GetLife() const{
  return _life;
}

void Character::SetLife(int life){
  _life = life;
}

Character::~Character(){

}

void Character::NotifyAll(){
for (std::list<IObserver*>::iterator it= _observers.begin(); it != _observers.end(); ++it)
  (*it)->Notify(this);
}

std::string Character::Serialize(){
  std::string res ("");
  res.push_back(_x);
  res.append(" ");
  res.push_back(_y);
  res.append(" ");
  res.push_back(_life);
  return res;
}
