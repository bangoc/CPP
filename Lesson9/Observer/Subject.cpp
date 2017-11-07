#include "Subject.h"
#include "Observer.h"

void Subject::Attach (Observer* o) {
    _observers.push_back(o);
}

void Subject::Detach (Observer* o) {
    for (auto it =_observers.begin(); it != _observers.end(); ++it) {
        if (*it == o) {
            _observers.erase(it);
            break;
        }
    }
}

void Subject::Notify () {
    for (auto& it: _observers) {
        it->Update(this);
    }
}
