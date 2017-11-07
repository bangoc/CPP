/*
 Mẫu Decorator hướng đến khả năng mở rộng trách nhiệm của đối tượng trong thời gian chạy chương trình.
    Mẫu Decorator cung cấp một giải pháp mềm dẻo thay thế cho việc kế thừa để mở rộng chức năng của lớp.
 */

#include "BorderDecorator.h"
#include "ScrollDecorator.h"
#include "TextView.h"
#include "Window.h"

int main() {
    Window* window = new Window;
    TextView* textView = new TextView;

    window->SetContents(
        new BorderDecorator(
            new ScrollDecorator(textView), 1
        )
    );

    window->Draw();

    TextView* textView2 = new TextView;
    VisualComponent* component2 = new ScrollDecorator(textView);
    component2->Draw();

    TextView* textView3 = new TextView;
    VisualComponent* component3 = new BorderDecorator(textView, 3);
    component3->Draw();
}
