// Write a Cpp program to find the maximum circular subarray sum of a given array....

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k, l, sum, sum1, extra = 0;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  sum = 0;
  for (i = 0; i < size; i++)
  {

    for (j = i; j < size; j++)
    {
      sum1 = 0;
      for (k = i; k <= j; k++)
      {

        sum1 = sum1 + arr[k];
        if (sum < sum1)
        {
          sum = sum1;
        }
      }
    }
    if (i >= 2)
    {
      for (l = 0; l <= extra; l++)
      {
        sum1 = sum1 + arr[l];
        if (sum < sum1)
        {
          sum = sum1;
        }
      }
      extra++;
    }
  }
  cout << "\nThe given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\nThe maximum circular sum is: " << sum << "\n";
  return 0;
}

/*
Output:

Enter the size of the array: 9
Enter the 9 elements: 10 8 -20 5 -3 -5 10 -13 11

The given array is: 10 8 -20 5 -3 -5 10 -13 11
The maximum circular sum is: 29
*/
