//
// Created by Admin on 16/02/2026.
//

#ifndef CLASSES_TEXTBOX_H
#define CLASSES_TEXTBOX_H

#include "Widget.h"

#include <string>

using namespace std;

class TextBox : public Widget {
public:
    // Overriding - Redefine a function with the same signature
    void draw() const override;
    string getValue();
    void setValue(const string& value);
private:
    string value;
};


#endif //CLASSES_TEXTBOX_H