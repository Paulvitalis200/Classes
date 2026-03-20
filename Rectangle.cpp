//
// Created by Admin on 16/02/2026.
//

#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::setWidth(int width) {
    if (width < 0) {
        throw invalid_argument{"The width cannot be negative!"};
    }
    if (width > 100)
        throw out_of_range("The width cannot be greater than 100!");
    this->width = width;
}