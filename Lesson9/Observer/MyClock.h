#ifndef MY_CLOCK_H
#define MY_CLOCK_H

#include "Observer.h"
#include "Widget.h"

class ClockTimer;

class MyClock : public Widget, public Observer {
public:
  MyClock(ClockTimer*);
  ~MyClock() override;
  void Update(Subject*) override;
  void Draw() override;

private:
  ClockTimer* subject_;
};

#endif /* MY_CLOCK_H */
