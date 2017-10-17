/*
A constructor builds a class object ‘‘from the bottom up’’:
	[1] first, the constructor invokes its base class constructors,
	[2] then, it invokes the member constructors, and
	[3] finally, it executes its own body.
A destructor ‘‘tears down’’ an object in the reverse order:
	[1] first, the destructor executes its own body,
	[2] then, it invokes its member destructors, and
	[3] finally, it inv okes its base class destructors.
*/
#include <iostream>

class X {
public:
	X() { std::cout << "X::X()" << std::endl; }
	~X() { std::cout << "X::~X()" << std::endl; }
};

class Y {
public:
	Y() { std::cout << "Y::Y()" << std::endl; }
	~Y() { std::cout << "Y::~Y()" << std::endl; }
};

class B1 {
public:
	B1() { std::cout << "B1::B1()" << std::endl; }
	~B1() { std::cout << "B1::~B1()" << std::endl; }
};

class B2 {
public:
	B2() { std::cout << "B2::B2()" << std::endl; }
	~B2() { std::cout << "B2::~B2()" << std::endl; }
};

class D: B1, B2 {
public:
	D() { std::cout << "D::D()" << std::endl; }
	~D() { std::cout << "D::~D()" << std::endl; }
	X x;
	Y y;
};

class D2: B2, B1 {
public:
	// Nên khởi tạo theo cùng thứ tự khai báo, có thể có cảnh báo nếu khác thứ tự
	D2(): y{}, x{} { std::cout << "D2::D2()" << std::endl; }
	~D2() { std::cout << "D2::~D2()" << std::endl; }
	X x;
	Y y;
};

int main() {
	{
		D d;  // Thứ tự gọi hàm tạo và hàm hủy
	}
	{
		D2 d2;
	}
}