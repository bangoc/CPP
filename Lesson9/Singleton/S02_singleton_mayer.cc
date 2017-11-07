/*
 + Biến địa phương static chỉ được khởi tạo sau lần đầu gọi hàm
 + Trả về tham chiếu thay vì con trỏ sẽ tránh được các nguy cơ
   delete không mong muốn.
*/

#include <iostream>
class Log {
 public:
  static Log& getInstance() {
    static Log inst;
    return inst;
  }
 
  void DoSomething() {
    std::cout << "Hello world!" << std::endl;
  }
 
  ~Log() {
    std::cout << "C dtor" << std::endl;
  }
 private:
  Log() {
    std::cout << "C ctor" << std::endl;
  }
};
int main() {
  std::cout << "Program started" << std::endl;
  Log::getInstance().DoSomething();
}
