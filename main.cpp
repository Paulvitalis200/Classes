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
    Rectangle rectangle{10, 20, "blue"};
    showRectangle(rectangle);

    return 0;
}