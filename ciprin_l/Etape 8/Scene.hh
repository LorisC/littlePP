#pragma once
#include "AbstractEntity.hh"
#include <list>
class Scene{
private:
  std::list<AbstractEntity*> _entities;
public :
  std::list<AbstractEntity*> GetEntities() const;
  void AddEntity(AbstractEntity*);
  void RemoveEntity(AbstractEntity*);
  void Update();
  Scene();  
};
