#ifndef PIZZA_STORE_H_
#define PIZZA_STORE_H_

#include "pizza.h"

#include <memory>
#include <string>

class PizzaStore {
 public:
  std::unique_ptr<Pizza> OrderPizza(const std::string& type) {
    std::unique_ptr<Pizza> pizza = CreatePizza(type);
    pizza->Prepare();
    pizza->Bake();
    pizza->Cut();
    pizza->Box();
    return pizza;
  }
  virtual std::unique_ptr<Pizza> CreatePizza(const std::string& type) = 0;
};

#endif  // PIZZA_STORE_H_