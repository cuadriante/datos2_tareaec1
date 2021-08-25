//
// Created by cuadriante on 24/8/21.
//

#include "CreateInitialFile.h"

CreateInitialFile::CreateInitialFile(int pageQuantity) {
    int totalQuantity = pageQuantity * IntPage::pageSize;
    ofstream initialFile;
    initialFile.open ("initialfile.txt");
    string line;
    string delimiter = ",";

    size_t pos = 0;
    int token;

    int i = 0;
    while (i < totalQuantity) {
        token = rand() % 10000000;

        initialFile << token << ",";

        line.erase(0, pos + delimiter.length());
        i++;
    }
    initialFile.close();
}
