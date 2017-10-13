#include <iostream>
int main() {
  volatile int clock_register = 10;
  int y = clock_register;
  int z = clock_register + 100;
  std::cout << clock_register << y << z;
}
