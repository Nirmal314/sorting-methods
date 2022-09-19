#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
}

void main()
{
    int arr[] = {5, 2, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array : ");
    printArr(arr, n);

    bubbleSort(arr, n);
    
    printf("Sorted array : ");
    printArr(arr,n);
}