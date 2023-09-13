// Write a Cpp program to rearrange an array such that arr[i]=i; (Array size N) So elements range 0 to N-1 not present the given range element that position has -1.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k, temp;
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
    temp = 0;
    for (j = i; j < size; j++)
    {
      if (arr[j] == i)
      {
        temp = 1;
        goto swap;
      }
    }
    if (temp == 0)
    {
      for (j = i; j < size; j++)
      {
        if (arr[j] < 0)
        {
          goto swaped;
        }
      }
      for (j = i; j < size; j++)
      {
        if (arr[j] < j)
        {
          goto swaped;
        }
      }
    }
  swap:
    if (temp == 1)
    {
    swaped:
      temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp;
    }
  }
  cout << "\nThe New array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  return 0;
}

/*
Output:

Enter the array size: 10
Enter the 10 elements: 2 5 -1 6 -1 8 7 -1 9 1
The Given array is: 2 5 -1 6 -1 8 7 -1 9 1
The New array is: -1 1 2 -1 -1 5 6 7 8 9
*/
