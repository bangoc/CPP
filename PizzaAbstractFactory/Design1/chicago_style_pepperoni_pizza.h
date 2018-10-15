#ifndef CHICAGO_STYLE_PEPPERONI_PIZZA_H_
#define CHICAGO_STYLE_PEPPERONI_PIZZA_H_

#include "pizza.h"

class ChicagoStylePepperoniPizza: public Pizza {
 public:
  ChicagoStylePepperoniPizza() {
    name_ = "Chicago Style Pepperoni Pizza";
  }
};

#endif  // CHICAGO_STYLE_PEPPERONI_PIZZA_H_