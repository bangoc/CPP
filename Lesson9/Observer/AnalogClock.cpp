#include "AnalogClock.h"
#include "ClockTimer.h"
#include <iostream>

AnalogClock::AnalogClock (ClockTimer* s) {
  subject_ = s;
  subject_->Attach(this);
}

AnalogClock::~AnalogClock () {
  subject_->Detach(this);
}

void AnalogClock::Update (Subject* theChangedSubject) {
  if (theChangedSubject == subject_) {
    Draw();
  }
}

void AnalogClock::Draw () {
  int hour = subject_->GetHour();
  int minute = subject_->GetMinute();
  int second = subject_->GetSecond();
  std::cout << "Analog clock: " << hour << ":" << minute << ":" << second << std::endl;
}
