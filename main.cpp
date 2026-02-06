#include <iostream>
#include "memory"
#include "Length.h"
#include "Point.h"
#include "Array.h"

using namespace std;


int main() {
    Length length{10};
    int x = length; // Compiler now implicitly converts the length object to an integer

    cout << x;
    return 0;
}