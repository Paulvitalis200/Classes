//
// Created by Admin on 20/03/2026.
//

#ifndef CLASSES_FILEREADER_H
#define CLASSES_FILEREADER_H
#include <iostream>
#include <string>

using namespace std;

class FileReader {
public:
    FileReader(string fileName) {
        cout << "Constructor of FileReader" << endl;
    }

    string fileName() {
        return "Filename";
    }

    string read() {
        return "Hello World";
    }
};


#endif //CLASSES_FILEREADER_H