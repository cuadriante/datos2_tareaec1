//
// Created by cuadriante on 21/8/21.
//

//! \file PagedArray.h
//!  A file creation class.
/*!
  Stores a maximum of six pages and rotates them as needed.
*/

#ifndef DATOS2_TAREAEC1_PAGEDARRAY_H
#define DATOS2_TAREAEC1_PAGEDARRAY_H

#include <iostream>
#include <fstream>
#include <vector>
#include "IntPage.h"

using namespace std;

class PagedArray {
private:
    //! An fstream destinyFile.
    /*! Opened to be able to read and write to. */
    fstream destinyFile;
    //! An int digits.
    /*! Stores the amount of digits from the highest number in the initial file. */
    int digits;
    //! A const int maxPages.
    /*! Determines the number of pages to be stored at a time. */
    const int maxPages = 6;
    //! An int size.
    /*! Stores the destinyFile size. */
    int size;
    //! A vector loadedPages.
    /*! Stores up to maxPages pages. */
    mutable vector<IntPage *> loadedPages;

public:
    //! A constructor.
    /*!
      \param destinyFileName File to which numbers will be written.
      \param numberSize The amount of digits from the highest number in the initial file.
    */
    PagedArray(std::string destinyFileName, int numberSize);
    //! A destructor.
    /*!
      Deletes loaded pages and closes file.
    */
    ~PagedArray();
    void printContents();
    //! A function.
    /*!
    */
    int getSize();
    //! A search function.
    /*! \param pageNumber Page that will be searched for in loadedPages.
    */
    IntPage * searchForPage(int pageNumber);


    int &operator[](int index);
    //int operator[](int index) const;
//
};


#endif //DATOS2_TAREAEC1_PAGEDARRAY_H
