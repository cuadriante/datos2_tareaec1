//
// Created by cuadriante on 15/8/21.
//

#include "FileExtraction.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


void FileExtraction::openFile(string initialFileName, string destinyFileName) {
    ifstream initialFile;
    initialFile.open (initialFileName);
    ofstream destFile;
    destFile.open (destinyFileName, ios::trunc | ios::binary);
    string line;

    int i = 0;
    if (initialFile.is_open() && destFile.is_open())
    {
        std::cout << "initialFile opened \n";
        while ( getline (initialFile, line) )
        {
            cout << "from initialFile: " << line << '\n';
            parseLine(line, &destFile);
            i++;
        }
        initialFile.close();
    }

    else cout << "Unable to open initialFile";

}

void FileExtraction::parseLine(string line, ofstream* destinyFile) {
    string delimiter = ",";

    size_t pos = 0;
    std::string token;
    int *arr;
    while ((pos = line.find(delimiter)) != std::string::npos) {
        token = line.substr(0, pos);

        int intToken = stoi(token);

        std::cout << "parsed: " << intToken << std::endl;

        //*destinyFile->write(intToken);
        destinyFile->pword(intToken);
        line.erase(0, pos + delimiter.length());
    }
    cout << "delimiter not found for " << line << "\n";
    //std::cout << line << std::endl;
}

