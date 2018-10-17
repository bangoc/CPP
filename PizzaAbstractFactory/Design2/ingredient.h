#ifndef INGREDIENT_H_
#define INGREDIENT_H_

#include <iostream>
#include <string>

class Ingredient {
 public:
  std::string name() {
    return name_;
  }
 protected:
  std::string name_ = "Unknown ingredient";
};

#endif  // INGREDIENT_H_