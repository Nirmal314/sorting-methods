#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"

void selectionSort(int arr[], int n)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
            swap(&arr[min], &arr[i]);
        }
    }
}

void main()
{
    int arr[] = {5, 2, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array : ");
    printArr(arr, n);

    selectionSort(arr, n);

    printf("Sorted array : ");
    printArr(arr, n);
}
