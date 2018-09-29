#include "BorderDecorator.h"
#include <iostream>

BorderDecorator::BorderDecorator(VisualComponent* component, int border_width)
  : Decorator(component), width_(border_width)
{}

void BorderDecorator::Draw () {
  Decorator::Draw();
  DrawBorder(width_);
}

void BorderDecorator::DrawBorder(int width)
{
  std::cout << "BorderDecorator::DrawBorder(" << width << ")" << std::endl;
}

BorderDecorator::~BorderDecorator() {
  std::cout << "BorderDecorator D'tor" << std::endl;
}