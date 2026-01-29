//
// Created by Admin on 29/01/2026.
//

#ifndef CLASSES_SMARTPOINTER_H
#define CLASSES_SMARTPOINTER_H


class SmartPointer {
public:
    explicit SmartPointer(int* ptr);
    ~SmartPointer();
private:
    int* ptr;
};


// Create SmartPointer class. It will have an attribute of type integer pointer (int*) -
// ptr: int*. It hsould have a constructor for initializeing the pointer. - (SmartPointer(ptr: int*)
// We aso need a desctructor for this ~ SmartPointer()

#endif //CLASSES_SMARTPOINTER_H