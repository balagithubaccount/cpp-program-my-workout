// Write a Cpp program to checks whether the elements in an unsorted array appears consecutively or not.

#include <iostream>
using namespace std;

int main()
{
  int size, n, i, j, k = 1, count, big, small, main = 0;
  cout << "Enter the total number of times to check array's: ";
  cin >> n;

start:
  cout << "\nEnter the size of the " << k << " array: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements for " << k << " array: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "\nThe Given " << k << " array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  small = big = arr[0];
  for (i = 0; i < size; i++)
  {
    if (small > arr[i])
    {
      small = arr[i];
    }
    if (big < arr[i])
    {
      big = arr[i];
    }
  }
  for (i = 0; i < size; i++)
  {
    count = 0;
    for (j = 0; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if (count > 1)
    {
      goto repeat;
    }
  }
  for (i = small; i <= big; i++)
  {
    main = 0;
    for (j = 0; j < size; j++)
    {
      if (i == arr[j])
      {
        main = 1;
      }
    }
    if (main != 1)
    {
    repeat:
      cout << "\nThe appearence of elements in the " << k << " array are not consecutive.\n";
      break;
    }
  }
  if (main == 1 && count == 1)
  {
    cout << "\nThe appearence of elements in the " << k << " array are consecutive.\n";
  }
  k++;
  if (k <= n)
  {
    goto start;
  }
  cout << "\nProgram is finished\n";
  return 0;
}

/*
Sample Output:

Enter the total number of times to check array's: 3

Enter the size of the 1 array: 6
Enter the 6 elements for 1 array: 7 4 3 5 6 2

The Given 1 array is: 7 4 3 5 6 2
The appearence of elements in the 1 array are consecutive.

Enter the size of the 2 array: 6
Enter the 6 elements for 2 array: 7 4 4 5 6 2

The Given 2 array is: 7 4 4 5 6 2
The appearence of elements in the 2 array are not consecutive.

Enter the size of the 3 array: 6
Enter the 6 elements for 3 array: 7 4 9 5 6 3

The Given 3 array is: 7 4 9 5 6 3
The appearence of elements in the 3 array are not consecutive.

Program is finished
*/