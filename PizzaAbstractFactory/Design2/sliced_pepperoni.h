#ifndef SLICED_PEPPERONI_H_
#define SLICED_PEPPERONI_H_

#include "pepperoni.h"

class SlicedPepperoni: public Pepperoni {
 public:
  SlicedPepperoni() {
    name_ = "Sliced pepperoni";
  }
};

#endif  // SLICED_PEPPERONI_H_