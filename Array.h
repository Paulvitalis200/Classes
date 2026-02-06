//
// Created by Admin on 06/02/2026.
//

#ifndef CLASSES_ARRAY_H
#define CLASSES_ARRAY_H

#include <cstddef>

class Array {
public:
    // size_t refers to unsinged long long or unsigned int depending on the compiler
    explicit Array(size_t size);
    ~Array();
    int& operator[](size_t index);
private:
    int* values;
    size_t size;
};


#endif //CLASSES_ARRAY_H