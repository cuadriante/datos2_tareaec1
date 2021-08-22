#include <iostream>
/**
 *
 * @return
 */
 #include<cstdio>
#include "QuickSort.h"
#include "FileExtraction.h"
#include "PagedArray.h"
#include <iostream>
#include <string>
#include <vector>

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
    cout << "number found: " << pa.getIntFromDestinyFile(8) << "\n";

    int num1 = pa.getIntFromDestinyFile(3);
    int num2 = pa.getIntFromDestinyFile(6);
    pa.setIntToDestinyFile(num2, 3);
    pa.setIntToDestinyFile(num1, 6);

    vector<int> fileVector = fe.getDestinyFileVector();
    int* arr = &fileVector[0];
    int n = fileVector.size();
    qs.quickSort(arr, 0, n - 1);
    qs.printArray(arr, n);



}
