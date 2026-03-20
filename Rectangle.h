//
// Created by Admin on 16/02/2026.
//

#ifndef CLASSES_RECTANGLE_H
#define CLASSES_RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
public:
    void setWidth(int width);
private:
    int width;
};


#endif //CLASSES_RECTANGLE_H