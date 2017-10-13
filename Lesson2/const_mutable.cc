#include <iostream>

class C {
  public:
    mutable int m = 100;
    int ii = 100;
};

int main() {
  const C c;
  std::cout << "c.m before modification: " << c.m << std::endl;
  c.m = 1000;
  std::cout << "c.m after modification: " << c.m << std::endl;
  // c.ii = 100;  // compile error
}
