#ifndef WINDOW_H
#define WINDOW_H

class VisualComponent;

class Window {
public:
    void SetContents (VisualComponent* contents);
    void Draw();
private:
    VisualComponent* _contents;
};

#endif /* WINDOW_H */
