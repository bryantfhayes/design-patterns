#ifndef MSWINDOWS_WIDGET_FACTORY_H_02202018
#define MSWINDOWS_WIDGET_FACTORY_H_02202018

#include "AbstractWidgetFactory.h"

class MSWindowsWidgetFactory : public AbstractWidgetFactory
{
public:
    /* Override */ Window* createWindow(void);
};

#endif //MSWINDOWS_WIDGET_FACTORY_H_02202018
