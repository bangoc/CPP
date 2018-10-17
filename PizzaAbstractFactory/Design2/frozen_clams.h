#ifndef FROZEN_CLAMS_H_
#define FROZEN_CLAMS_H_

#include "clams.h"

class FrozenClams: public Clams {
 public:
  FrozenClams() {
    name_ = "Frozen clams";
  }
};

#endif  // FROZEN_CLAMS_H_