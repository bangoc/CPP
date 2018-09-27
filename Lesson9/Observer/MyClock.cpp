#include "MyClock.h"
#include "ClockTimer.h"
#include <iostream>

MyClock::MyClock (ClockTimer* s) {
  subject_ = s;
  subject_->Attach(this);
}

MyClock::~MyClock () {
  subject_->Detach(this);
}

void MyClock::Update (Subject* the_changed_subject) {
  if (the_changed_subject == subject_) {
    Draw();
  }
}

void MyClock::Draw () {
  int hour = subject_->GetHour();
  int minute = subject_->GetMinute();
  int second = subject_->GetSecond();

  std::cout << "My clock: " << hour << ":" << minute << ":" << second << std::endl;
}
