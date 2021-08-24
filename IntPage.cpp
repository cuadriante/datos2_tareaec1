//
// Created by cuadriante on 23/8/21.
//

#include "IntPage.h"
#include "PagedArray.h"
#include <vector>



void IntPage::printArray(int *arr) {
    int size = sizeof(arr)/sizeof(arr[0]);
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

}

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
    while ( i > 0 ) {
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
    return &data.at(indexInPage);
}

IntPage::~IntPage() {
    writeToFile();
}

