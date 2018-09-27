#include <chrono>
#include <iostream>
#include <thread>

#include "ClockTimer.h"
#include "AnalogClock.h"
#include "DigitalClock.h"
#include "MyClock.h"

int main() {
    ClockTimer timer;
    AnalogClock clock1{&timer};
    DigitalClock clock2{&timer};
    MyClock clock3{&timer};
    for (;;) {
      timer.Tick();
      std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}