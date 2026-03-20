#include <iostream>
#include "FileIO.h"
#include "Rectangle.h"

using namespace std;


int main() {
    try {
        cout << "Width: ";
        int width;
        cin >> width;

        Rectangle rect;

        rect.setWidth(width);

        cout << "Done";
    }
    catch (const invalid_argument& ex) {
        cout << ex.what();
    }

    cout << "End of program";

    return 0;


}