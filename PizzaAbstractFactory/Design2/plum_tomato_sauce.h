#ifndef PLUM_TOMATO_SAUCE_H_
#define PLUM_TOMATO_SAUCE_H_

#include "sauce.h"

class PlumTomatoSauce: public Sauce {
 public:
  PlumTomatoSauce() {
    name_ = "Plum tomato sauce";
  }
};

#endif  // PLUM_TOMATO_SAUCE_H_