#ifndef NY_STYLE_VEGGIE_PIZZA_H_
#define NY_STYLE_VEGGIE_PIZZA_H_

#include "pizza.h"

class NYStyleVeggiePizza: public Pizza {
 public:
  NYStyleVeggiePizza() {
    name_ = "New York Style Veggie Pizza";
  }
};

#endif  // NY_STYLE_VEGGIE_PIZZA_H_