#include "TextView.h"

#include <iostream>

void TextView::Draw() {
  std::cout << "TextView Draw" << std::endl;
}

TextView::~TextView() {
  std::cout << "TextView D'tor" << std::endl;
}