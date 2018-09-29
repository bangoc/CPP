#include "Window.h"
#include "VisualComponent.h"

#include <iostream>

Window::Window(VisualComponent* contents, const std::string& title)
  : Decorator{contents}, title_{title} {
}

void Window::Draw() {
  Decorator::Draw();
  DrawWindow();
}

void Window::DrawWindow() {
  std::cout << "| Draw Window: " << title_ << " [X] |" << std::endl;
}

Window::~Window() {
  std::cout << title_ << " D'tor" << std::endl;
}