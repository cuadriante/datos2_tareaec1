//
// Created by cuadriante on 21/8/21.
//

#ifndef DATOS2_TAREAEC1_PAGEDARRAY_H
#define DATOS2_TAREAEC1_PAGEDARRAY_H

#include <iostream>
#include <fstream>
#include <vector>
#include "IntPage.h"

using namespace std;

class PagedArray {
private:
    fstream destinyFile;
    int digits;
    const int maxPages = 6;
    int size;
    vector<IntPage> loadedPages;

public:
    PagedArray(std::string destinyFileName, int numberSize);
    ~PagedArray();
    void printContents();
    int getSize();
    IntPage* searchForPage(int pageNumber);


    int &operator[](int index);
//
};


#endif //DATOS2_TAREAEC1_PAGEDARRAY_H
