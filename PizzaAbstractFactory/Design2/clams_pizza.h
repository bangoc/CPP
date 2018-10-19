#ifndef CLAMS_PIZZA_H_
#define CLAMS_PIZZA_H_

#include "pizza.h"

class ClamsPizza: public Pizza {
 public:
  ClamsPizza(std::unique_ptr<PizzaIngredientFactory> ingredient_factory);

  void Prepare() override;
};

#endif  // CLAMS_PIZZA_H_