#include <iostream>
#include "memory"
#include "Length.h"
#include "Point.h"

using namespace std;


int main() {
    // Length length;
    // Length second;
    //
    // // Unary e.g length++
    //
    // int x = 10;
    // int y = ++x; // x will be incremented and the value then stored in y. Both x and y will wbw 11
    // // int z = x++; // Postfix: A copy of x will be returned and stored in z and then x will be incremented by 1.

    Length first{10};
    Length second = first++;
    cout << "First: " << first << endl;
    cout << "Second: " << second << endl;
    return 0;
}