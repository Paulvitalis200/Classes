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

bool Length::operator!=(int other) const {
    // return value != other; // Not the best way to implement inequality. We'll have to do this for all others
    return !(value == other); // Write it in terms of the equality operator
}

