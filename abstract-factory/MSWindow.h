#ifndef MSWINDOW_H_02202018
#define MSWINDOW_H_02202018

#include "Window.h"

class MSWindow : public Window
{
public:
    /* Override */ void setTitle(const char* title);
    /* Override */ void repaint(void);
};

#endif // MSWINDOW_H_02202018
