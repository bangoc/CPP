#include "static.h"

void Foo() {
	std::cout << "Foo in main.cc" << std::endl;
}

int main() {
	a = 5000;
	std::cout << "main a = " << a << std::endl;
	Foo();  // no conflict with static.cc::Foo, because static.cc::Foo has internal linkage
}