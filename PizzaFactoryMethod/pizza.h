#ifndef PIZZA_H_
#define PIZZA_H_

#include <iostream>
#include <string>
#include <vector>

class Pizza {
 public:
  virtual void Prepare();
  void Bake();
  void Cut();
  void Box();
  void SetName(const std::string& name);
  std::string name();
  std::string ToString();
 protected:
  std::string name_;
  std::string dough_;
  std::string sauce_;
  std::vector<std::string> toppings_;
};

#endif  //PIZZA_H_