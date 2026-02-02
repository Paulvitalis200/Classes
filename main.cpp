#include <iostream>
#include "memory"
#include "Length.h"
#include "Point.h"

using namespace std;


int main() {
    Length length{10};
    Length second{20};
    Point point{22, 12};

    cout << point;
    return 0;
}