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
    string sortType;
    bool sortWithQS = false;

    // ./paged-sort -i archivo.txt -a qs -o archivo_resultado.txt

    //initialFileName = "archivo.txt";
    //destinyFileName = "archivo_resultado.txt";

    if(argc>=4) {
        int counter;
        for (counter = 0; counter<argc;counter++){
            if (std::string(argv[counter]) == "-i") {
                if (counter + 1 < argc) {
                    initialFileName = argv[counter+1];
                    //CreateInitialFile cif(initialFileName, 10);
                }
            }
            if (std::string(argv[counter]) == "-a") {
                if (counter + 1 < argc) {
                    sortType = argv[counter+1];
                    if (sortType == "qs"){
                        sortWithQS = true;
                    }
                }
            }
            if (std::string(argv[counter]) == "-o"){
                if (counter + 1 < argc) {
                    destinyFileName = argv[counter + 1];
                }
            }
            cout << argv[counter];
        }
        //initialFileName = argv[0];
        //destinyFileName = argv[1];
    }

    if (sortWithQS){
        QuickSort qs;
        FileExtraction fe;
        fe.openAndExtractFile(initialFileName, destinyFileName);
        int numberSize = fe.getHighestNumberDigits();
        PagedArray pa(destinyFileName, numberSize);
        qs.quickSort(&pa, 0, pa.getSize() - 1);
        //qs.printArray(&pa, pa.getSize());
    }
}
