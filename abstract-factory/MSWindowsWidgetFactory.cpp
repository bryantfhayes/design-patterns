#include "MSWindowsWidgetFactory.h"
#include "MSWindow.h"

Window* MSWindowsWidgetFactory::createWindow(void)
{
    MSWindow *window = new MSWindow();
    return window;
}
