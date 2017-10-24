// + Lvalue và rvalue được phân biệt dựa trên kết quả suy diễn kiểu tham số
// + Chúng ta có thể nạp chồng khuân mẫu hàm

#include <iostream>
#include <string>

template<typename T>
void Foo(T& t) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
}

template<typename T>
void Foo(T&& t) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Foo(int) {
  std::cout << "int specialization for Foo" << std::endl;
}

int main() {
  std::string s = "Hello world";
  Foo(s);
  Foo(std::string("Hello world!"));
  Foo(std::move(s));

  int i;
  Foo(i);
  Foo(std::move(i));
}

// Để giải quyết vần đề đa nghĩa trong lệnh gọi khuân mẫu hàm chúng ta có thể
// chỉ định tường minh kiểu dữ liệu hoặc khai báo những hàm cho những trường 
// hợp đặc biệt