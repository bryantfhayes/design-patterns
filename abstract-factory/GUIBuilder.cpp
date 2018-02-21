#include "GUIBuilder.h"

void GUIBuilder::buildWindow(AbstractWidgetFactory *widgetFactory)
{
    Window *window = widgetFactory->createWindow();
    window->setTitle("My new window");
    window->repaint();
}
