// Trong đa kế thừa, đối tượng cơ sở ảo chị được tạo ra một lần (không trùng lặp)
// Phương thức ảo của lớp cơ sở ảo nếu được định nghĩa trong nhiều lớp cơ sở kế thừa
//		thì phải được định nghĩa trong lớp kế thừa cuối cùng (D34)

#include <iostream>

class B1 {
public:
	int i = 10;
	virtual void Foo() {
		std::cout << "B1::Foo()" << std::endl;
	}
};

class D1: public B1 {
public:
	void Foo() override {
		std::cout << "D1::Foo()" << std::endl;
	}
};

class D2: public B1 {
public:
	void Foo() override {
		std::cout << "D2::Foo()" << std::endl;
	}
};

class D12: public D1, public D2 {

};


class D3: public virtual B1 {
public:
	void Foo() override {
		std::cout << "D1::Foo()" << std::endl;
	}
};

class D4: public virtual B1 {
public:
	void Foo() override {
		std::cout << "D2::Foo()" << std::endl;
	}
};

class D34: public D3, public D4 {
// public:
// 	void Foo() override {}  // ??
};

int main() {
	D12 d12;
	D34 d34;
}