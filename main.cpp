#include <iostream>
/**
 *
 * @return
 */
 #include<cstdio>
#include "QuickSort.h"
#include "FileExtraction.h"
#include "PagedArray.h"
#include "IntPage.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{
    QuickSort qs;
    FileExtraction fe;


    // ejemplo quicksort
    //int arr[] = {4, 28, 9, 73, 1, 5, 88, 32};
    //int n = sizeof(arr)/sizeof(arr[0]);
    //qs.quickSort(arr, 0, n-1);
    //printf("Sorted array: \n");
    //qs.printVector(arr, n);

    // ejemplo archivo
    fe.openAndExtractFile("initialfile.txt", "destinyfile.txt");
    ofstream* destinyFile = fe.getDestinyFile();
    int numberSize = fe.getHighestNumberDigits();

    PagedArray pa("destinyfile.txt", numberSize);

//    fstream g_destinyFile;
//    g_destinyFile.open("destinyfile.txt", ios::in | ios::out | ios::binary);
//
//    IntPage intp(&g_destinyFile, 4, 7);
//    cout << *intp.getElement(2);

    pa[2] = 19;
    cout << pa[2] << endl;


    //intp.readFromPageArray(pa, 1);

//    pa.printContents();
//
//    int num1 = pa.getIntFromDestinyFile(3);
//    int num2 = pa.getIntFromDestinyFile(6);
//    pa.setIntToDestinyFile(num1, 6);
//    pa.setIntToDestinyFile(num2, 3);
//
//
//
//    //vector<int> fileVector = fe.getDestinyFileVector();
//    //int* arr = &fileVector[0];
//    //int n = fileVector.size();
//    qs.quickSort(pa, 0, pa.getSize() - 1);
//    qs.printArray(pa, pa.getSize());



}
