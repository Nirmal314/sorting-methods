#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"

void insertionSort(int arr[], int n)
{
    int curr, j;

    for (int i = 1; i < n; i++)
    {
        curr = arr[i];
        j = i - 1;
        while (arr[j] > curr && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }
}

void main()
{
    int arr[] = {5, 2, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array : ");
    printArr(arr, n);

    insertionSort(arr, n);

    printf("Sorted array : ");
    printArr(arr, n);
}
