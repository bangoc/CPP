// Mặt xấu của const_cast
// ES.50: Don’t cast away const
#include <iostream>

void Foo(const int& a) {
  (const_cast<int&>(a)) += 100;
}
class C {
  public:
    int v = 0;
    void Foo() const;
};
void C::Foo() const {
  (const_cast<C*>(this))->v += 100;
}
int main() {
  int a = 100;
  std::cout << "a before calling Foo: " << a << std::endl;
  Foo(a);
  std::cout << "a after calling Foo: " << a << std::endl;
  C c;
  std::cout << "c before calling C.Foo(): " << c.v << std::endl;
  c.Foo();
  std::cout << "c after calling C.Foo(): " << c.v << std::endl;
} 
