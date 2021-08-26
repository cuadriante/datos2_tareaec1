//
// Created by cuadriante on 14/8/21.
//

//! \file QuickSort.h
//!  A sorting class.
/*!
  Generates a sorted version of an initial set of numbers using the quick sort method.
*/


#ifndef UNTITLED_QUICKSORT_H
#define UNTITLED_QUICKSORT_H

#include<cstdio>
#include "PagedArray.h"

class QuickSort {
public:
    //! A swapping function.
    /*! \param i Index of number to be swapped.
     * \param j Index of number to be swapped.
     * \param arr Array of numbers.
    */
    void swap(int i, int j, PagedArray *arr);
    //! A partition function.
    /*! \param arr Array of numbers.
     * \param low Lowest number in array.
     * \param high Highest number in array.
    */
    int partition (PagedArray *arr, int low, int high);
    //! A quick sort function.
    /*! \param arr Array of numbers.
     * \param low Lowest number in array.
     * \param high Highest number in array.
    */
    void quickSort(PagedArray *arr, int low, int high);
    void printArray(PagedArray *arr, int size);

};


#endif //UNTITLED_QUICKSORT_H
