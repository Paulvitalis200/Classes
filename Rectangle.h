//
// Created by Admin on 24/12/2025.
//

#ifndef CLASSES_RECTANGLE_H
#define CLASSES_RECTANGLE_H


class Rectangle {
public:
    void draw();
    int getArea();
    // Getter (accessor)
    int getWidth();
    // Setter (mutator)
    void setWidth(int width);
private:
    int width;
    int height;

public:
    int getHeight() const;
    void set_height(int height);
};


#endif //CLASSES_RECTANGLE_H