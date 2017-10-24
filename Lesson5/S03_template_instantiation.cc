// Quá trình sinh một hàm hoặc một lớp từ một khuân mẫu và danh sách tham số 
//   gọi là đúc khuân (template instantiation). Phiên bản của khuân mẫu cho một 
//   danh sách tham số cụ thể được gọi là một bản đúc (specialization).
//
// Trình biên dịch (không phải lập trình viên) quyết định tạo các bản đúc cụ thể
//

#include <iostream>

template<typename T>
class C {
public:
  void F1() {
    std::cout << "C::Cf1" << std::endl;
  }
  void F2() {
    std::cout << "C::Cf2" << std::endl;
  }
};

template<typename T>
void Foo(T obj) {
  std::cout << "Foo " << obj << std::endl;
}

int main() {
  C<int> c;   // compile with: g++ -S
  // c.F1();  // uncomment and recompile
  // Foo(1);  //
  // Foo(2.0);  // 
}