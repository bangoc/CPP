#include <iostream>
#include <initializer_list>

class C {
public:
	explicit C(int v);
	C(const C& c);
	int v() const { return v_; }
private:
	int v_;
public:
	C(int v1, int v2);
	C(std::initializer_list<int> values);
};

C::C(int v) {
	std::cout << "Direct initialization v = " << v << std::endl;
}

C::C(const C& c) {
	std::cout << "Copy initialization v = " << c.v() << std::endl;
}

C::C(int v1, int v2) {
	std::cout << "Direct initialization" << std::endl;
}

C::C(std::initializer_list<int> values) {
	std::cout << "initializer_list";
	for (int v: values)
		std::cout << "  " << v;
	std::cout << std::endl;
}

void Foo(C c) { }

int main() {
	C c1(1);
	// C c2 = 2;  // implicit conversion from int to C
	C c3 {3};
	// C c4 = {4};  // implicit conversion from int to C

	// Foo(1);  // implicit conversion from int to C
	Foo(C(1));
	// Foo({1});  // implicit conversion from int to C
	Foo(C{1});

	C(1, 2);
	C{3, 5};
	// C(1, 2, 3);  // No matching
	C{1, 2, 3};
}