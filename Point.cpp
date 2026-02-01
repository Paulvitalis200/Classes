//
// Created by Admin on 01/02/2026.
//

#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {

}

bool Point::operator==(const Point &other) const {
    return (x == other.x) && (y == other.y);
}
