/*
  Liệu chúng ta có thể kế thừa một lớp độc bản và vẫn bảo toàn tính độc bản?
    + Mayer singleton
    + singleton sử dụng con trỏ
*/

#include <iostream>
#include <exception>

class Log {
 private:
  static Log* instance;
  Log() {
    std::cout << "Creating a log object" << std::endl;

    if (instance) {
      throw std::logic_error("An instance of Log exists!");
    }
    instance = this;
  }

 public:
  void DoSomething() {
    std::cout << "Hello world!" << std::endl;
  }

  // Nếu tạo đối tượng lớp cơ sở thì không tạo được đối tượng của lớp suy diễn
  static Log* getInstance() {
    if (instance == nullptr)
      instance = new Log();

    return instance;
  }

  virtual ~Log() {
    std::cout << "Log object deleted" << std::endl;
  }

  friend class IOStreamLog;
  friend class FiletreamLog;
};

Log* Log::instance = nullptr;

class IOStreamLog: public Log {
 private:
  static IOStreamLog* instance;
  IOStreamLog() {}

 public:
  void LogDebug(const std::string& message) {
    std::cout << message << std::endl;
  }

  static IOStreamLog* getInstance() {
    if (instance == nullptr)
      instance = new IOStreamLog();

    return instance;
  }

  ~IOStreamLog() override {
    std::cout << "IOStreamLog object deleted" << std::endl;
  }
};

IOStreamLog* IOStreamLog::instance = nullptr;

class FiletreamLog: public Log {
 private:
  static FiletreamLog* instance;
  FiletreamLog() {}

 public:
  void LogDebug(const std::string& message) {
    std::cout << message << std::endl;
  }

  static FiletreamLog* getInstance() {
    if (instance == nullptr)
      instance = new FiletreamLog();

    return instance;
  }

  ~FiletreamLog() override {
    std::cout << "FiletreamLog object deleted" << std::endl;
  }
};

FiletreamLog* FiletreamLog::instance = nullptr;

void Usage1() {
  Log* log = Log::getInstance();

  IOStreamLog* iolog= IOStreamLog::getInstance();
}

void Usage2() {
  IOStreamLog* iolog= IOStreamLog::getInstance();

  FiletreamLog* filelog = FiletreamLog::getInstance();
}

int main() {
  // Log::getInstance()->DoSomething();

  try {
    Usage1();
  } catch (std::exception& e) {
    std::cout << "Exception in usage 1: " << e.what() << std::endl;
  }

  try {
    Usage2();
  } catch (std::exception& e) {
    std::cout << "Exception in usage 2: " << e.what() << std::endl;
  }
  return 0;
}