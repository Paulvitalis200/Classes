#include <iostream>
#include "Rectangle.h"
#include "TextBox.h"
#include "Person.h"
#include "memory"

// The reason we have two files, header and cpp is to reduce compile times,
using namespace std;



int main() {
    auto rectangle = make_unique<Rectangle>(10, 20);
    rectangle->draw();

    return 0;
}