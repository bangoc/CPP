#include "Decorator.h"

#include <iostream>

Decorator::Decorator(VisualComponent* component)
  : component_(component)
{}

void Decorator::Draw() {
  component_->Draw();
}

Decorator::~Decorator() {
  std::cout << "Decorator D'tor" << std::endl;
  delete component_;
}