#pragma once
#include "SprinterMonster.hh"
#include "ZombieMonster.hh"
#include <string>
class MonsterFactory {
public:
  Character *Create(const std::string&);
};
