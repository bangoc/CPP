#ifndef SCROLL_DECORATOR_H
#define SCROLL_DECORATOR_H

#include "Decorator.h"

class ScrollDecorator : public Decorator {
public:
  ScrollDecorator(VisualComponent*);
  void Draw() override;
  ~ScrollDecorator() override;
private:
  void DrawScroll();
};

#endif /* SCROLL_DECORATOR_H */
