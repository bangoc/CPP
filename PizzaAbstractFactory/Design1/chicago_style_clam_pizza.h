#ifndef CHICAGO_STYLE_CLAM_PIZZA_H_
#define CHICAGO_STYLE_CLAM_PIZZA_H_

#include "pizza.h"

class ChicagoStyleClamPizza: public Pizza {
 public:
  ChicagoStyleClamPizza() {
    name_ = "Chicago Style Clam Pizza";
  }
};

#endif  // CHICAGO_STYLE_CLAM_PIZZA_H_