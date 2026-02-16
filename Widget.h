//
// Created by Admin on 16/02/2026.
//

#ifndef CLASSES_WIDGET_H
#define CLASSES_WIDGET_H


class Widget {
public:
    Widget(bool enabled);
    void enable();
    void disable();
    bool isEnabled() const;
private:
    bool enabled;
protected:
    int width;
};


#endif //CLASSES_WIDGET_H