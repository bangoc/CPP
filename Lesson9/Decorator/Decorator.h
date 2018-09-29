#ifndef DECORATOR_H
#define DECORATOR_H

#include "VisualComponent.h"

class Decorator : public VisualComponent {
public:
  Decorator(VisualComponent*);
  void Draw() override;
  ~Decorator() override;
private:
  VisualComponent* component_;
};

#endif /* DECORATOR_H */
