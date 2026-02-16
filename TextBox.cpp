//
// Created by Admin on 16/02/2026.
//

#include <iostream>
#include "TextBox.h"

using namespace std;


TextBox::TextBox(bool enabled, const string &value): Widget(enabled), value{value} {
}
