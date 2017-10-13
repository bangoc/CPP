#include <iostream>

inline void foo() {
	std::cout << "100" << std::endl;
}

inline void foo2() {
	std::cout << "100" << std::endl;
}

extern void fa();
extern void fa2();


class C {
public:
	inline void foo2();
};
inline void C::foo2() {
	std::cout << "100" << std::endl;
}

int main() {
	foo();
	fa();
	C c;
	c.foo2();
	fa2();
}