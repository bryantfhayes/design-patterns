#ifndef MACOSXWINDOWS_WIDGET_FACTORY_H_02202018
#define MACOSXWINDOWS_WIDGET_FACTORY_H_02202018

#include "AbstractWidgetFactory.h"

class MacOSXWindowsWidgetFactory : public AbstractWidgetFactory
{
public:
    /* Override */ Window* createWindow(void);
};

#endif //MACOSXWINDOWS_WIDGET_FACTORY_H_02202018
