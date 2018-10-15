#include "chicago_style_clam_pizza.h"
#include "chicago_style_cheese_pizza.h"
#include "chicago_style_veggie_pizza.h"
#include "chicago_style_pepperoni_pizza.h"
#include "pizza.h"
#include "pizza_store.h"

#include <memory>

class ChicagoPizzaStore: public PizzaStore {
 public:
  std::unique_ptr<Pizza> CreatePizza(const std::string& item) override {
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
};
