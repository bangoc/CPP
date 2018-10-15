#ifndef NY_STYLE_CLAM_PIZZA_H_
#define NY_STYLE_CLAM_PIZZA_H_

#include "pizza.h"

class NYStyleClamPizza: public Pizza {
 public:
  NYStyleClamPizza() {
    name_ = "NY Style Clam Pizza";
  }
};

#endif  // NY_STYLE_CLAM_PIZZA_H_