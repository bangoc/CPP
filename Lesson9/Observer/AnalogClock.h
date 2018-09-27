#ifndef ANALOG_CLOCK_H
#define ANALOG_CLOCK_H

#include "Observer.h"
#include "Widget.h"

class ClockTimer;

class AnalogClock : public Widget, public Observer {
public:
  AnalogClock(ClockTimer*);
  ~AnalogClock();
  void Update(Subject*) override;
  void Draw() override;
  // ...
private:
  ClockTimer* subject_;
};

#endif /* ANALOG_CLOCK_H */
