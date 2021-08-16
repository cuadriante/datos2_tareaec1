//
// Created by cuadriante on 14/8/21.
//

#ifndef UNTITLED_QUICKSORT_H
#define UNTITLED_QUICKSORT_H

#include<cstdio>

class QuickSort {
public:
    void swap(int* a, int* b);
    int partition (int arr[], int low, int high);
    void quickSort(int arr[], int low, int high);
    void printArray(int arr[], int size);



};


#endif //UNTITLED_QUICKSORT_H
