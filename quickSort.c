#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include "func.h"

int qs(int arr[], int low, int high)
{
    if (low > high)
        return 0;

    int pvt;
    int i = low;
    int j = high;
    pvt = arr[i];
    while (i < j)
    {
        while (pvt >= arr[i])
            i++;

        while (pvt < arr[j])
            j--;

        if (i < j)
            swap(&arr[i], &arr[j]);
    }
    swap(&arr[j], &arr[low]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int part = qs(arr, low, high);
        quickSort(arr, low, part - 1);
        quickSort(arr, part + 1, high);
    }
}
void main()
{
    // int arr[] = {10, 16, 8, 12, 15, 6, 3, 9, 5};
    int arr[] = {5, 2, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array : ");
    printArr(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array : ");
    printArr(arr, n);
}
