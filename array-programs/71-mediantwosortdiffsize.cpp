// Write a Cpp program to find median of two sorted arrays of different size...

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
  cout << "The median of two different size arrays are: " << median << endl;
  return 0;
}

/*
Output:

Enter the first array size: 3
Enter the second array size: 5
Enter the 3 elements for array 1: 90 240 300
Enter the 5 elements for array 2: 10 13 14 20 25
The median of two different size arrays are: 22.5
*/
