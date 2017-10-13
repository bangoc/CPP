// please explain the problems with access control in this file

#include <iostream>

class C {
public:
	int a;
protected:
	int b;
private:
	int c;
};

class D1: C {
public:
	D1() {
		int a1 = a;  // ??
		int b1 = b;  // ??
		int c1 = c;  // ??
	}
};

class D2: protected C {
public:
	D2() {
		int a2 = a;  // ??
		int b2 = b;  // ??
		int c2 = c;  // ??
	}
};

class D3: public C {
public:
	D3() {
		int a3 = a;  // ??
		int b3 = b;  // ??
		int c3 = c;  // ??
	}
};

int main(int argc, char* argv[]) {
	return 0;
}