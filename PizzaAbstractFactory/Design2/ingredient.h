#ifndef INGREDIENT_H_
#define INGREDIENT_H_

#include <iostream>
#include <string>

class Ingredient {
 public:
  std::string name();
 protected:
  std::string name_ = "Unknown ingredient";
};

#endif  // INGREDIENT_H_