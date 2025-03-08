#include <iostream>
#include <algorithm>
#include <cstring>

int Num[] = {1, 7, 4};

void insertSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        for (j; j >= 0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

void insertSortBinary(int arr[], int n)
{
    if (n < 2)
        return;
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        auto index = std::upper_bound(arr, arr + i, key) - arr;
        std::memmove(arr + index + 1, arr + index, (i - index) * sizeof(int));
        arr[index] = key;
    }
}