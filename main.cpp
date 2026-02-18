#include <iostream>
#include <vector>
#include <memory>
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
    vector<unique_ptr<Widget>> widgets;

    widgets.push_back(make_unique<TextBox>());
    widgets.push_back(make_unique<CheckBox>());

    for (const auto& widget: widgets) {
        widget->draw();
    }
    return 0;
}