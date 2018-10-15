#ifndef NY_PIZZA_STORE_H_
#define NY_PIZZA_STORE_H_

#include "pizza.h"
#include "pizza_store.h"
#include "ny_style_cheese_pizza.h"
#include "ny_style_clam_pizza.h"
#include "ny_style_pepperoni_pizza.h"
#include "ny_style_veggie_pizza.h"

#include <memory>
#include <string>

class NYPizzaStore: public PizzaStore {
 public:
  std::unique_ptr<Pizza> CreatePizza(const std::string& item) override {
    if (item == "cheese") {
      return std::make_unique<NYStyleCheesePizza>();
    } else if (item == "veggie") {
      return std::make_unique<NYStyleVeggiePizza>();
    } else if (item == "clam") {
      return std::make_unique<NYStyleClamPizza>();
    } else if (item == "pepperoni") {
      return std::make_unique<NYStylePepperoniPizza>();
    }
    return nullptr;
  }
};

#endif  // NY_PIZZA_STORE_H_