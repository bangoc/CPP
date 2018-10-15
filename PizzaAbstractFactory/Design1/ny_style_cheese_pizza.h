#ifndef NY_STYLE_CHEESE_PIZZA_H_
#define NY_STYLE_CHEESE_PIZZA_H_

#include "pizza.h"

class NYStyleCheesePizza: public Pizza {
 public:
  NYStyleCheesePizza() {
    name_ = "NY Style Sauce and Cheese Pizza";
    dough_ = "Thin Crust Dough";
    sauce_ = "Marinara Sauce";

    toppings_.push_back("Grated Reggiano Cheese");
  }
};

#endif  // NY_STYLE_CHEESE_PIZZA_H_