//  + Có thể gọi phương thức ảo của lớp cơ sở theo cách tường minh
//  + Lớp ảo là lớp có phương thức tuyệt ảo (pure virtual)
//			- Không tạo đc đối tượng của lớp ảo
// 	+ Phương thức định nghĩa lại mặc định là phương thức ảo
//	+ Không định nghĩa lại được phương thức đã định nghĩa lại lần cuối cùng

#include <iostream>

class B1 {
public:
	virtual void Foo() { // Có thể kế thừa
		std::cout << "B1::Foo()" << std::endl;
	}  
	virtual void Foo2() = 0;  // Pure virtual: Bắt buộc phải nạp chồng
};

class D: public B1 {
public:
	void Foo() override {  // Mặc định là phương thức ảo
		std::cout << "D::Foo()" << std::endl;
	}
	void Foo2() override {  // Mặc định là phương thức ảo
		std::cout << "D::Foo2()" << std::endl;
	}
};

class B2: public B1 {
public:
	void Foo2() override final {  // 4. ??
		std::cout << "B2::Foo2()" << std::endl;
	}
};

class D2: public B2 {
public:
	void Foo2() override {  // 5. ?? 
		std::cout << "D2::Foo2()" << std::endl;
	}
};

int main() {
	D d;
	d.Foo();  // 1. ??
	d.B1::Foo();  // 2. ?? [OK/NOK??]

	B1 b; // 3. ??
}
