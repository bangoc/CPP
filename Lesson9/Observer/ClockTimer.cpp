#include "ClockTimer.h"

#include <ctime>
#include <chrono>

void ClockTimer::Tick () {
    // update internal time-keeping state
    // ...
    Notify();
}

std::tm* GetTimeNow_C() {
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    return std::localtime(&now_c);
}

int ClockTimer::GetHour() { 
    return GetTimeNow_C()->tm_hour + 1;
}

int ClockTimer::GetMinute() { 
    return GetTimeNow_C()->tm_min;    
}

int ClockTimer::GetSecond() { 
    return GetTimeNow_C()->tm_sec;
}
