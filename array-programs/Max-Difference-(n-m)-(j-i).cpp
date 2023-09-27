// Write a Cpp program to find the maximum n-m such that array[n]>array[m] from a given array[]. Given array arr[], maximum j-i such that arr[j]>arr[i]...

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, diff, max_diff = 0, exit = 0;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "The Given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] < arr[j])
      {
        exit = 1;
        diff = j - i;
        if (max_diff < diff)
        {
          max_diff = diff;
        }
        cout << "\nm = " << i << ", n = " << j << ", arr[m] = " << arr[i] << ", arr[n] = " << arr[j] << ": Difference = " << diff << endl;
      }
    }
  }
  if (exit == 1)
  {
    cout << "\nThe maximum differences between two position of array index is: " << max_diff << endl;
  }
  else
  {
    cout << "\nThere are not exist maximum different between two position of array index.\n";
  }
}

/*
Sample Output:

Enter the array size: 10
Enter the 10 elements: 7 5 8 2 3 2 4 1 0 1
The Given array is: 7 5 8 2 3 2 4 1 0 1
m = 0, n = 2, arr[m] = 7, arr[n] = 8: Difference = 2

m = 1, n = 2, arr[m] = 5, arr[n] = 8: Difference = 1

m = 3, n = 4, arr[m] = 2, arr[n] = 3: Difference = 1

m = 3, n = 6, arr[m] = 2, arr[n] = 4: Difference = 3

m = 4, n = 6, arr[m] = 3, arr[n] = 4: Difference = 2

m = 5, n = 6, arr[m] = 2, arr[n] = 4: Difference = 1

m = 8, n = 9, arr[m] = 0, arr[n] = 1: Difference = 1

The maximum differences between two position of array index is: 3
*/