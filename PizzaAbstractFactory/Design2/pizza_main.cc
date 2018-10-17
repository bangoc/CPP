#include "chicago_pizza_store.h"
#include "ny_pizza_store.h"
#include "pizza.h"
#include "pizza_store.h"

#include <iostream>
#include <memory>

int main(int argc, char* argv[]) {
  std::unique_ptr<PizzaStore> ny_store = std::make_unique<NYPizzaStore>();
  std::unique_ptr<PizzaStore> chicago_store = std::make_unique<ChicagoPizzaStore>();

  {
    std::unique_ptr<Pizza> pizza = ny_store->OrderPizza("cheese");
    std::cout << "Ethan ordered a " << pizza->name() << std::endl;
  }

  {
    std::unique_ptr<Pizza> pizza = chicago_store->OrderPizza("cheese");
    std::cout << "Joel ordered a " << pizza->name() << std::endl;
  }

  {
    std::unique_ptr<Pizza> pizza = ny_store->OrderPizza("clams");
    std::cout << "Ethan ordered a " << pizza->name() << std::endl;
  }

  {
    std::unique_ptr<Pizza> pizza = chicago_store->OrderPizza("clams");
    std::cout << "Joel ordered a " << pizza->name() << std::endl;
  }
}