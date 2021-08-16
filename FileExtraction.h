//
// Created by cuadriante on 15/8/21.
//

#ifndef DATOS2_TAREAEC1_FILEEXTRACTION_H
#define DATOS2_TAREAEC1_FILEEXTRACTION_H
#include <iostream>
#include <fstream>


class FileExtraction {

public:
    void openFile(std::string initialFileName, std::string destinyFileName);
    void parseLine(std::string line, std::ofstream* destinyFile);
};


#endif //DATOS2_TAREAEC1_FILEEXTRACTION_H
