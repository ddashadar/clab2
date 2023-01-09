#include "taskshead.h"
#include <iostream>

void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

void swap2(double *a, double *b) {
    double temp = *b;
    *b = *a;
    *a = temp;
}

void sort (int arr1[], int size) {
    int arr2[size], i, j, k;

    for (i = 0, j = 0, k = size - 1; i < size; ++i) {
        if (arr1[i] < 0)
            arr2[j++] = arr1[i];
        else
            arr2[k--] = arr1[i];
    }

    for (j = 0; j < size; ++j)
        std::cout << arr2[j] << " ";
    std::cout << std::endl;
}

void order(int arr[15]) {
    for (int i = 0; i < 14; ++i) {
        bool isSorted = true;
        for (int j = 0; j < 14 - i; ++j) {
            if ((arr[j] >= 0 && arr[j + 1] < 0) ||
                (arr[j] >= 0 && arr[j + 1] > arr[j]) ||
                (arr[j] < 0 && arr[j + 1] < 0 && arr[j] > arr[j + 1])) {
                std::swap(arr[j], arr[j + 1]);
                isSorted = false;
            }
        }
        if (isSorted) break;
    }
}