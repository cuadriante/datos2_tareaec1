#include <iostream>
/**
 *
 * @return
 */
 #include<cstdio>
#include "QuickSort.h"
#include "FileExtraction.h"
#include "PagedArray.h"
#include "CreateInitialFile.h"
#include "IntPage.h"
#include <iostream>
#include <string>


using namespace std;

int main(int argc, char *argv[])
{
    string initialFileName;
    string destinyFileName;

    //initialFileName = "archivo.txt";
    //destinyFileName = "archivo_resultado.txt";

    if(argc==2) {
        initialFileName = argv[0];
        destinyFileName = argv[1];
    }

    QuickSort qs;
    FileExtraction fe;
    CreateInitialFile cif(initialFileName, 10);

    fe.openAndExtractFile(initialFileName, destinyFileName);
    int numberSize = fe.getHighestNumberDigits();
    PagedArray pa(destinyFileName, numberSize);
    qs.quickSort(&pa, 0, pa.getSize() - 1);
    //qs.printArray(&pa, pa.getSize());

}
