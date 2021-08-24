//
// Created by cuadriante on 14/8/21.
//

#ifndef UNTITLED_QUICKSORT_H
#define UNTITLED_QUICKSORT_H

#include<cstdio>
#include "PagedArray.h"

class QuickSort {
public:
    void swap(int i, int j , PagedArray arr);
    int partition (PagedArray arr, int low, int high);
    void quickSort(PagedArray arr, int low, int high);
    void printArray(PagedArray arr, int size);



};


#endif //UNTITLED_QUICKSORT_H
