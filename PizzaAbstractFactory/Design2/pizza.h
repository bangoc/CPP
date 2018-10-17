#ifndef PIZZA_H_
#define PIZZA_H_

#include "cheese.h"
#include "clams.h"
#include "dough.h"
#include "pepperoni.h"
#include "pizza.h"
#include "pizza_ingredient_factory.h"
#include "sauce.h"
#include "veggies.h"

#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Pizza {
 public:
  Pizza(std::unique_ptr<PizzaIngredientFactory> ingredient_factory)
      : ingredient_factory_{std::move(ingredient_factory)} {}

  virtual void Prepare() = 0;

  void Bake() {
    std::cout << "Bake for 25 minutes at 350" << std::endl;
  }

  void Cut() {
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
  }

  void Box() {
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
  }

  void SetName(const std::string& name) {
    name_ = name;
  }

  std::string name() {
    return name_;
  }
 protected:
  std::string name_;
  std::unique_ptr<Dough> dough_;
  std::unique_ptr<Sauce> sauce_;
  std::unique_ptr<std::vector<std::unique_ptr<Veggies>>> veggies_;
  std::unique_ptr<Cheese> cheese_;
  std::unique_ptr<Pepperoni> pepperoni_;
  std::unique_ptr<Clams> clam_;
  std::unique_ptr<PizzaIngredientFactory> ingredient_factory_;
};

#endif  // PIZZA_H_