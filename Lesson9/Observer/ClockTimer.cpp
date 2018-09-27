#include "ClockTimer.h"

#include <ctime>
#include <chrono>

ClockTimer::ClockTimer():
  hour_{0}, minute_{0}, second_{0} {
}

void ClockTimer::Tick () {
  std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
  std::time_t now_c = std::chrono::system_clock::to_time_t(now);
  std::tm* now_tm = std::localtime(&now_c);
  hour_ = now_tm->tm_hour;
  minute_ = now_tm->tm_min;
  second_ = now_tm->tm_sec;

  Notify();
}

int ClockTimer::GetHour() {
  return hour_;
}

int ClockTimer::GetMinute() {
  return minute_;
}

int ClockTimer::GetSecond() {
  return second_;
}
