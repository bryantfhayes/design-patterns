#ifndef ABSTRACT_WIDGET_FACTORY_H_02202018
#define ABSTRACT_WIDGET_FACTORY_H_02202018

#include "Window.h"

class AbstractWidgetFactory
{
public:
    virtual Window* createWindow(void) = 0;
};

#endif //ABSTRACT_WIDGET_FACTORY_H_02202018
