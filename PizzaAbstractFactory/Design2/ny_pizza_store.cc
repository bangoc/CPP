#include "ny_pizza_store.h"

std::unique_ptr<Pizza>
    NYPizzaStore::CreatePizza(const std::string& item) {
  std::unique_ptr<Pizza> pizza{nullptr};
  std::unique_ptr<PizzaIngredientFactory> ingredient_factory{new NYPizzaIngredientFactory};
  if (item == "cheese") {
    pizza = std::make_unique<CheesePizza>(std::move(ingredient_factory));
    pizza->SetName("New York Style cheese pizza");
  } else if (item == "clams") {
    pizza = std::make_unique<ClamsPizza>(std::move(ingredient_factory));
    pizza->SetName("New York Style clams pizza");
  }
  return pizza;
}