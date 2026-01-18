//
// Created by Admin on 24/12/2025.
//

#ifndef CLASSES_RECTANGLE_H
#define CLASSES_RECTANGLE_H

#include <string>

using namespace std;

class Rectangle {
public:
    Rectangle() = default;
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& color);
    void draw();
    int getArea();
    int getWidth();
    void setWidth(int width);
    int getHeight() const;
    void setHeight(int height);
private:
    int width;
    int height;
    string color;
};


#endif //CLASSES_RECTANGLE_H