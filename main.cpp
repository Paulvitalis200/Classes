#include <iostream>
#include "Rectangle.h"

// The reason we have two files, header and cpp is to reduce compile times,
using namespace std;
int main() {
    Rectangle rectangle;
    Rectangle first;
    Rectangle second;

    cout << &first << endl;
    cout << &second << endl;
    rectangle.width = 10;
    rectangle.height = 20;

    cout << rectangle.getArea();

    return 0;
}