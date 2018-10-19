#include "pizza_store.h"

std::unique_ptr<Pizza>
    PizzaStore::OrderPizza(const std::string& type) {
  std::unique_ptr<Pizza> pizza = CreatePizza(type);
  pizza->Prepare();
  pizza->Bake();
  pizza->Cut();
  pizza->Box();
  return pizza;
}