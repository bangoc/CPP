/*
 Mẫu Decorator hướng đến khả năng mở rộng trách nhiệm của đối tượng trong
 thời gian chạy chương trình.
 Mẫu Decorator cung cấp một giải pháp mềm dẻo thay thế cho việc kế thừa để
 mở rộng chức năng của lớp.
 */

#include "BorderDecorator.h"
#include "ScrollDecorator.h"
#include "TextView.h"
#include "Window.h"

int main() {
  Window* window1 = new Window {
    new BorderDecorator{
      new ScrollDecorator{new TextView}, 1
    }, "1: TextView with border and a scroll"
  };
  window1->Draw();

  Window* window2 = new Window {
    new ScrollDecorator(new TextView), "2: TextView with a scroll"
  };
  window2->Draw();

  Window* window3 = new Window {
    new BorderDecorator(new TextView, 3), "3: TextView with border"
  };
  window3->Draw();

  delete window1;
  delete window2;
  delete window3;
}
