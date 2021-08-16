//
// Created by cuadriante on 14/8/21.
//

#include "QuickSort.h"
#include<cstdio>
#include <iostream>

void QuickSort::quickSort(int *arr, int low, int high) {
    if (low < high)
    {
        // divide en 2 arrays segun pivot
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1); // sub array de antes
        quickSort(arr, pivot + 1, high); // sub array despues
    }
}

void QuickSort::swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int QuickSort::partition(int arr[], int low, int high) {
    int pivot = arr[high]; // primero lo posiciona en el ultimo elemento

    printArray(arr, high);
    std::cout << "low: " << low << "\n";
    std::cout << "high: " << high << "\n";

    int i = (low - 1); // indice del menor numero
    std::cout << "i: " << i << "\n";

    for (int j = low; j <= high - 1; j++)
    {
        // chequea si es menor o igual al pivot
        if (arr[j] <= pivot)
        {
            i++;    // incrementa index del menor elemento
            swap(&arr[i], &arr[j]); // ordena
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void QuickSort::printArray(int *arr, int size) {
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

}
