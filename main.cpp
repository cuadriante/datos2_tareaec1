#include <iostream>
/**
 *
 * @return
 */
 #include<cstdio>
#include "QuickSort.h"
#include "FileExtraction.h"
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
    vector<int> fileVector = fe.getDestinyFileVector();
    int* arr = &fileVector[0];
    int n = fileVector.size();
    qs.quickSort(arr, 0, n - 1);
    qs.printArray(arr, n);



}
