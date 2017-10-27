// Kiểu của lambda không được định nghĩa vì mục đích tối ưu
// , tuy nhiên chúng ta có thể sử dụng lambda để khởi tạo
// đối tượng std::function<R(AL)>, trong đó R là kiểu trả về
//  của lambda và AL là danh sách tham số.
//

#include <iostream>
#include <string>
#include <functional>

template<typename T>
void PrintType(T t) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
}

using Func = std::function<double(const char* s, int, int)>;

int main() {
  auto l1 = [&] (const char* s, int a, int b) -> double { 
    std::cout << s << " " << a << " " << b << std::endl;
    return a + b + 1.0; 
  };

  PrintType(l1);
  l1("l1", 1, 2);

  Func f1 = l1;
  Func f2;
  f2 = f1;

  f1("f1", 1, 1);
  f2("f2", 2, 2);

  f2 = std::move(f1);
  f2("f2", 2, 2);
  f1("f1", 1, 1);  // ??
}