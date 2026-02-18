//
// Created by Admin on 16/02/2026.
//

#ifndef CLASSES_WIDGET_H
#define CLASSES_WIDGET_H


class Widget {
public:
    virtual void draw() const;
    void enable();
    void disable();
    bool isEnabled() const;
private:
    bool enabled;
protected:
    int width;
};


#endif //CLASSES_WIDGET_H