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
    Rectangle rectangle{10, 20, "blue"}; // Instance member
    Rectangle second{20,32};

    // Members that belong to the Rectangle class itself. Single copy will be shared
    // by all instances

    cout << Rectangle::getObjectsCount() << endl;

    return 0;
}