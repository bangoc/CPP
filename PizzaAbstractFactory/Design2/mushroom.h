#ifndef MUSHROOM_H_
#define MUSHROOM_H_

#include "veggies.h"

class Mushroom: public Veggies {
 public:
  Mushroom() {
    name_ = "Mushroom";
  }
};

#endif  // MUSHROOM_H_