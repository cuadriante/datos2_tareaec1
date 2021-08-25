//
// Created by cuadriante on 24/8/21.
//

#ifndef DATOS2_TAREAEC1_CREATEINITIALFILE_H
#define DATOS2_TAREAEC1_CREATEINITIALFILE_H

#include <fstream>
#include "IntPage.h"

using namespace std;

class CreateInitialFile {
protected:
    ofstream initialFile;

public:
    CreateInitialFile(int pageQuantity);

};


#endif //DATOS2_TAREAEC1_CREATEINITIALFILE_H
