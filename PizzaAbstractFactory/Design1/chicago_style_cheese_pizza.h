#ifndef CHICAGO_STYLE_CHEESE_PIZZA_H_
#define CHICAGO_STYLE_CHEESE_PIZZA_H_

#include "pizza.h"

#include <iostream>

class ChicagoStyleCheesePizza: public Pizza {
 public:
  ChicagoStyleCheesePizza() {
    name_ = "Chicago Style Deep Dish Cheese Pizza";
    dough_ = "Extra Thick Crust Dough";
    sauce_ = "Plum Tomato Sauce";

    toppings_.push_back("Shredded Mozzarella Cheese");
  }

  void Cut() {
    std::cout << "Cutting the pizza into square slices" << std::endl;
  }
};

#endif  // CHICAGO_STYLE_CHEESE_PIZZA_H_