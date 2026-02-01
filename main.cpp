#include <iostream>
#include "Person.h"
#include "memory"
#include "Length.h"
#include "Point.h"
// The reason we have two files, header and cpp is to reduce compile times,
using namespace std;



int main() {
    Length first{10};
    Length second{20};

    if (first < second)
        cout << "First is smaller";
    return 0;
}