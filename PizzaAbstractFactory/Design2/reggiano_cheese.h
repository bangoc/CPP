#ifndef REGGIANO_CHEESE_H_
#define REGGIANO_CHEESE_H_

#include "cheese.h"

class ReggianoCheese: public Cheese {
 public:
  ReggianoCheese() {
    name_ = "Reggiano cheese";
  }
};

#endif  // REGGIANO_CHEESE_H_