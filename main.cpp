#include <iostream>
#include "memory"
#include "Length.h"
#include "Point.h"
#include "Array.h"
#include "TextBox.h"
#include "Rectangle.h"
#include "Widget.h"
#include "CheckBox.h"
using namespace std;

void showWidget(Widget& widget) {
    // We'll only have access to members of the widget class.
    // We won't have access to those of the TextBox class
    widget.draw();
}

int main() {
    TextBox box;
    showWidget(box);

    CheckBox checkBox;
    showWidget(checkBox);

    return 0;
}