#ifndef DIGITAL_CLOCK_H
#define DIGITAL_CLOCK_H

#include "Widget.h"
#include "Observer.h"

class ClockTimer;
class Subject;

class DigitalClock: public Widget, public Observer {
public:
  DigitalClock(ClockTimer*);
  ~DigitalClock() override;

  void Update(Subject*) override;

  void Draw() override;
private:
  ClockTimer* subject_;
};

#endif /* DIGITAL_CLOCK_H */
