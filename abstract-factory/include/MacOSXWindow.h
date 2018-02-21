#ifndef MACOSXWINDOW_H_02202018
#define MACOSXWINDOW_H_02202018

#include "Window.h"

class MacOSXWindow : public Window
{
public:
    /* Override */ void setTitle(const char* title);
    /* Override */ void repaint(void);
};

#endif // MACOSXWINDOW_H_02202018
