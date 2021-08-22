//
// Created by cuadriante on 21/8/21.
//

#include <iostream>
#include <fstream>
#include <vector>

#ifndef DATOS2_TAREAEC1_PAGEDARRAY_H
#define DATOS2_TAREAEC1_PAGEDARRAY_H


class PagedArray {
public:
    PagedArray(std::string destinyFileName, int numberSize);
    ~PagedArray();
    int getIntFromDestinyFile(int index);
    void setIntToDestinyFile(int numberToSet, int index);


};


#endif //DATOS2_TAREAEC1_PAGEDARRAY_H
