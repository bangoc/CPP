// Ưu tiên khởi tạo so với gán

class A {};

class C {
public:
	C(A& aa)
			: i{10}, ra{aa}, s1{"Hello"} {
		s2 = "World!";  // khởi tạo mặc định và gán
	}
private:
	const int i;
	A& ra;
	std::string s1;
	std::string s2;
};