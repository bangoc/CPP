#include "Subject.h"
#include "Observer.h"

void Subject::Attach (Observer* o) {
  observers_.push_back(o);
}

void Subject::Detach (Observer* o) {
  for (auto it =observers_.begin(); it != observers_.end(); ++it) {
    if (*it == o) {
      observers_.erase(it);
      break;
    }
  }
}

void Subject::Notify () {
  for (auto& it: observers_) {
    it->Update(this);
  }
}
