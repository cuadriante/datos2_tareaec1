//
// Created by cuadriante on 21/8/21.
//

#include "PagedArray.h"
    int g_numberSize;
    std::fstream g_destinyFile;

    using namespace std;

PagedArray::PagedArray(string destFileName, int numberSize) {
    g_destinyFile.open(destFileName, ios::in | ios::out | ios::binary);
    g_numberSize = numberSize;
}

int PagedArray::getIntFromDestinyFile(int index) {
    int position = (g_numberSize + 1)*index;
    char* memblock = new char [g_numberSize];
    g_destinyFile.seekg(position, ios::beg);
    g_destinyFile.read (memblock, g_numberSize);
    int numberFound = atoi(memblock);

    delete[] memblock;

    return numberFound ;
}


PagedArray::~PagedArray() {
    g_destinyFile.close();
}


