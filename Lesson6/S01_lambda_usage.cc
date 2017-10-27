// + lambda là đối tượng hàm không tên
// + một đối tượng thuộc lớp được sinh từ một lambda được gọi 
//       là closure object

#include <iostream>
#include <redox.hpp>

int main(int argc, char* argv[]) {
  redox::Redox rdx;
  if(!rdx.connect()) 
    return 1;

  int total = 100; // Number of commands to run
  std::atomic_int count(0); // Number of replies expected
  auto got_reply = [&](redox::Command<std::string>& c) {
    count++;
    if(c.ok()) {
      std::cout << c.cmd() << " #" 
                << count << ": " << c.reply() << std::endl;
    }
    if(count == total) {
      rdx.stop(); // Signal to shut down
    }
  };

  for(int i = 0; i < total; i++) 
    rdx.command<std::string>({"GET", "hello"}, got_reply);

  // Do useful work

  rdx.wait(); // Block until shut down complete
}