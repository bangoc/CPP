#ifndef BORDER_DECORATOR_H
#define BORDER_DECORATOR_H

#include "Decorator.h"

class BorderDecorator : public Decorator {
public:
  BorderDecorator(VisualComponent*, int);
  void Draw() override;
  ~BorderDecorator() override;
private:
  void DrawBorder(int);
private:
  int width_;
};

#endif /* BORDER_DECORATOR_H */
