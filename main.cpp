#include <iostream>
#include <numeric>

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
				midx = j;
			}
		}
		std::swap(arr[i], arr[midx]);
	}
}

int main()
{
	selectionSort(Num, 3);
	for (int i : Num)
	{
		std::cout << i << " ";
	}
}

