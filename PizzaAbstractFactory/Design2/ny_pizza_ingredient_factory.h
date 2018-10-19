#ifndef NY_PIZZA_INGREDIENT_FACTORY_H_
#define NY_PIZZA_INGREDIENT_FACTORY_H_

#include "pizza_ingredient_factory.h"

#include <memory>
#include <vector>

class NYPizzaIngredientFactory: public PizzaIngredientFactory {
 public:
  std::unique_ptr<Dough> CreateDough() override;
  std::unique_ptr<Sauce> CreateSauce() override;
  std::unique_ptr<Cheese> CreateCheese() override;
  std::unique_ptr<std::vector<std::unique_ptr<Veggies>>>
    CreateVeggies() override;
  std::unique_ptr<Pepperoni> CreatePepperoni() override;
  std::unique_ptr<Clams> CreateClam() override;
};

#endif  // NY_PIZZA_INGREDIENT_FACTORY_H_