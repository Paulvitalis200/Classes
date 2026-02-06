//
// Created by Admin on 01/02/2026.
//


#ifndef CLASSES_LENGTH_H
#define CLASSES_LENGTH_H

#include <compare>
#include <ostream>
#include <istream>

using namespace std;

class Length {
public:
    explicit Length(int value);
    Length() = default;
    bool operator==(const Length& other) const;
    bool operator==(int other) const;
    strong_ordering operator<=>(const Length& other) const;
    Length operator+(const Length& other) const; // overloading arithmetic
    Length& operator+=(const Length& other); // lesson implementation
    Length& operator++(); // prefix
    Length operator++(int); // postfix. Return type should be Length. We are returning a copy because we are not modifying an existing object.
    operator int() const; // Overload type conversion
    int get_value() const;
    void set_value(const int value);
private:
    int value;
    int x;
    friend ostream& operator<<(ostream& stream, const Length& length);
};

// Here
ostream& operator<<(ostream& stream, const Length& length);

// Overloading Stream extraction operator
istream& operator>>(istream& stream, Length& length);


#endif //CLASSES_LENGTH_H