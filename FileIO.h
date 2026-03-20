//
// Created by Admin on 20/03/2026.
//

#ifndef CLASSES_FILEIO_H
#define CLASSES_FILEIO_H

#include "FileReader.h"
#include "FileWriter.h"

class FileIO : public FileReader, public FileWriter {
public:
    FileIO(string fileName) : FileReader(fileName), FileWriter(fileName) {

    }
};


#endif //CLASSES_FILEIO_H