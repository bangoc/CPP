#ifndef CHICAGO_PIZZA_STORE_H_
#define CHICAGO_PIZZA_STORE_H_

#include "pizza.h"
#include "pizza_store.h"

#include <memory>

class ChicagoPizzaStore: public PizzaStore {
 public:
  std::unique_ptr<Pizza> CreatePizza(const std::string& item) override;
};

#endif  // CHICAGO_PIZZA_STORE_H_