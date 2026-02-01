#include <iostream>
#include "Rectangle.h"
#include "TextBox.h"
#include "Person.h"
#include "memory"
#include "SmartPointer.h"
#include "Length.h"
// The reason we have two files, header and cpp is to reduce compile times,
using namespace std;



int main() {
    Length first{10};
    Length second{10};

    // We want to compare two length objects. This is where operator overloading comes
    // to the rescue. We can implement equality operator to allow two length objects
    // to be compared for equality.
    if (first == second)

    return 0;
}