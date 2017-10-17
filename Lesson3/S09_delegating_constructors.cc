// Nếu có nhiều hàm tạo giống nhau thì có thể sử dụng khả năng delegate hàm tạo

class C {
public:
	C(int v) {}
	C(): C{10} {}  // hoàn toàn khác so với { C(10); }
	C(string s): C{to<int>(s)} {}
}