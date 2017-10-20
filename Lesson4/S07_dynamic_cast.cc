// dynamic_cast dùng để ép kiểu cho kiểu đa hình (polymorphic type)
//		dynamic_cast sử dụng vtable để xác định kiểu của đối tượng
//		kiểu đích trong dynamic_cast không cần phải là kiểu đa hình
//
// nếu ép kiểu thất bại, trong trưòng hợp con trỏ - dynamic_cast trả về nullptr
//						 trong trường hợp tham chiếu - dynamic_cast ném ngoại lệ kiểu bad_cast

class B1 {

};

class D1: public B1 {

};

int main() {
	D1 d1;
	B1* pb1 = &d1;

	D1* pd1 = dynamic_cast<D1*>(pb1);
	pb1 = dynamic_cast<B1*>(&d1);
}