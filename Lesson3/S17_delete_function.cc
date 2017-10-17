// Chúng ta có thể vô hiệu các hàm thành viên bằng cách đánh dấu chúng là delete
// Ngoài ra chúng ta cũng có thể:
//		- xóa bất kỳ hàm nào đã khai báo
//		- loại bỏ các chuyển kiểu không mong muốn
//		- kiểm soát nơi cấp phát bộ nhớ cho lớp

class Base {
	// ...
	Base& operator=(const Base&) = delete;// disallow copying
	Base(const Base&) = delete;
	Base& operator=(Base&&) = delete;
	Base(Base&&) = delete;
	// disallow moving
};

Base x1;
Base x2 {x1}; // error : no copy constructor

// ----- Ví dụ 2

template<class T>
T∗ clone(T∗ p) // return copy of *p
{
	return new T{∗p};
};
Foo∗ clone(Foo∗) = delete;
void f(Shape∗ ps, Foo∗ pf)
{
	Shape∗ ps2 = clone(ps);
	Foo∗ pf2 = clone(pf);
}

// ----- Ví dụ 3

class Not_on_stack {
	// ...
	~Not_on_stack() = delete;
};

class Not_on_free_store {
	// ...
	void∗ operator new(siz e_t) = delete;
};

void f()
{
	Not_on_stack v1;  // error : can’t destroy
	Not_on_free_store v2;	// OK
	Not_on_stack∗ p1 = new Not_on_stack;  // OK	
	Not_on_free_store∗ p2 = new Not_on_free_store; // error : can’t allocate
}