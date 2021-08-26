//
// Created by cuadriante on 15/8/21.
//
//! \file FileExtraction.h
//!  A file extraction class.
/*!
  Reads numbres from initial file and parses them to a destiny file.
*/

#ifndef DATOS2_TAREAEC1_FILEEXTRACTION_H
#define DATOS2_TAREAEC1_FILEEXTRACTION_H
#include <iostream>
#include <fstream>
#include <vector>


class FileExtraction {

public:
    //! An extraction function.
    /*!
     * \param initialFileName File from which numbers will be extracted.
     * \param destinyFileName File to which numbers will be written.
    */
    void openAndExtractFile(std::string initialFileName, std::string destinyFileName);
    //! A parsing function.
    /*!
     * \param line Line from destiny file where numbers will be parsed.
     * \param destinyFile File where numbers will be parsed to.
    */
    void parseToDestinyFile(std::string line, std::ofstream* destinyFile);
    std::ofstream* getDestinyFile();
    std::vector<int> getDestinyFileVector();
    //! A function.
    /*!
     * \param initialFile File from which highest number will be extracted.
    */
    int getHighestNumber(std::ifstream* initialFile);
    //! A function.
    /*!
     * \param intToken Number to get digits of.
    */
    int getDigits(int intToken);
    //! A function.
    /*!
     *
    */
    int getHighestNumberDigits();
};


#endif //DATOS2_TAREAEC1_FILEEXTRACTION_H
