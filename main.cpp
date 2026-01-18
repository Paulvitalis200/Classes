#include <iostream>
#include "Rectangle.h"
#include "TextBox.h"

// The reason we have two files, header and cpp is to reduce compile times,
using namespace std;
int main() {
    Rectangle rectangle{-10, 20};
    cout << rectangle.getWidth();

    return 0;
}