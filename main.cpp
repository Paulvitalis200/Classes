#include <iostream>
#include "memory"
#include "Length.h"
#include "Point.h"
#include "Array.h"
#include "TextBox.h"
#include "Rectangle.h"
#include "Widget.h"
using namespace std;

void showWidget(Widget& widget) {
    // We'll only have access to members of the widget class.
    // We won't have access to those of the TextBox class
    widget.draw();
}

int main() {
    TextBox box;
    // box.draw();
    showWidget(box);

    return 0;
}