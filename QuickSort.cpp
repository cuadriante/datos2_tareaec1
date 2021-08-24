//
// Created by cuadriante on 14/8/21.
//

#include "QuickSort.h"
#include "PagedArray.h"
#include<cstdio>
#include <iostream>
//
//void QuickSort::quickSort(PagedArray arr, int low, int high) {
//    if (low < high)
//    {
//        // divide en 2 arrays segun pivot
//        int pivot = partition(arr, low, high);
//        quickSort(arr, low, pivot - 1); // sub array de antes
//        quickSort(arr, pivot + 1, high); // sub array despues
//    }
//}
//
//void QuickSort::swap(int i, int j, PagedArray arr) {
////    int t = arr[i];
////    arr[i] = arr[j];
////    arr[j] = t;
//}
//
//int QuickSort::partition(PagedArray arr, int low, int high) {
//    int pivot = arr[high]; // primero lo posiciona en el ultimo elemento
//
//    printArray(arr, high);
//    //std::cout << "low: " << low << "\n";
//    //std::cout << "high: " << high << "\n";
//
//    int i = (low - 1); // indice del menor numero
//    //std::cout << "i: " << i << "\n";
//
//    for (int j = low; j <= high - 1; j++)
//    {
//        // chequea si es menor o igual al pivot
//        if (arr[j] <= pivot)
//        {
//            i++;    // incrementa index del menor elemento
//            swap(i, j, arr); // ordena
//        }
//    }
//    swap(i + 1, high, arr);
//    return (i + 1);
//}
//
//void QuickSort::printArray(PagedArray arr, int size) {
//    int i;
//    for (i=0; i < size; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//}
//
//
