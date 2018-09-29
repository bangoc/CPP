#ifndef TEXT_VIEW_H
#define TEXT_VIEW_H

#include "VisualComponent.h"

class TextView : public VisualComponent {
public:
  void Draw() override;
  ~TextView() override;
};

#endif /* TEXT_VIEW_H */
