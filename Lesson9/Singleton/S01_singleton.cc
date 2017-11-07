/*
 Đảm bảo một lớp chỉ có một bản thể và cung cấp phạm vi truy cập toàn cục
 đến đối tượng đó.
   - ví dụ: Log
 */

#include <iostream>

class Log {
 private:
  static Log* instance;
  Log() {
    std::cout << "Log object created" << std::endl;
  }
 public:
  void DoSomething() {
    std::cout << "Hello world!" << std::endl;
  }
  static Log* getInstance();
  ~Log() {
    std::cout << "Log object deleted" << std::endl;
  }
};

Log* Log::instance = nullptr;

// static
Log* Log::getInstance() {
  if (instance == nullptr)
    instance = new Log();

  return instance;
}

int main() {
  Log::getInstance()->DoSomething();
  return 0;
}
