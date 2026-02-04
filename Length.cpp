//
// Created by Admin on 01/02/2026.
//
#include <iostream>
#include "Length.h"

using namespace std;

Length::Length(int value) : value(value) {

}

bool Length::operator==(const Length &other) const {
    return value == other.value;
}

bool Length::operator==(int other) const {
    return value == other;
}

std::strong_ordering Length::operator<=>(const Length &other) const {
    return value <=> other.value;
}

Length Length::operator+(const Length &other) const {
    return Length(value + other.value);
}

Length& Length::operator+=(const Length &other) {
    value += other.value;
    return *this;
}

Length& Length::operator++() {
    value++; // increment value of current object
    return *this; // return value of current object
}

Length Length::operator++(int) {
    Length copy = *this; // Take a copy of the object
    operator++();
    return copy;
}

// Length& Length::operator=(const Length &other) {
//     cout << "Object Assigned to another";
//     value = other.value;
//     return *this; // dereferenc pointer and return it
// }

int Length::get_value() const {
    return value;
}

void Length::set_value(const int value) {
    this->value = value;
}

ostream& operator<<(ostream &stream, const Length &length) {
    stream << length.get_value();
    length.x; // We can now access any private variable e.g int x because of the friend
    return stream; // Reason for returning the stream object is to allow chaining of the insertion operator many times e.g cout << 1 << 2 << 3
}

istream & operator>>(istream &stream, Length &length) {
    int value;
    stream >> value;
    length.set_value(value);
    return stream;
}
