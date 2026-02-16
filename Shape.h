//
// Created by Admin on 16/02/2026.
//

#ifndef CLASSES_SHAPE_H
#define CLASSES_SHAPE_H

#import <string>
using namespace std;

class Shape {
public:
    string getBackground();
    void setBackground(const string& background);
private:
    string background = "Default";
};


#endif //CLASSES_SHAPE_H