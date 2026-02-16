#include <iostream>
#include "memory"
#include "Length.h"
#include "Point.h"
#include "Array.h"
#include "TextBox.h"
#include "Rectangle.h"
using namespace std;


int main() {
    TextBox box;
    Rectangle tangle;

    // tangle.getBackground();
    box.disable();

    cout << box.isEnabled() << endl;
    cout << tangle.getBackground();

    return 0;
}