// Một weak_ptr trỏ đến một đối tượng được quản lý bởi một shared_ptr
//   Để sử dụng đối tượng, weak_ptr cần phải được chuyển đổi thành
//   một shared_ptr bằng phương thức lock()
//
// weak_ptr được dùng để phá vỡ tham chiếu vòng

#include <memory>
#include <iostream>
#include <string>

class C {
public:
  C(): name_{"default"} {
    std::cout << "C Ctor" << std::endl;
  }
  C(std::string name) : name_{name} {
    std::cout << name << " C Ctor" << std::endl;
  }
  ~C() {
    std::cout << name_ << " C Dtor" << std::endl;
  }
private:
  std::string name_;
};

class B {
public:
  std::weak_ptr<B> member;

  ~B() {
    std::cout << "B::~B()" << std::endl;
  }
};

int main() {
  std::weak_ptr<C> w1;
  std::cout << "Scope 1" << std::endl;
  w1 = std::make_shared<C>("C1");
  if (w1.lock()) {
    std::cout << "object in w1 is available" << std::endl;
  } else {
    std::cout << "object in w1 is expired" << std::endl;
  }

  std::cout << "Scope 2" << std::endl;
  std::weak_ptr<C> w2;
  {
    std::shared_ptr<C> sp2 = std::make_shared<C>("C2");
    w2 = sp2;
    if (w2.lock()) {
      std::cout << "Not destroyed" << std::endl;
    } else {
      std::cout << "Destroyed" << std::endl;
    }
  }
  if (w2.lock()) {
    std::cout << "Not destroyed" << std::endl;
  } else {
    std::cout << "Destroyed" << std::endl;
  }

  std::cout << "Scope 3" << std::endl;
  std::shared_ptr<B> b1 {new B()};
  std::shared_ptr<B> b2 {new B()};

  // make a circular reference which will cause a memleak
  b1->member = b2;
  b2->member = b1;
}