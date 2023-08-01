// Write a Cpp program to merge one sorted array into another sorted array.

#include <iostream>
using namespace std;

int main()
{
  int size1, size2, totalmerge, temp, i, j = 0;
  cout << "Enter the size of the first array: ";
  cin >> size1;
  cout << "Enter the size of the second array: ";
  cin >> size2;
  totalmerge = size1 + size2;
  int array1[size1], array2[size2], merge[totalmerge];
  cout << "Enter the " << size1 << " elements for array1: ";
  for (i = 0; i < size1; i++)
  {
    cin >> array1[i];
  }
  cout << "Enter the " << size2 << " elements for array2: ";
  ;
  for (i = 0; i < size2; i++)
  {
    cin >> array2[i];
  }
  for (i = 0; i < totalmerge; i++)
  {
    if (i < size1)
    {
      merge[i] = array1[i];
    }
    else
    {
      merge[i] = array2[j++];
    }
  }
  for (i = 0; i < totalmerge; i++)
  {
    for (j = i + 1; j < totalmerge; j++)
    {
      if (merge[i] > merge[j])
      {
        temp = merge[j];
        merge[j] = merge[i];
        merge[i] = temp;
      }
    }
  }
  cout << "\n----------------------------------\n";
  cout << "First Array is: ";
  for (i = 0; i < size1; i++)
  {
    cout << array1[i] << " ";
  }

  cout << "\nSecond Array is: ";
  for (i = 0; i < size2; i++)
  {
    cout << array2[i] << " ";
  }

  cout << "\nMerged array is: ";
  for (i = 0; i < totalmerge; i++)
  {
    cout << merge[i] << " ";
  }

  cout << "\n";
  return 0;
}

/*
Output:

Enter the size of the first array: 7
Enter the size of the second array: 6
Enter the 7 elements for array1: 10 12 14 16 18 20 22
Enter the 6 elements for array2: 11 13 15 17 19 21

----------------------------------
First Array is: 10 12 14 16 18 20 22
Second Array is: 11 13 15 17 19 21
Merged array is: 10 11 12 13 14 15 16 17 18 19 20 21 22

*/
