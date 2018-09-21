#pragma once
#include <list>
class IObserver;
class IObservable {
protected:
  std::list<IObserver*> _observers;
public:
  virtual void AddObserver(IObserver*) {}
  virtual void RemoveObserver(IObserver*) {}
protected:
  virtual ~IObservable(){}
};
