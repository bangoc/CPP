#ifndef MOZZARELLA_CHEESE_H_
#define MOZZARELLA_CHEESE_H_

#include "cheese.h"

class MozzarellaCheese: public Cheese {
 public:
  MozzarellaCheese() {
    name_ = "Mozzarella cheese";
  }
};

#endif  // MOZZARELLA_CHEESE_H_