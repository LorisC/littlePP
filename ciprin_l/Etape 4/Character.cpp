#include "Character.hh"

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
