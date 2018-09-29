#ifndef WINDOW_H
#define WINDOW_H

#include "Decorator.h"

#include <string>

class VisualComponent;

class Window: public Decorator {
public:
  Window(VisualComponent* contents, const std::string& title);
  void Draw() override;
  void DrawWindow();
  ~Window() override;
private:
  std::string title_;
};

#endif /* WINDOW_H */
