#include <chrono>
#include <iostream>
#include <thread>

#include "ClockTimer.h"
#include "AnalogClock.h"
#include "DigitalClock.h"
#include "MyClock.h"

void DoIter(ClockTimer& timer, int max_iter) {
  int iter_counter = 0;
  for (;;) {
    timer.Tick();
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    iter_counter++;
    if (iter_counter >= max_iter) {
      break;
    }
  }
}

int main() {
    ClockTimer timer;
    AnalogClock clock1{&timer};
    DigitalClock clock2{&timer};
    DoIter(timer, 3);
    {
      MyClock clock3{&timer};
      DoIter(timer, 3);
    }
    DoIter(timer, 3);
}