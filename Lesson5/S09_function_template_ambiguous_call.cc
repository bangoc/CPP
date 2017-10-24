// Lệnh gọi hàm dẫn đến nhiều cách duy diễn tham số cho khuân mẫu hàm
//   được coi là lệnh gọi hàm đa nghĩa và đưọc phát hiện khi biên dịch.

#include <iostream>

template<typename T, typename U>
void Foo(const T*, U(*)(U)) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
}

int g(int) {}

void h(const char* p) {}

int main() {
  const char* p;
  Foo(p, g);  // ?
  Foo(p, h);  // ??
}