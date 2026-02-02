#include <iostream>
#include "memory"
#include "Length.h"
#include "Point.h"

using namespace std;


int main() {
    Length length{10};
    Length second{20};
    Length third = length + second;

    cout << third;
    return 0;
}