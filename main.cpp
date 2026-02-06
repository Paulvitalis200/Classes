#include <iostream>
#include "memory"
#include "Length.h"
#include "Point.h"
#include "Array.h"

using namespace std;


int main() {
    Array array{10};
    array[0] = 1;

    cout << array[20];
    // array[index]
    return 0;
}