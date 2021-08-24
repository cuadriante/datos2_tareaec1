//
// Created by cuadriante on 23/8/21.
//

#include "IntPage.h"
#include "PagedArray.h"
#include <vector>

IntPage::IntPage(fstream* destFile, int pageNumber, int digits) {
    destinyFile = destFile;
    this->pageNumber = pageNumber;
    this->digits = digits;
    readFromFile();
}

void IntPage::readFromFile() {
    int position = pageNumber*pageSize*(digits + 1); // se suma 1 para tomar en cuenta la coma
    data.clear();
    char* memblock = new char [digits];
    destinyFile->seekg(position, ios::beg);
    int i = pageSize;
    while ( i > 0 && !destinyFile->eof() ) {
        destinyFile->read (memblock, digits);
        int value = atoi(memblock);
        data.push_back(value);
        destinyFile->read(memblock, 1); // leer la coma
        i--;
    }
    delete[] memblock;
    destinyFile->seekg(0, ios::beg);
}

void IntPage::writeToFile() {
    string value;
    int position = pageNumber*pageSize*(digits + 1); // se suma 1 para tomar en cuenta la coma
    destinyFile->seekg(position, ios::beg);

    for (int i = 0; i < data.size(); i++) {
        value = to_string(data.at(i));
        while (value.size() < digits) {
            value = "0" + value;
        }
        *destinyFile << value << ',';
    }
    destinyFile->seekg(0, ios::beg);
}

int IntPage::getPageNumber() {
    return pageNumber;
}

int *IntPage::getElement(int indexInPage) {
    if (indexInPage > data.size()) {
        cout << "Error: no existe el elemento " << indexInPage << endl;
    }
    return &data.at(indexInPage);
}

IntPage::~IntPage() {
    writeToFile();
}

