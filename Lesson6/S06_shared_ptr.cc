// shared_ptr biểu diễn khái niệm chia sẻ quyền làm chủ
//   đối tượng được trỏ tới được xóa khi bộ đếm chuyển về 0

#include <iostream>
#include <memory>
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

void Foo(std::shared_ptr<C> sp) {
  std::cout << "Use count = " << sp.use_count() << std::endl;
}

class B {
public:
  std::shared_ptr<B> member;

  ~B() {
    std::cout << "B::~B()" << std::endl;
  }
};

int main() {
  {
    std::shared_ptr<C> sp1(new C{});
    Foo(sp1);

    std::cout << "Use count after Foo = " << sp1.use_count() << std::endl;
  }

  std::cout << "Scope 2" << std::endl;

  std::shared_ptr<B> b1 {new B()};
  std::shared_ptr<B> b2 {new B()};

  // make a circular reference which will cause a memleak
  b1->member = b2;
  b2->member = b1;
}