#include "Window.h"
#include "VisualComponent.h"

void Window::SetContents(VisualComponent* contents) {
    _contents = contents;
}

void Window::Draw() {
    _contents->Draw();
}
