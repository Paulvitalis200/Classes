//
// Created by Admin on 29/01/2026.
//

#include "SmartPointer.h"

SmartPointer::SmartPointer(int *ptr) : ptr{ptr} {

}

SmartPointer::~SmartPointer() {
    delete ptr;
    ptr = nullptr;
}
