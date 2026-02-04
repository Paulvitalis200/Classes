#include <iostream>
#include "memory"
#include "Length.h"
#include "Point.h"

using namespace std;


int main() {
    Length length{10};

    // Copy constructor is called because we are initializing a NEW object
    Length second = length;

    // Represents the assingment operator. Used for an (Existing object)
    //length = second; // We can always do this by default. There are situatuins we need to have control

    // How can we overload assignment operator


    return 0;
}