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
    // Rectangle(const Rectangle& source);
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& color);
    ~Rectangle(); // Cannot overload destructors

    void draw() const;
    int getArea() const;
    int getWidth() const;
    int getHeight() const;

    void setWidth(int width);
    void setHeight(int height);

    static int getObjectsCount();
private:
    int width;
    int height;
    string color;

    static int objectsCount;
};


#endif //CLASSES_RECTANGLE_H