#include "chicago_pizza_store.h"

#include "cheese_pizza.h"
#include "chicago_pizza_ingredient_factory.h"
#include "clams_pizza.h"
#include "pizza_ingredient_factory.h"

std::unique_ptr<Pizza>
    ChicagoPizzaStore::CreatePizza(const std::string& item) {
  std::unique_ptr<Pizza> pizza{nullptr};
  std::unique_ptr<PizzaIngredientFactory> ingredient_factory{new ChicagoPizzaIngredientFactory};
  if (item == "cheese") {
    pizza = std::make_unique<CheesePizza>(std::move(ingredient_factory));
    pizza->SetName("Chicago Style Cheese pizza");
  } else if (item == "clams") {
    pizza = std::make_unique<ClamsPizza>(std::move(ingredient_factory));
    pizza->SetName("Chicago Style Clams pizza");
  }
  return pizza;
}