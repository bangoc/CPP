#include <iostream>
inline void foo() {
	std::cout << "500" << std::endl;
}

void fa() {
	foo();
}

class C {
public:
	inline void foo2() {
		std::cout << "500" << std::endl;
	}
};

void fa2() {
	C c;
	c.foo2();
}