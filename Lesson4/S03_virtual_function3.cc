// 
// Không nên gọi phương thức ảo trong hàm tạo khi đối tượng mới tạo đc một phần
//		hoặc trong hàm hủy, khi đối tượng đã bị hủy một phần.
// Cơ chế đa hình trong C++ được triển khai thông qua cáu trúc dữ liệu 
//      chuyên biệt gọi là virtual table: gdb> info vtbl object

class A {
public:
	virtual void Foo() {}
	virtual ~A() {}
};

class B: public A {
public:
	void Foo() override {}
	virtual void Foo2() {}
	virtual ~B() {}
};

class C: public B {
public:
	void Foo2() override {}
	virtual ~C() {}
};

int main() {
	B b;
	A a;
	C c;
	A& pa = c;
	B& pb = c;
}