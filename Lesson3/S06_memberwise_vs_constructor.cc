// Hàm tạo được ưu tiên hơn

struct S1 {
	int a,b;  // no constructors
};

struct S2 {
	int a,b;
	S2(int a = 0, int b = 0) : a(aa), b(bb) {}
};

S1 x11(1,2);  // ??
S1 x12 {1,2};  // ??
S1 x13(1);  // ??
S1 x14 {1};  // ??
S2 x21(1,2);  // ??
S2 x22 {1,2}; // ?? 
S2 x23(1); // ??
S2 x24 {1};  // ??

int main() {

}
