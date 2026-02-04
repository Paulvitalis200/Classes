#include <iostream>
#include "memory"
#include "Length.h"
#include "Point.h"

using namespace std;


int main() {
    Length length{10};
    Length second{20};
    Length third = length + second;

    // Wes houls also be able to do
    length += second; // implementation

    cout << third;
    return 0;
}