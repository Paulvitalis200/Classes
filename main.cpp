#include <iostream>
#include "Rectangle.h"
#include "TextBox.h"

// The reason we have two files, header and cpp is to reduce compile times,
using namespace std;
int main() {
    Rectangle rectangle;
    rectangle.setWidth(20);

    TextBox textBox;

    textBox.setValue("Paul");
    cout << rectangle.getArea() << endl;
    cout << textBox.getValue();

    return 0;
}