#ifndef SCROLL_DECORATOR_H
#define SCROLL_DECORATOR_H

#include "Decorator.h"

class ScrollDecorator : public Decorator {
public:
    ScrollDecorator(VisualComponent*);
    virtual void Draw();
    void ScrollTo();
private:
    void DrawScroll();
    double scroll_position_;
};

#endif /* SCROLL_DECORATOR_H */
