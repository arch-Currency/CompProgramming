#include <iostream>

int Num[] = {1, 7, 4};

void bubbleSort(int arr[], int n)
{
    bool swapped = false;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                std::swap(arr[j], arr[j + 1]);
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}
