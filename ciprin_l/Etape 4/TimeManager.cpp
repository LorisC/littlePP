#include "TimeManager.hh"
void TimeManager::Start(){
  _startedTime =  std::chrono::duration_cast<  std::chrono::milliseconds >
    (
     std::chrono::system_clock::now().time_since_epoch()
     );
}

void TimeManager::Update(){
  SetUpdateTime();
}

void TimeManager::SetUpdateTime(){
  _lastButOneUpdateTime = _lastUpdateTime;
  _lastUpdateTime =  std::chrono::duration_cast<  std::chrono::milliseconds >
    (
      std::chrono::system_clock::now().time_since_epoch()
     );
}

unsigned int TimeManager::GetElapsedTime() const{

  auto res = _lastUpdateTime - _lastButOneUpdateTime;
  if (res.count() > 0)
    return res.count();
  else
    return 0;
}

unsigned int TimeManager::GetStartedTime() const {
  auto res = _lastUpdateTime - _startedTime;
  return res.count();
}


TimeManager TimeManager::_instance = TimeManager();

TimeManager& TimeManager::GetInstance(){
  return _instance;
}


TimeManager::TimeManager(){
  
}
