//
// Created by Admin on 01/02/2026.
//

#ifndef CLASSES_POINT_H
#define CLASSES_POINT_H

#include <ostream>

using namespace std;

class Point {
public:
    explicit Point(int x, int y);
    bool operator==(const Point& other) const;
    int get_x() const;
    void set_x(int x);
    int get_y() const;
    void set_y(int y);
private:
    int x;
    int y;
};

ostream& operator<<(ostream& stream, const Point& point);

#endif //CLASSES_POINT_H