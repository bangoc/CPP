#include "BorderDecorator.h"
#include <iostream>

BorderDecorator::BorderDecorator(VisualComponent* component, int borderWidth)
  : Decorator(component), _width(borderWidth)
{}

void BorderDecorator::Draw () {
    Decorator::Draw();
    DrawBorder(_width);
}

void BorderDecorator::DrawBorder(int width)
{
    std::cout << "BorderDecorator::DrawBorder(" << width << ")" << std::endl;
}
