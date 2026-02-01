#include <iostream>
#include "memory"
#include "Length.h"
#include "Point.h"

using namespace std;


int main() {
    Length first{10};
    Length second{20};

    if (first < second)
        cout << "First is smaller";
    return 0;
}