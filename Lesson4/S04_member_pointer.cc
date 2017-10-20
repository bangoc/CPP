// Sử dụng .* và ->* cho con trỏ đến hàm thành viên
// 		+ chỉ sử dụng khi không biết trước đối tượng chứa thành viên.
//   Con trỏ thành viên lớp kế thừa có thể trỏ đến thành viên lớp cơ sở
//		nhưng con trỏ lớp cơ sở không trỏ được đến thành viên lớp kế thừa (contravariance)

#include <iostream>
#include <string>

class Std_interface {
public:
	virtual void start() = 0;
	virtual void suspend() = 0;
	virtual void resume() = 0;
	// virtual void quit() = 0;
	// virtual void full_size() = 0;
	// virtual void small() = 0;
	virtual ~Std_interface() {}
};


using PStd_mem = void (Std_interface::*)();  // Con trỏ tới phương thức thành viên

class Std_implement: public Std_interface {
private:
	std::string name_;
public:
	int i;
	const char* val;
	Std_implement(const std::string& name): name_{name} {}
	void start() override {
		std::cout << name_ << " Std_implement::start" << std::endl;
	}
	void suspend() override {
		std::cout << name_ << " Std_implement::suspend" << std::endl;
	}
	void resume() override {
		std::cout << name_ << " Std_implement::resume" << std::endl;
	}
};

void CallMember(Std_interface* obj, PStd_mem method) {
	(obj->*method)();
}

template<class T>
void PrettyFoo(T t) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
}

int main() {
	Std_implement impl1("impl1");
	Std_implement impl2("impl2");
	PStd_mem pstart = &Std_interface::start;
	PStd_mem psuspend = &Std_interface::suspend;
	PStd_mem presume = &Std_interface::resume;
	CallMember(&impl1, pstart);
	CallMember(&impl1, psuspend);
	CallMember(&impl1, presume);
	CallMember(&impl2, pstart);
	CallMember(&impl2, psuspend);
	CallMember(&impl2, presume);

	PrettyFoo(&Std_interface::start);
	PrettyFoo(&Std_implement::i);
	PrettyFoo(&Std_implement::val);

	// void (Std_interface::*fbase)() = &Std_implement::start;  // 1. ??
	// void (Std_implement::*fderived)() = &Std_interface::start;  // 2. ??
}