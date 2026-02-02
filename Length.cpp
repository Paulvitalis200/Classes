//
// Created by Admin on 01/02/2026.
//

#include "Length.h"

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

int Length::get_value() const {
    return value;
}

void Length::set_value(const int value) {
    this->value = value;
}

ostream& operator<<(ostream &stream, const Length &length) {
    stream << length.get_value();
    return stream; // Reason for returning the stream object is to allow chaining of the insertion operator many times e.g cout << 1 << 2 << 3
}

istream & operator>>(istream &stream, Length &length) {
    int value;
    stream >> value;
    length.set_value(value);
    return stream;
}
