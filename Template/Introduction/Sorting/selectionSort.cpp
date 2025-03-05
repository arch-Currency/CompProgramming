#include <iostream>

int Num[] = {1, 7, 4};

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int midx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[midx])
            {
                midx = j;       // Find the index of the minimum element
            }
        }
        std::swap(arr[i], arr[midx]);
    }
}


