#include "ival_demo.h"

#include <iostream>
#include <FL/Fl.H>

int main() {
  Fl_Double_Window* slider = make_slider();
  slider->show();
  Fl::run();

  int v = mySlider->value();
  std::cout << "You input: " << v << std::endl;

  delete slider;

  Fl_Double_Window* dial = make_dial();
  dial->show();
  Fl::run();
  v = myDial->value();
  std::cout << "You input: " << v << std::endl;

  delete dial;
}