#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "GUIBuilder.h"
#include "MacOSXWindowsWidgetFactory.h"
#include "MSWindowsWidgetFactory.h"

int main(int argc, char** argv)
{
    GUIBuilder *builder = new GUIBuilder();
    AbstractWidgetFactory *widgetFactory = NULL;

    // User supplies the OS
    if (argc < 2)
    {
        printf("Invalid arguments!\n");
        return -1;
    }

    // Make a window factory for the selected platform
    if (strcmp(argv[1], "MacOSX") == 0)
    {
        widgetFactory = new MacOSXWindowsWidgetFactory();
    }
    else if (strcmp(argv[1], "MS") == 0)
    {
        widgetFactory = new MSWindowsWidgetFactory();
    }

    // Confirm we have valid pointers
    if (widgetFactory == NULL || builder == NULL)
    {
        printf("Bad alloc!\n");
        return -1;
    }

    // Build our platform-specific window
    builder->buildWindow(widgetFactory);
    
    return 0;
}
