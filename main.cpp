#include <iostream>
#include "Rectangle.h"
#include "TextBox.h"
#include "Person.h"
#include "memory"
#include "SmartPointer.h"

// The reason we have two files, header and cpp is to reduce compile times,
using namespace std;



int main() {
    auto rectangle = make_unique<Rectangle>(10, 20);
    rectangle->draw();

    SmartPointer ptr{new int};


    return 0;
}

// Create SmartPointer class. It will have an attribute of type integer pointer (int*) -
// ptr: int*. It hsould have a constructor for initializeing the pointer. - (SmartPointer(ptr: int*)
// We aso need a desctructor for this ~ SmartPointer()