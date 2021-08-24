//
// Created by cuadriante on 23/8/21.
//

#ifndef DATOS2_TAREAEC1_INTPAGE_H
#define DATOS2_TAREAEC1_INTPAGE_H


#include "PagedArray.h"

using namespace std;

class IntPage {

private:
    vector<int> data;
    int pageNumber;
    int digits;
    fstream* destinyFile;

public:

    static const int pageSize = 3;
    IntPage(fstream* destinyFile, int pageNumber, int digits);
    void readFromFile();
    void writeToFile();
    void printArray(int* arr);
    int getPageNumber();
    int* getElement(int indexInPage);
};


#endif //DATOS2_TAREAEC1_INTPAGE_H
