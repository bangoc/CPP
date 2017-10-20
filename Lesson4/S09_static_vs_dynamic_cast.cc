// dynamic_cast có thể ép kiểu lớp cơ sở ảo thành lớp kế thừa và ép kiểu ngang trong cây kế thừa
// còn static_cast  thì không, vì static_cast không kiểm tra đối tượng nguồn
//
// dynamic_cast an toàn hơn static_cast
//
// dynamic_cast không ép kiểu được từ kiểu void*
class A {
public:
	virtual ~A() {}
};
class B1: public virtual A{};
class B2: public virtual A{};
class D: public B1, public B2 {

};

int main() {
	D d;
	A* pa = &d;
	// B1* pb1 = static_cast<B1*>(pa);  // ??
	B1* pb1 = dynamic_cast<B1*>(pa);
	// B2* pb2 = static_cast<B2*>(pb1);
	B2* pb2 = dynamic_cast<B2*>(pb1);
}