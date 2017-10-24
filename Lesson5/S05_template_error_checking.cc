// Trinh biên dịch không phát hiện được lỗi liên quan đến tham số của khuân mẫu
// cho tới khi khuân mẫu được sử dụng
//
// Trình biên dịch được phép gác lại những kiểm tra cho tới pha liên kết

#include <iostream>

template<typename T>
class C {
public:
  static void Foo(const T& t);
};

template<typename T>
void C<T>::Foo(const T& t) {
  std::cout << t << std::endl;
}

struct Complex {
  double real_;
  double img_;
};

int main() {
  C<int>::Foo(10);
  C<double>::Foo(100.2);
  Complex c1 {1, 1};
  C<Complex>::Foo(c1);
}