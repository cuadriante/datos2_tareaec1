//
// Created by cuadriante on 15/8/21.
//

#ifndef DATOS2_TAREAEC1_FILEEXTRACTION_H
#define DATOS2_TAREAEC1_FILEEXTRACTION_H
#include <iostream>
#include <fstream>
#include <vector>


class FileExtraction {

public:
    void openAndExtractFile(std::string initialFileName, std::string destinyFileName);
    void parseToDestinyFile(std::string line, std::ofstream* destinyFile);
    std::ofstream* getDestinyFile();
    std::vector<int> getDestinyFileVector();
    int getHighestNumber(std::ifstream* initialFile);
    int getDigits(int intToken);
    int getHighestNumberDigits();
};


#endif //DATOS2_TAREAEC1_FILEEXTRACTION_H
