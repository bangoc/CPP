// Khác với khuân mẫu lớp (trình biên dịch không suy diễn các tham số)
// Các tham số của khuân mẫu hàm có thể được suy diễn từ các tham số
// trong lệnh gọi hàm.
//
// Nếu kiểu của tham số cho khuân mẫu không thể suy diễn được từ tham số
// gọi hàm thì chúng ta phải chỉ định một cách tường minh.

#include <iostream>

class C {
public:
  void sayName() {
    std::cout << "C::sayName()" << std::endl;
  }
};

template<typename T, int max>
struct Buffer {
  T buff[max];
};

template<typename T, int max>  // Kiểu của T là C, value = 100
void Foo(Buffer<T, max>& b) {
  T t;  
  t.sayName();
  std::cout << "deduced max: " << max << std::endl;
}

template<typename T>
T* create () {
  return new T();
}

int main() {
  Buffer<C, 100> b;
  Foo(b);

  int* p = create<int>();  // 1. ??
  int q = create();  // 2. ??
}