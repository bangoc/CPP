#ifndef EGG_PLANT_H_
#define EGG_PLANT_H_

#include "veggies.h"

class EggPlant: public Veggies {
 public:
  EggPlant() {
    name_ = "Egg plant";
  }
};

#endif  // EGG_PLANT_H_