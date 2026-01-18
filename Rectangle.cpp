//
// Created by Admin on 24/12/2025.
//

#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::draw() {
    cout << "Drawing a rectangle" << endl;
    cout << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea() {
    return width * height;
}

int Rectangle::getWidth() {
    return width;
}

void Rectangle::setWidth(int width) {
    if (width < 0)
        throw invalid_argument("width");
    this->width = width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::set_height(int height) {
    if (height < 0)
        throw invalid_argument("height");
    this->height = height;
}
