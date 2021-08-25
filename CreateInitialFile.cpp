//
// Created by cuadriante on 24/8/21.
//

#include "CreateInitialFile.h"

CreateInitialFile::CreateInitialFile(string initialFileName, int pageQuantity) {
    int totalQuantity = pageQuantity * IntPage::pageSize;
    ofstream initialFile;
    initialFile.open (initialFileName, ios::out | ios::trunc);
    string line;
    string delimiter = ",";

    size_t pos = 0;
    int token;

    int i = 0;
    while (i < totalQuantity) {
        token = rand() % 100000000000000;

        initialFile << token << ",";

        line.erase(0, pos + delimiter.length());
        i++;
    }
    initialFile.close();
}
