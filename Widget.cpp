//
// Created by Admin on 16/02/2026.
//

#include "Widget.h"

#include <iostream>

using namespace std;

Widget::Widget(bool enabled) : enabled(enabled) {
    cout << "Widget constructed" << endl;
}

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

bool Widget::isEnabled() const {
    return enabled;
}
