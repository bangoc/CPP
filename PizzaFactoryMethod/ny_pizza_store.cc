#include "ny_pizza_store.h"

#include "ny_style_cheese_pizza.h"
#include "ny_style_clam_pizza.h"
#include "ny_style_pepperoni_pizza.h"
#include "ny_style_veggie_pizza.h"

std::unique_ptr<Pizza>
    NYPizzaStore::CreatePizza(const std::string& item) {
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