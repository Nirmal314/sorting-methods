#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int binarySearch(int arr[], int low, int high, int val)
{
    if (high >= low)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == val)
            return mid;

        if (arr[mid] > val)
            return binarySearch(arr, low, mid - 1, val);

        return binarySearch(arr, mid + 1, high, val);
    }
    return -1;
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int search1 = 4;
    int search2 = 100;

    binarySearch(arr, 0, n - 1, search1) != -1 ? printf("%d found on index %d\n", search1, binarySearch(arr, 0, n - 1, search1)) : printf("Value not found.\n");
    binarySearch(arr, 0, n - 1, search2) != -1 ? printf("%d found on index %d\n", search2, binarySearch(arr, 0, n - 1, search2)) : printf("Value not found.\n");
}