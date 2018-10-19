#ifndef NY_PIZZA_STORE_H_
#define NY_PIZZA_STORE_H_

#include "cheese_pizza.h"
#include "clams_pizza.h"
#include "pizza.h"
#include "pizza_ingredient_factory.h"
#include "ny_pizza_ingredient_factory.h"
#include "pizza_store.h"

#include <memory>
#include <string>

class NYPizzaStore: public PizzaStore {
 public:
  std::unique_ptr<Pizza> CreatePizza(const std::string& item) override;
};

#endif  // NY_PIZZA_STORE_H_