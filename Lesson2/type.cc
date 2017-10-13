#include <iostream>
#include <typeinfo>

template<class T>
void Foo(T t) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  std::cout << "typeid = " << typeid(t).name() << std::endl;
}
int main() {
  const volatile int** p;
  Foo(p);
}
