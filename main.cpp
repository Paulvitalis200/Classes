#include <iostream>
#include "Rectangle.h"
#include "TextBox.h"
#include "Person.h"

// The reason we have two files, header and cpp is to reduce compile times,
using namespace std;

void showPerson(Person person) {

}

int main() {
    Person person{20};
    showPerson(20);

    return 0;
}