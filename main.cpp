#include <iostream>
#include "Rectangle.h"
#include "TextBox.h"
#include "Person.h"

// The reason we have two files, header and cpp is to reduce compile times,
using namespace std;

void showRectangle(Rectangle rectangle) {

}

void showPerson(Person person) {

}

int main() {
    const Rectangle rectangle;

    rectangle.getHeight();

    // Methods that don't change state of an object should be declared as constant keyword

 // All attributes will be constant
    return 0;
}