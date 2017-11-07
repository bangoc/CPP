#include "AnalogClock.h"
#include "ClockTimer.h"
#include <iostream>

AnalogClock::AnalogClock (ClockTimer* s) {
    _subject = s;
    _subject->Attach(this);
}

AnalogClock::~AnalogClock () {
    _subject->Detach(this);
}

void AnalogClock::Update (Subject* theChangedSubject) {
    if (theChangedSubject == _subject) {
        Draw();
    }
}

void AnalogClock::Draw () {
    // get the new values from the subject

    int hour = _subject->GetHour();
    int minute = _subject->GetMinute();
    int second = _subject->GetSecond();

    // draw the digital clock
    std::cout << "Analog clock: " << hour << ":" << minute << ":" << second << std::endl;
}
