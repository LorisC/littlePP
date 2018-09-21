#include "ZombieMonster.hh"
#include "TimeManager.hh"
#include <iostream>
ZombieMonster::ZombieMonster() {
  _life = 100;
  _x = 0;
  _y = 0;
}

void ZombieMonster::Update(){
  TimeManager &t =  TimeManager::GetInstance();
  double dist = t.GetElapsedTime(); 
  _y += dist / 1000;
  _x += dist / 1000;
}
