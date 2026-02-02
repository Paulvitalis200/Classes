#include <iostream>
#include "memory"
#include "Length.h"
#include "Point.h"

using namespace std;


int main() {
    Length length{10};

    cout << "Length: ";
    cin >> length;
    cout << length;
    return 0;
}