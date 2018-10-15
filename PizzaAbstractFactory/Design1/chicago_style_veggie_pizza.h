#ifndef CHICAGO_STYLE_VEGGIE_PIZZA_H_
#define CHICAGO_STYLE_VEGGIE_PIZZA_H_

#include "pizza.h"

class ChicagoStyleVeggiePizza: public Pizza {
 public:
  ChicagoStyleVeggiePizza() {
    name_ = "Chicago Style Veggie Pizza";
  }
};

#endif  // CHICAGO_STYLE_VEGGIE_PIZZA_H_