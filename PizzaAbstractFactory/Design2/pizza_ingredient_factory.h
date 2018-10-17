#ifndef PIZZA_INGREDIENT_FACTORY_H_
#define PIZZA_INGREDIENT_FACTORY_H_

#include "cheese.h"
#include "clams.h"
#include "dough.h"
#include "pepperoni.h"
#include "sauce.h"
#include "veggies.h"

#include <memory>
#include <vector>

class PizzaIngredientFactory {
 public:
  virtual std::unique_ptr<Dough> CreateDough() = 0;
  virtual std::unique_ptr<Sauce> CreateSauce() = 0;
  virtual std::unique_ptr<Cheese> CreateCheese() = 0;
  virtual std::unique_ptr<std::vector<std::unique_ptr<Veggies>>> CreateVeggies() = 0;
  virtual std::unique_ptr<Pepperoni> CreatePepperoni() = 0;
  virtual std::unique_ptr<Clams> CreateClam() = 0;
};

#endif  // PIZZA_INGREDIENT_FACTORY_H_