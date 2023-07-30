// Write a Cpp program To find the largest sum of contiguous subarray of an array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, sum, maxsum, j, k;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size];
  cout << "Enter the elements: \n";
  for (i = 0; i < size; i++)
  {
    cout << "Element-[" << i << "]: ";
    cin >> arr[i];
  }
  cout << "The given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  maxsum = 0;
  for (i = 0; i < size; i++)
  {
    // sum=0;
    for (j = i; j < size; j++)
    {
      sum = 0;
      for (k = i; k <= j; k++)
      {
        sum = sum + arr[k];
      }
      if (maxsum < sum)
        maxsum = sum;
    }
  }
  cout << "The largest sum of contiguous subarray is: " << maxsum << ".\n";
  return 0;
}

/*
Output:

Enter the array size: 4
Enter the elements:
Element-[0]: 8
Element-[1]: 3
Element-[2]: 8
Element-[3]: -5
The given array is: 8 3 8 -5
The largest sum of contiguous subarray is: 19.

*/
