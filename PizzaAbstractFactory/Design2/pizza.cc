#include "pizza.h"

Pizza::Pizza(
  std::unique_ptr<PizzaIngredientFactory> ingredient_factory)
        : ingredient_factory_{std::move(ingredient_factory)} {
}

void Pizza::Bake() {
  std::cout << "Bake for 25 minutes at 350" << std::endl;
}

void Pizza::Cut() {
  std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void Pizza::Box() {
  std::cout << "Place pizza in official PizzaStore box" << std::endl;
}

void Pizza::SetName(const std::string& name) {
  name_ = name;
}

std::string Pizza::name() {
  return name_;
}