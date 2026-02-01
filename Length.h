//
// Created by Admin on 01/02/2026.
//

#ifndef CLASSES_LENGTH_H
#define CLASSES_LENGTH_H


class Length {
public:
    explicit Length(int value);
    // Equality operator
    // We use a reference parameter for optimization
    bool operator==(const Length& other) const;

    bool operator==(int other) const;
    bool operator!=(int other) const;
private:
    int value;
};


#endif //CLASSES_LENGTH_H