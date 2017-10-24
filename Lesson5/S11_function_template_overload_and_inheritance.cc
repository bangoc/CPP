// Luật lựa chọn hàm nạp chồng đảm bảo khuân mẫu hàm làm việc đúng
// với cây thừa kế

#include <iostream>
template<typename T>
  class B {};

template<typename T>
  class D: public B<T> {};

template<typename T>
  void f(B<T>*) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
  }

int main() {
  f(new B<int>);
  f(new D<int>);
}