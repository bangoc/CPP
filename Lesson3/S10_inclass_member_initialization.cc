// Có thể sử dụng biến ngoại để khởi tạo
// 		Tuy nhiên không nên làm như vậy, vì làm vậy có thể gây khó hiểu.

#include <iostream>

int cc = 100;

class C {
  public:
    int v = cc;
};

int main() {
  C c1;
  std::cout << c1.v << std::endl;
  cc = 1000;
  C c2;
  std::cout << c2.v << std::endl;
}
