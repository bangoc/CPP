#ifndef CLOCK_TIMER_H
#define CLOCK_TIMER_H

#include "Subject.h"

class ClockTimer : public Subject {
public:
  ClockTimer();
  ~ClockTimer() override {}
  int GetHour();
  int GetMinute();
  int GetSecond();

  void Tick();

private:
  int hour_, minute_, second_;
};

#endif /* CLOCK_TIMER_H */
