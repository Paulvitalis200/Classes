//
// Created by Admin on 20/03/2026.
//

#ifndef CLASSES_FILEWRITER_H
#define CLASSES_FILEWRITER_H

#include <iostream>
using namespace std;

class FileWriter {
public:
    FileWriter(string fileName) {
        cout << "Constructor of FileReader" << endl;
    }

    string fileName() {
        return "Filename";
    }

    void write(string content) {
        cout << content;
    }
};


#endif //CLASSES_FILEWRITER_H