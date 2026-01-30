// Find Second Largest Element From Given 1D Array

#include <iostream>
using namespace std;

int Min(int arr[], int size)
{
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

	for(int ind = 2; ind < size; ind++)
	{
		if(max < arr[ind])
		{
			min = max;
			max = arr[ind];
		}
		else if(min < arr[ind])
		{
			min = arr[ind];
		}
	}

	return min;
}

int main()
{
	cout<<"Hello World\n";

// 	int arr[] = {1,3,9,8,7,0};
	int arr[] = {11,11,10};
	cout << secondLargest(arr, sizeof(arr) / sizeof(arr[0])) << endl;

	return 0;
}
