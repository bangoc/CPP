#include "chicago_pizza_store.h"

#include "chicago_style_clam_pizza.h"
#include "chicago_style_cheese_pizza.h"
#include "chicago_style_veggie_pizza.h"
#include "chicago_style_pepperoni_pizza.h"

std::unique_ptr<Pizza>
    ChicagoPizzaStore::CreatePizza(const std::string& item) {
  if (item == "cheese") {
    return std::make_unique<ChicagoStyleCheesePizza>();
  } else if (item == "veggie") {
    return std::make_unique<ChicagoStyleVeggiePizza>();
  } else if (item == "clam") {
    return std::make_unique<ChicagoStyleClamPizza>();
  } else if (item == "pepperoni") {
    return std::make_unique<ChicagoStylePepperoniPizza>();
  }
  return nullptr;
}