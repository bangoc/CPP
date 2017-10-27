// Khối catch được lựa chọn phù hợp với kiểu dữ liệu của ngoại lệ được ném

#include <iostream>
#include <string>
#include <exception>

class MyException: public std::exception {
public:
  MyException(std::string msg):
      msg_(msg) {
    std::cout << "MyException::ctor" << std::endl;
    std::cout << "    " << msg_ << std::endl;
  }
  ~MyException() {
    std::cout << "MyException::dtor" << std::endl;
  }

  const char* what() const noexcept override {
    return msg_.c_str();
  }
private:
  std::string msg_;
};

class C {
public:
  void Foo() {
    throw MyException("An exception from C::Foo()");
  }
  C() {
    std::cout << "C::C()" << std::endl;
  }
  ~C() {
    std::cout << "C::~C()" << std::endl;
  }
};

int main() {
  std::cout << "Scope 1" << std::endl;
  try
  {
    C c;
    c.Foo();
  } catch (MyException e1) {
    std::cout << "Catched exception from C::Foo()" << std::endl;
  } catch (double e2) {
    std::cout << "Catched an exception of type double" << std::endl;
  } catch (...) {
    std::cout << "Catched a generic exception" << std::endl;
  }

  std::cout << "Scope 2" << std::endl;
  C c;
  c.Foo();
}