// Có bốn mức đảm bảo về an toàn đối với ngoại lệ:
//    1. no throw guarantee (an toàn nhất - ngoại lệ được xử lý bên trong)
//    2. strong exception safety (commit or rollback semantics)
//    3. basic exception safetye (không có leak)
//    4. No exception safety (không có đảm bảo)
//
// Có thể đặc tả ngoại lệ của hàm và phương thức (không gây lỗi biên dịch nếu khác thực tế)
//    danh sách ngoại lệ của phương thức ảo ở lớp kế thừa phải là tập con của 
//    danh sách ngoại lệ của cùng phương thức trong lớp cơ sở.

#include <iostream>

void Foo() noexcept {
  throw 1;  // 1. ?? warning
}

class B {
  public:
    virtual void Foo() throw (char, int) {}
};

class D: public B {
  public:
    void Foo() throw (double) override {  // 2. ??

    }
};

void F(void(*)()) {
  std::cout << "Function type matched" << std::endl;
}

int main() {
  F(Foo);

  D d;
}