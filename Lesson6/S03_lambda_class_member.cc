#include <iostream>

class C {
private:
  static int st_i;
  int m_i;
public:
  void Run() {
      // một lambda tối giản được định nghĩa như sau
    auto l0 =[]{};
    int ii = 100;

    auto l1 = [] {
      // Đây là một lambda không tham số, không thu đối tượng

      std::cout << "l1: " << std::endl;
      // std::cout << ii << std::endl;  // 1. ??
      std::cout << m_i << std::endl;  // 2. ??
      std::cout << st_i << std::endl; // 3. ??
    };
    l1();

    auto l2 = [=] {
      // Ngầm thu theo gía trị

      std::cout << "l2: " << std::endl;
      // ii = 1000;  //  ??
      std::cout << ii << std::endl;  // 4. ??
      std::cout << m_i << std::endl;  // 5. ??
      this->m_i = 101;  // 6. ??
    };
    l2();

    auto l3 = [&] {
      // Ngầm thu theo tham chiếu

      std::cout << "l3: " << std::endl;
      ii = 1000;  //  ??
      std::cout << ii << std::endl;  // 5. ??
      std::cout << m_i << std::endl;  // 6. ??
    };
    l3();

    int ii2 = 123;

    // Có thể truyền tham số cho lambda
    auto l4 = [] (int a, int& b) {
      a = 123;
      b = 10000;
    };
    l4(ii, ii2);
    std::cout << ii << "  " << ii2 << std::endl;

    // lambda có thể trả về gía trị, kiểu trả về có thể ngầm định
    auto l5 = [] (int a, int b) {
      return a + b;
    };
    std::cout << ii << " + " << ii2 << " = " << l5(ii, ii2) << std::endl;

    // có thể khai báo kiểu gía trị trả về của lambda
    auto l6 = [] (int a, int b) -> double {
      return (a + b)/3.0;
    };
    std::cout << "(" << ii << " + " << ii2 << ")/3 = " << l6(ii, ii2) << std::endl;
  }
};

int C::st_i = 100;

int main() {
  C c;
  c.Run();
}
