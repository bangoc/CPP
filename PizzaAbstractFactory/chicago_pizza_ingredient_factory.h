#ifndef CHICAGO_PIZZA_INGREDIENT_FACTORY_H_
#define CHICAGO_PIZZA_INGREDIENT_FACTORY_H_

#include "pizza_ingredient_factory.h"

#include <memory>

class ChicagoPizzaIngredientFactory: public PizzaIngredientFactory {
 public:
  std::unique_ptr<Dough> CreateDough() override;
  std::unique_ptr<Sauce> CreateSauce() override;
  std::unique_ptr<Cheese> CreateCheese() override;
  std::unique_ptr<std::vector<std::unique_ptr<Veggies>>>
    CreateVeggies() override;
  std::unique_ptr<Pepperoni> CreatePepperoni() override;
  std::unique_ptr<Clams> CreateClam() override;
};

#endif  // CHICAGO_PIZZA_INGREDIENT_FACTORY_H_