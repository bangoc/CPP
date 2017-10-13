// please explain the problems with access control in this file

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

class D: protected C {};

class E: public D {
public:
	E() {
		int a1 = a;  // ??
		int b1 = b;  // ??
		int c1 = c;  // ??
	}
};

int main() {
	E e;
	int a = e.a; // ??
	int b = e.b; // ??
	int c = e.c; // ??
}