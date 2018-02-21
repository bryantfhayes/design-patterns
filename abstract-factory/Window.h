#ifndef WINDOW_H_02202018
#define WINDOW_H_02202018

class Window
{
public:
    virtual void setTitle(const char* title) = 0;
    virtual void repaint(void) = 0;
};

#endif // WINDOW_H_02202018
