#ifndef THIN_CRUST_DOUGH_H_
#define THIN_CRUST_DOUGH_H_

#include "dough.h"

class ThinCrustDough: public Dough {
 public:
  ThinCrustDough() {
    name_ = "Thin crust dough";
  }
};

#endif  // THIN_CRUST_DOUGH_H_