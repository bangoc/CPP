// unique_ptr làm chủ đối tượng mà nó gĩư con trỏ
//    không thể sao chép unique_ptr, chỉ có thể dịch chuyển
// unique_ptr lưu con trỏ và xóa đối tượng nó trỏ đến khi hủy

#include <iostream>
#include <memory>
#include <string>

class C {
public:
  C(): name_{"default"} {
    std::cout << "C Ctor" << std::endl;
  }
  C(std::string name) : name_{name} {
    std::cout << name << " C Ctor" << std::endl;
  }
  ~C() {
    std::cout << name_ << " C Dtor" << std::endl;
  }
private:
  std::string name_;
};

class B {};
class D: public B {};

int main() {
  {
    std::cout << "Scope 1" << std::endl;
    std::unique_ptr<C> pc(new C{});
    std::unique_ptr<C[]> pca(new C[3] {C{"C1"}, C{"C2"}, C{"C3"}});
  }

  {
    std::cout << "Scope 2" << std::endl;
    std::unique_ptr<C> pc(new C{});
    // std::unique_ptr<C> p1 = pc;  // ??
    std::unique_ptr<C> p2;
    p2.reset(new C{});
    std::unique_ptr<C> p3;
    p3 = std::move(p2);
  }

  {
    std::cout << "Scope 3" << std::endl;
    std::unique_ptr<B> p(new B());
    std::unique_ptr<B> p2(new D());
    // std::unique_ptr<B*> p3(new D[5]);
    B* p4 = new D[5];
  }
  return 0;
}