#include "pizza.h"

void Pizza::Prepare() {
  std::cout << "Preparing " << name_ << std::endl;
  std::cout << "Tossing dough " << dough_ << std::endl;
  std::cout << "Adding sauce " << sauce_ << std::endl;
  std::cout << "Adding topings: " << std::endl;
  for (int i = 0; i < toppings_.size(); ++i) {
    std::cout << "\t" << toppings_[i] << std::endl;
  }
}

void Pizza::Bake() {
  std::cout << "Bake for 25 minutes at 350" << std::endl;
}

void Pizza::Cut() {
  std::cout << "Cutting the pizza into dioganal slices" << std::endl;
}

void Pizza::Box() {
  std::cout << "Place pizza in official PizzaStore box" << std::endl;
}

void Pizza::SetName(const std::string& name) {
  name_ = name;
}

std::string Pizza::name() {
  return name_;
}

std::string Pizza::ToString() {
  // TODO: add more details here
  return name_;
}
