#include "MacOSXWindowsWidgetFactory.h"
#include "MacOSXWindow.h"

Window* MacOSXWindowsWidgetFactory::createWindow(void)
{
    MacOSXWindow *window = new MacOSXWindow();
    return window;
}
