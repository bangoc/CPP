// please explain the problems with access control in this file

#include <iostream>

class C {
public:
	int a;
protected:
	int b;
private:
	void Foo(C obj) {
		c = obj.c;   // ??
	}
	int c;
	// friend void Func(C);
	// friend int main();
};

void Func(C c) {
	c.a = c.b + c.c;  // ??
}

int main(int argc, char* argv[]) {
	C obj;
	std::cout << obj.a;  // ??
	std::cout << obj.b;  // ??
	std::cout << obj.c;  // ??
	return 0;
}