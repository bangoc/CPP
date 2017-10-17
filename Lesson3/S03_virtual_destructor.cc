// Đối với những lớp có phương thức ảo và những lớp cơ sở trong kế thừa
// thì thường cần khai báo hàm hủy ảo.
// 

#include <iostream>

class B1 {
public:
	~B1() {
		std::cout << "B1::~B1()" << std::endl;
	}
};

class D1: public B1 {
public:
	~D1() {
		std::cout << "D1::~D1()" << std::endl;
	}
};

class B2 {
public:
	virtual ~B2() {
		std::cout << "B2::~B2()" << std::endl;
	}
};

class D2: public B2 {
public:
	~D2() {
		std::cout << "D2::~D2()" << std::endl;
	}
};

int main() {
	B1* b1 = new D1{};
	B2* b2 = new D2{};

	delete b1;
	delete b2;
}