#pragma once
#include <ctime>
#include <chrono>
class TimeManager{
private :
  TimeManager(const TimeManager &);
  TimeManager();
  TimeManager & operator= (const TimeManager &);
  static TimeManager _instance;
  std::chrono::milliseconds _startedTime;
  std::chrono::milliseconds _lastButOneUpdateTime;
  std::chrono::milliseconds _lastUpdateTime;
  void SetUpdateTime();
public :
  static TimeManager &GetInstance();
  void Start();
  void Update();
  unsigned int GetElapsedTime() const;
  unsigned int GetStartedTime() const;
};


