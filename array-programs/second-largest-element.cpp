// Find Second Largest Element From Given 1D Array

#include <iostream>
using namespace std;

int Min(int arr[], int size)
{
    if(size <= 0)
    {
       return -1;
    }
	int min = arr[0];
	for(int i = 0; i < size; i++)
	{
		if(min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

int Max(int arr[], int size)
{
    if(size <= 0)
    {
        return -1;
    }
	int max = arr[0];
	for(int i = 0; i < size; i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

int secondLargest(int arr[], int size)
{
	int min = Min(arr, size);
	int max = Max(arr, size);
	
	

	for(int ind = 0; ind < size; ind++)
	{
		if(max < arr[ind])
		{
			min = max;
			max = arr[ind];
		}
		else if(min < arr[ind] && arr[ind] != max)
		{
			min = arr[ind];
		}
	}

    if(min == max)
    {
        return -1;
    }

	return min;
}

int main()
{
	int arr[] = {1,3,9,8,7,0};
	cout << secondLargest(arr, sizeof(arr) / sizeof(arr[0])) << endl;

	return 0;
}
