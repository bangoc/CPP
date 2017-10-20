#include <iostream>
class C {
  public:
    explicit C(const C&) {
    	std::cout << "C::C(const&C)" << std::endl;
    }
    C(int v) {
    	std::cout << "C::C(int) " << v << std::endl;
    }
    explicit C(int v1, int v2) {
    	std::cout << "C::C(int, int) " << v1 << " " << v2 << std::endl;
    }
};

int main() {
	C c1 = {1};
	C c2 {2};
	c2 = {3};

	C c3 = {3, 5};
}
