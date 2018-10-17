#ifndef THICK_CRUST_DOUGH_H_
#define THICK_CRUST_DOUGH_H_

#include "dough.h"

class ThickCrustDough: public Dough {
 public:
  ThickCrustDough() {
    name_ = "Thick crust dough";
  }
};

#endif  // THICK_CRUST_DOUGH_H_