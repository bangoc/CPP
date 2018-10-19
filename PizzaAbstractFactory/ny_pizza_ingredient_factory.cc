#include "ny_pizza_ingredient_factory.h"

#include "fresh_clams.h"
#include "garlic.h"
#include "marinara_sauce.h"
#include "mushroom.h"
#include "onion.h"
#include "reggiano_cheese.h"
#include "red_pepper.h"
#include "sliced_pepperoni.h"
#include "thin_crust_dough.h"


std::unique_ptr<Dough>
    NYPizzaIngredientFactory::CreateDough() {
  return std::make_unique<ThinCrustDough>();
}

std::unique_ptr<Sauce>
    NYPizzaIngredientFactory::CreateSauce() {
  return std::make_unique<MarinaraSauce>();
}

std::unique_ptr<Cheese>
    NYPizzaIngredientFactory::CreateCheese() {
  return std::make_unique<ReggianoCheese>();
}

std::unique_ptr<std::vector<std::unique_ptr<Veggies>>>
    NYPizzaIngredientFactory::CreateVeggies() {
  std::unique_ptr<std::vector<std::unique_ptr<Veggies>>> veggies =
      std::make_unique<std::vector<std::unique_ptr<Veggies>>>();
  veggies->push_back(std::make_unique<Garlic>());
  veggies->push_back(std::make_unique<Onion>());
  veggies->push_back(std::make_unique<Mushroom>());
  veggies->push_back(std::make_unique<RedPepper>());
  return veggies;
}

std::unique_ptr<Pepperoni>
    NYPizzaIngredientFactory::CreatePepperoni() {
  return std::make_unique<SlicedPepperoni>();
}

std::unique_ptr<Clams>
    NYPizzaIngredientFactory::CreateClam() {
  return std::make_unique<FreshClams>();
}