#ifndef CHICAGO_PIZZA_INGREDIENT_FACTORY_H_
#define CHICAGO_PIZZA_INGREDIENT_FACTORY_H_

#include "pizza_ingredient_factory.h"

#include "black_olives.h"
#include "egg_plant.h"
#include "frozen_clams.h"
#include "spinach.h"
#include "sliced_pepperoni.h"
#include "thick_crust_dough.h"
#include "plum_tomato_sauce.h"
#include "mozzarella_cheese.h"

#include <memory>

class ChicagoPizzaIngredientFactory: public PizzaIngredientFactory {
 public:
  std::unique_ptr<Dough> CreateDough() override  {
    return std::make_unique<ThickCrustDough>();
  }

  std::unique_ptr<Sauce> CreateSauce() override {
    return std::make_unique<PlumTomatoSauce>();
  }

  std::unique_ptr<Cheese> CreateCheese() override {
    return std::make_unique<MozzarellaCheese>();
  }

  std::unique_ptr<std::vector<std::unique_ptr<Veggies>>> CreateVeggies() override {
    std::unique_ptr<std::vector<std::unique_ptr<Veggies>>> veggies =
        std::make_unique<std::vector<std::unique_ptr<Veggies>>>();
    veggies->push_back(std::make_unique<BlackOlives>());
    veggies->push_back(std::make_unique<Spinach>());
    veggies->push_back(std::make_unique<EggPlant>());
    return veggies;
  }

  std::unique_ptr<Pepperoni> CreatePepperoni() override {
    return std::make_unique<SlicedPepperoni>();
  }

  std::unique_ptr<Clams> CreateClam() override {
    return std::make_unique<FrozenClams>();
  }
};

#endif  // CHICAGO_PIZZA_INGREDIENT_FACTORY_H_