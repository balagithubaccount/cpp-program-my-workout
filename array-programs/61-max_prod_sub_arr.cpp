// Write a Cpp program to find maximum product subarray in a given array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k, prod = 1, max = 0;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      prod = 1;
      for (k = i; k <= j; k++)
      {
        prod = prod * arr[k];
      }
      if (max < prod)
      {
        max = prod;
      }
    }
  }
  cout << "The maximum product of a sub-array in the given array is: " << max << endl;
  return 0;
}

/*
Output:

Enter the size of the array: 8
Enter the 8 elements: -4 9 -7 0 -15 6 2 -3
The maximum product of a sub-array in the given array is: 540

*/
