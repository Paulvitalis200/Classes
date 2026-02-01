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
