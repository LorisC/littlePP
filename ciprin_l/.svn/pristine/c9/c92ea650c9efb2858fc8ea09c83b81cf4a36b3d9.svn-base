#include "MonsterFactory.hh"

Character* MonsterFactory::Create(const std::string& name){
  if (name.compare("ZombieMonster") == 0)
    return new ZombieMonster();
  if(name.compare("SprinterMonster") == 0)
    return new SprinterMonster();
  return NULL;
}
