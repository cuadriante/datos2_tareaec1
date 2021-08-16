#include <iostream>
/**
 *
 * @return
 */
 #include<cstdio>
#include "QuickSort.h"
#include "FileExtraction.h"

int main()
{
    QuickSort qs;
    FileExtraction fe;

    // ejemplo quicksort
    int arr[] = {4, 28, 9, 73, 1, 5, 88, 32};
    int n = sizeof(arr)/sizeof(arr[0]);
    //qs.quickSort(arr, 0, n-1);
    //printf("Sorted array: \n");
    //qs.printArray(arr, n);

    // ejemplo archivo
    fe.openFile("initialfile.txt", "destinyfile.txt");

}
