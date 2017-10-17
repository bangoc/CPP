// b2 và bb chỉ chứa bản sao của đối tưọng cơ sở của d, d.d không được sao chép
// hiện tượng này gọi là slicing (cắt lớp)
//
// Để tránh cắt lớp, có thể xóa hàm tạo sao chép của lớp cơ sở:
//			-> Lỗi khởi tạo bb và b2
// 		hoặc ngăn chặn ép kiểu con trỏ lớp suy diễn thành con trỏ lớp cơ sở
//			-> Lỗi gọi hàm naive và khởi tạo bb

struct Base {
	int b;
	Base(const Base&);
};

struct Derived: Base {
	int d;
	Derived(const Derived&);
};

void naive(Base* p) {
	B b2  = *p;  // Gọi B::B(const Base&)
}

void user() {
	Derived d;
	naive(&d);
	Base bb = d;  // slice: gọi Base::Base(const Base&);
}