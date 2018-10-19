#include "chicago_pizza_ingredient_factory.h"

#include "black_olives.h"
#include "egg_plant.h"
#include "frozen_clams.h"
#include "spinach.h"
#include "sliced_pepperoni.h"
#include "thick_crust_dough.h"
#include "plum_tomato_sauce.h"
#include "mozzarella_cheese.h"

std::unique_ptr<Dough>
    ChicagoPizzaIngredientFactory::CreateDough() {
  return std::make_unique<ThickCrustDough>();
}

std::unique_ptr<Sauce>
    ChicagoPizzaIngredientFactory::CreateSauce() {
  return std::make_unique<PlumTomatoSauce>();
}

std::unique_ptr<Cheese>
    ChicagoPizzaIngredientFactory::CreateCheese() {
  return std::make_unique<MozzarellaCheese>();
}

std::unique_ptr<std::vector<std::unique_ptr<Veggies>>>
    ChicagoPizzaIngredientFactory::CreateVeggies() {
  std::unique_ptr<std::vector<std::unique_ptr<Veggies>>> veggies =
      std::make_unique<std::vector<std::unique_ptr<Veggies>>>();
  veggies->push_back(std::make_unique<BlackOlives>());
  veggies->push_back(std::make_unique<Spinach>());
  veggies->push_back(std::make_unique<EggPlant>());
  return veggies;
}

std::unique_ptr<Pepperoni>
    ChicagoPizzaIngredientFactory::CreatePepperoni() {
  return std::make_unique<SlicedPepperoni>();
}

std::unique_ptr<Clams>
    ChicagoPizzaIngredientFactory::CreateClam() {
  return std::make_unique<FrozenClams>();
}