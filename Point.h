//
// Created by Admin on 01/02/2026.
//

#ifndef CLASSES_POINT_H
#define CLASSES_POINT_H


class Point {
public:
    explicit Point(int x, int y);
    bool operator==(const Point& other) const;
private:
    int x;
    int y;
};


#endif //CLASSES_POINT_H