#include <iostream>
#include "Rectangle.h"
#include "TextBox.h"
#include "Person.h"
#include "memory"
#include "SmartPointer.h"

// The reason we have two files, header and cpp is to reduce compile times,
using namespace std;



int main() {
    // Rectangle rectangles[3]; // Will only work if we have a default constructor
    //
    // // This doesn't need to have a default construoctor
    // Rectangle rectangles2[] = {
    //     Rectangle(),
    //     Rectangle(10, 20),
    //     Rectangle(10, 20, "blue")
    // };

    // Better way. Compiler knows
    Rectangle rectangles3[] = {
        {},
        {10, 20},
        {10, 20, "blue"}
    };

    // We use Rectangle& as a reference for optimization
    for (Rectangle& rect:rectangles3)
        rect.draw();


    return 0;
}

// Create SmartPointer class. It will have an attribute of type integer pointer (int*) -
// ptr: int*. It hsould have a constructor for initializeing the pointer. - (SmartPointer(ptr: int*)
// We aso need a desctructor for this ~ SmartPointer()