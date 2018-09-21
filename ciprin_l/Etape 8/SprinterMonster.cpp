#include "SprinterMonster.hh"
#include "TimeManager.hh"

SprinterMonster::SprinterMonster() {
  _life = 25;
  _x = 0;
  _y = 0;
}

void SprinterMonster::Update() {
  TimeManager &t =  TimeManager::GetInstance();
  double dist = t.GetElapsedTime() ;
  _x += dist / 200;
  _y += + dist/ 200;
}
