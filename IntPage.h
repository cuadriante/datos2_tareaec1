//
// Created by cuadriante on 23/8/21.
//

//! \file IntPage.h
//!  A page class.
/*!
  Reads numbers in a defined page, quantity defined by page size. Writes new numbers to page when needed (overwrites all initial numbers)
*/

#ifndef DATOS2_TAREAEC1_INTPAGE_H
#define DATOS2_TAREAEC1_INTPAGE_H

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class IntPage {

private:
    //! A vector data.
    /*! Stores all the numbers belonging to the selected page. */
    vector<int> data;
    //! An int pageNumber.
    /*! Stores page number of selected page. */
    int pageNumber;
    //! An int digits.
    /*! Stores the amount of digits from the highest number in the initial file. */
    int digits;
    //! An fstream* destinyFile.
    /*! Opened to be able to read and write to. */
    fstream* destinyFile;

public:

    static const int pageSize = 256;
    //! A constructor.
    /*!
      Initializes a destiny file, page number and digits.
    */
    IntPage(fstream* destinyFile, int pageNumber, int digits);
    //! A destructor.
    /*!
      Rewrites updated numbers to destiny file.
    */
    ~IntPage();
    //! A function.
    /*!
    */
    void readFromFile();
    //! A function.
    /*!
    */
    void writeToFile();
    //! A function.
    /*!
    */
    int getPageNumber();
    //! A function.
    /*!
     * \param indexInPage number to look for in selected page
    */
    int* getElement(int indexInPage);
};


#endif //DATOS2_TAREAEC1_INTPAGE_H
