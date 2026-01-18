//
// Created by Admin on 18/01/2026.
//

#ifndef CLASSES_TEXTBOX_H
#define CLASSES_TEXTBOX_H

#import <string>
using namespace std;

class TextBox {
public:
    string getValue();
    void setValue(const string& value);
private:
    string value;
};


#endif //CLASSES_TEXTBOX_H