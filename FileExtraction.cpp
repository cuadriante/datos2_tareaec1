//
// Created by cuadriante on 15/8/21.
//

#include "FileExtraction.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

ofstream* g_destFile;
vector<int> g_intVector;
int g_highestNumber;
int g_highestNumberDigits;

void FileExtraction::openAndExtractFile(string initialFileName, string destinyFileName) {
    ifstream initialFile;
    initialFile.open (initialFileName);
    ofstream destFile;
    destFile.open (destinyFileName, ios::trunc | ios::binary);
    string line;



    int i = 0;
    if (initialFile.is_open() && destFile.is_open())
    {
        g_highestNumber = getHighestNumber(&initialFile);
        g_highestNumberDigits = getDigits(g_highestNumber);
        initialFile.open(initialFileName);
        std::cout << "initialFile opened \n";
        while ( getline (initialFile, line) )
        {
            cout << "from initialFile: " << line << '\n';
            parseToDestinyFile(line, &destFile);
            i++;
        }
        initialFile.close();
    }

    else cout << "Unable to open initialFile";

}

void FileExtraction::parseToDestinyFile(string line, ofstream* destinyFile) {
    string delimiter = ",";

    size_t pos = 0;
    std::string token;
    int *arr;


    while ((pos = line.find(delimiter)) != std::string::npos) {
        token = line.substr(0, pos);

        int intToken = stoi(token);

        int intTokenDigits = getDigits(intToken);

        int quantityToAdd = g_highestNumberDigits - intTokenDigits;
        while (quantityToAdd > 0)
        {
            *destinyFile << "0";
            quantityToAdd --;
        }
        //addZeroes(intToken, destinyFile);

        *destinyFile << intToken << ",";

        std::cout << "parsed: " << intToken << std::endl;

        g_intVector.insert(g_intVector.cend(), intToken);

        line.erase(0, pos + delimiter.length());
    }
    g_destFile = destinyFile;
    destinyFile->close();
    cout << "delimiter not found for " << line << "\n";
    //std::cout << line << std::endl;
}

ofstream* FileExtraction::getDestinyFile() {
    return g_destFile;

}

vector<int> FileExtraction::getDestinyFileVector() {
    return g_intVector;

}

int FileExtraction::getHighestNumber(std::ifstream* initialFile) {
    string line;
    string delimiter = ",";
    int highestNumber = -1;

    size_t pos = 0;
    std::string token;
    while ( getline (*initialFile, line) )
    {
        while ((pos = line.find(delimiter)) != std::string::npos) {
            token = line.substr(0, pos);

            int intToken = stoi(token);

            if (highestNumber < intToken)
            {
                highestNumber = intToken;
            }

            line.erase(0, pos + delimiter.length());
        }
    }

    initialFile->close();
    cout << "highest number: " << highestNumber << "\n";

    return highestNumber;
}

int FileExtraction::addZeroes(int intToken, ofstream* destinyFile) {
    string toAdd;
    int quantityToAdd = getDigits(g_highestNumber) - getDigits(intToken);
    while (quantityToAdd > 0)
    {
        *destinyFile << "0";
        quantityToAdd --;
    }

    return 0;
}

int FileExtraction::getDigits(int intToken) {
    int digits = 0;
    while(intToken != 0) {
        intToken = intToken / 10;
        digits++;
    }
    return digits;
}


