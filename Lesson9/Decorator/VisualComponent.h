#ifndef VISUAL_COMPONENT_H
#define VISUAL_COMPONENT_H

class VisualComponent {
public:
    virtual void Draw() = 0;
    virtual ~VisualComponent();
};

#endif /* VISUAL_COMPONENT_H */
