//
// Created by Admin on 16/02/2026.
//

#ifndef CLASSES_WIDGET_H
#define CLASSES_WIDGET_H

// Abstract Class - Has at least one pure virtual method. These classes cannot be instantiated
// They exist mainly to be inherited.

class Widget {
public:
    // Pure virtual method
    virtual void draw() const = 0;
    void enable();
    void disable();
    bool isEnabled() const;
private:
    bool enabled;
protected:
    int width;
};


#endif //CLASSES_WIDGET_H