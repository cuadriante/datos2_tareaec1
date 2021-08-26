//
// Created by cuadriante on 24/8/21.
//

//! \file CreateInitialFile.h
//!  An initial file creation class.
/*!
  Generates a quantity of random int numbers to an initial file.
*/

#ifndef DATOS2_TAREAEC1_CREATEINITIALFILE_H
#define DATOS2_TAREAEC1_CREATEINITIALFILE_H

#include <fstream>
#include "IntPage.h"

using namespace std;

class CreateInitialFile {
protected:
    //! An ofstream initialFile.
    /*! File to which numbers will be generated to. */
    ofstream initialFile;

public:
    //! A constructor.
    /*!
     * \param initialFileName File to which numbers will be extracted.
     * \param pageQuantity Number of pages to be created.
    */
    CreateInitialFile(string initialFileName, int pageQuantity);

};


#endif //DATOS2_TAREAEC1_CREATEINITIALFILE_H
