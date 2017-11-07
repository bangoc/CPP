#ifndef ANALOG_CLOCK_H
#define ANALOG_CLOCK_H

#include "Observer.h"
#include "Widget.h"

class ClockTimer;

class AnalogClock : public Widget, public Observer {
public:
    AnalogClock(ClockTimer*);
    ~AnalogClock();
    virtual void Update(Subject*);
    virtual void Draw();
    // ...
private:
    ClockTimer* _subject;
};

#endif /* ANALOG_CLOCK_H */
