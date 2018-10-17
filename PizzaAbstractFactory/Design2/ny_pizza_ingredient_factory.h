#ifndef NY_PIZZA_INGREDIENT_FACTORY_H_
#define NY_PIZZA_INGREDIENT_FACTORY_H_

#include "fresh_clams.h"
#include "garlic.h"
#include "marinara_sauce.h"
#include "mushroom.h"
#include "onion.h"
#include "pizza_ingredient_factory.h"
#include "reggiano_cheese.h"
#include "red_pepper.h"
#include "sliced_pepperoni.h"
#include "thin_crust_dough.h"

#include <memory>
#include <vector>

class NYPizzaIngredientFactory: public PizzaIngredientFactory {
 public:
  std::unique_ptr<Dough> CreateDough() override  {
    return std::make_unique<ThinCrustDough>();
  }

  std::unique_ptr<Sauce> CreateSauce() override {
    return std::make_unique<MarinaraSauce>();
  }

  std::unique_ptr<Cheese> CreateCheese() override {
    return std::make_unique<ReggianoCheese>();
  }

  std::unique_ptr<std::vector<std::unique_ptr<Veggies>>> CreateVeggies() override {
    std::unique_ptr<std::vector<std::unique_ptr<Veggies>>> veggies =
        std::make_unique<std::vector<std::unique_ptr<Veggies>>>();
    veggies->push_back(std::make_unique<Garlic>());
    veggies->push_back(std::make_unique<Onion>());
    veggies->push_back(std::make_unique<Mushroom>());
    veggies->push_back(std::make_unique<RedPepper>());
    return veggies;
  }

  std::unique_ptr<Pepperoni> CreatePepperoni() override {
    return std::make_unique<SlicedPepperoni>();
  }

  std::unique_ptr<Clams> CreateClam() override {
    return std::make_unique<FreshClams>();
  }
};

#endif  // NY_PIZZA_INGREDIENT_FACTORY_H_