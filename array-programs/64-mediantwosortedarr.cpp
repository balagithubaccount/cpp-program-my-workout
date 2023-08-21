// Write a C program to find the median of two sorted arrays of same size...

#include <iostream>
using namespace std;

int main()
{
  int size1, size2, i, j, n, temp;
  float median;
  cout << "Enter the first array size: ";
  cin >> size1;
  cout << "Enter the second array size: ";
  cin >> size2;
  n = size1 + size2;
  int arr1[size1], arr2[size2], merge[n];
  cout << "Enter the " << size1 << " elements for array 1: ";
  for (i = 0; i < size1; i++)
  {
    cin >> arr1[i];
    merge[i] = arr1[i];
  }
  cout << "Enter the " << size2 << " elements for array 2: ";
  for (i = 0; i < size2; i++)
  {
    cin >> arr2[i];
    merge[size1++] = arr2[i];
  }
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (merge[i] > merge[j])
      {
        temp = merge[j];
        merge[j] = merge[i];
        merge[i] = temp;
      }
    }
  }
  if (n % 2 == 1)
  {
    median = merge[n / 2];
  }
  else
  {
    n = n / 2;
    median = (float)(merge[n - 1] + merge[n]) / 2;
  }
  cout << "The Median of the two sorted arrays is: " << median << endl;
  return 0;
}

/*
   Output:

   Enter the first array size: 5
   Enter the second array size: 5
   Enter the 5 elements for array 1: 1 5 13 24 35
   Enter the 5 elements for array 2: 3 8 15 17 32
   The Median of the two sorted arrays is: 14.0

*/
