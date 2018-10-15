#ifndef PIZZA_H_
#define PIZZA_H_

#include <iostream>
#include <string>
#include <vector>

class Pizza {
 public:
  virtual void Prepare() {
    std::cout << "Preparing " << name_ << std::endl;
    std::cout << "Tossing dough " << dough_ << std::endl;
    std::cout << "Adding sauce " << sauce_ << std::endl;
    std::cout << "Adding topings: " << std::endl;
    for (int i = 0; i < toppings_.size(); ++i) {
      std::cout << toppings_[i] << std::endl;
    }
  }
  void Bake() {
    std::cout << "Bake for 25 minutes at 350" << std::endl;
  }
  void Cut() {
    std::cout << "Cutting the pizza into dioganal slices" << std::endl;
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
  std::string ToString() {
    // TODO: add more details here
    return name_;
  }
 protected:
  std::string name_;
  std::string dough_;
  std::string sauce_;
  std::vector<std::string> toppings_;
};

#endif  //PIZZA_H_