#include <iostream>

#include "ClockTimer.h"
#include "AnalogClock.h"
#include "DigitalClock.h"

int main() {
    ClockTimer timer;
    AnalogClock clock1{&timer};
    DigitalClock clock2{&timer};
    timer.Tick();
}