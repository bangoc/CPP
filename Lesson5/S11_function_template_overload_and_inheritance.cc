// Luật lựa chọn hàm nạp chồng đảm bảo khuân mẫu hàm làm việc đúng
// với cây thừa kế

#include <iostream>
template<typename T>
  class B {
  public:
    virtual void Foo() {
      std::cout << "B::foo()" << std::endl;
    }
  };

template<typename T>
  class D: public B<T> {
  public:
    void Foo() override {
      std::cout << "D::foo()" << std::endl;
    }
  };

template<typename T>
  void f(B<T>* obj) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    obj->Foo();
  }

int main() {
  f(new B<int>);
  f(new D<double>);
}