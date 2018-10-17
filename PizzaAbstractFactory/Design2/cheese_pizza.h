#ifndef CHEESE_PIZZA_H_
#define CHEESE_PIZZA_H_

#include "pizza.h"

#include <memory>

class CheesePizza: public Pizza {
 public:
  CheesePizza(std::unique_ptr<PizzaIngredientFactory> ingredient_factory)
      : Pizza(std::move(ingredient_factory)) {}
  void Prepare() override {
    std::cout << "Preparing " << name_ << " with: " << std::endl;
    dough_ = ingredient_factory_->CreateDough();
    sauce_ = ingredient_factory_->CreateSauce();
    cheese_ = ingredient_factory_->CreateCheese();
    std::cout << "   " << dough_->name() << std::endl
              << "   " << sauce_->name() << std::endl
              << "   " << cheese_->name() << std::endl;
  }
};

#endif  // CHEESE_PIZZA_H_