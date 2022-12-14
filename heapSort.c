#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1; // 2i if array starts from 1
    int right = 2 * i + 2; // 2i+1 if array starts from 1

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
        
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void main()
{
    int arr[] = {1, 12, 9, 5, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array : ");
    printArr(arr, n);

    heapSort(arr, n);

    printf("Sorted array : ");
    printArr(arr, n);
}