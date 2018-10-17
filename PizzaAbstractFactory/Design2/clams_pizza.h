#ifndef CLAMS_PIZZA_H_
#define CLAMS_PIZZA_H_

#include "pizza.h"

class ClamsPizza: public Pizza {
 public:
  ClamsPizza(std::unique_ptr<PizzaIngredientFactory> ingredient_factory)
      : Pizza{std::move(ingredient_factory)} {}
  void Prepare() override {
    std::cout << "Preparing " << name_ << " with: " << std::endl;
    dough_ = ingredient_factory_->CreateDough();
    sauce_ = ingredient_factory_->CreateSauce();
    cheese_ = ingredient_factory_->CreateCheese();
    clam_ = ingredient_factory_->CreateClam();
    std::cout << "   " << dough_->name() << std::endl
              << "   " << sauce_->name() << std::endl
              << "   " << cheese_->name() << std::endl
              << "   " << clam_->name() << std::endl;
  }
};

#endif  // CLAMS_PIZZA_H_