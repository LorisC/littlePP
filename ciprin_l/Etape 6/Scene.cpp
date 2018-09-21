#include "Scene.hh"
#include "TimeManager.hh"

std::list<AbstractEntity*> Scene::GetEntities() const{
  return _entities;
}
void Scene::AddEntity(AbstractEntity* e){
  _entities.push_front(e);
}

void Scene::RemoveEntity(AbstractEntity* e){
  _entities.remove(e);
}
Scene::Scene(){
  
}

void Scene::Update(){
  TimeManager& t = TimeManager::GetInstance();
  t.Update();
  for (std::list<AbstractEntity*>::iterator it=_entities.begin(); it != _entities.end(); ++it)
    (*it)->Update();
  for (std::list<AbstractEntity*>::iterator it=_entities.begin(); it != _entities.end(); ++it)
    (*it)->Draw();

}
