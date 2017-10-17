// Hàm hủy sẽ được gọi ngầm định khi điều khiển ra khỏi vùng đối tượng, hoặc
// khi gọi delete.
//
// Rất ít khi cần gọi hàm hủy một cách tường minh
//
#include <iostream>
#include <string>
class X {
  public:
    X() {
      s_ = new std::string("Hello world");
    }
    ~X() {
      delete s_;
    }
    std::string s() {
      return *s_;
    }
  private:
    std::string* s_;
};

class C {
  public:
    ~C() {}
    X x;
};
int main() {
  C c;
  std::cout << c.x.s() << std::endl;
  // C* p = &c;
  // delete p;
  c.~C();
  std::cout << c.x.s() << std::endl;
}
