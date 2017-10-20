// Có thể cài đặt đa hình không dùng cơ chế ảo (virtual)?

#include <iostream>
#include <vector>

class B2 {
public:
	enum class Types { B2, D2};
	Types type;
	B2(): type{Types::B2} {}
	void print() {
		std::cout << "B2::print" << std::endl;
	}
};

class D2: public B2 {
public:
	D2() {
		type = Types::D2;
	}
	void print() {
		std::cout << "D2::print" << std::endl;
	}
};

void call_print(B2* p) {
	switch (p->type) {
		case B2::Types::B2:
			p->print();
			break;
		case B2::Types::D2:
			(static_cast<D2*>(p))->print();
			break;
	}
}

class B1 {
public:
	virtual void print() {
		std::cout << "B2::print" << std::endl;
	}
};

class D1: public B1 {
public:
	void print() override {
		std::cout << "D2::print" << std::endl;
	}
};

int main() {
	std::vector<B2*> v;
	B2 b2;
	D2 d2;
	v.push_back(&b2);
	v.push_back(&d2);
	for (B2* p: v) {
		call_print(p);
	}

	// sử dụng cơ chế ảo
	std::vector<B1*> v1;
	B1 b1;
	D1 d1;
	v1.push_back(&b1);
	v1.push_back(&d1);
	for (B1* obj: v1) {
		obj->print();
	}
}

// cách sử dụng từ khóa const trong ví dụ này???