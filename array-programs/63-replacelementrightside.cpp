// Write a Cpp program to replace every element with the greatest element on its right side.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k, l, temp, big;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size], sol[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "The given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  for (i = 0; i < size; i++)
  {
    if (i == size - 1)
    {
      sol[i] = 0;
      break;
    }
    big = arr[i], temp = 0;
    for (j = i + 1; j < size; j++)
    {
      if (big < arr[j])
      {
        big = arr[j];
        temp = 1;
      }
    }
    if (temp == 1)
    {
      sol[i] = big;
    }

    if (temp == 0)
    {
      for (j = arr[i], k = j - 1; k >= 0; k--)
      {
        for (l = i; l < size; l++)
        {
          if (k == arr[l])
          {
            sol[i] = arr[l];
            temp = 1;
          }
        }
        if (temp == 1)
        {
          break;
        }
      }
    }
  }
  cout << "\nAfter replace the modified array is: ";
  for (i = 0; i < size; i++)
  {
    cout << sol[i] << " ";
  }
  cout << "\n";
}
/*
Output:

Enter the size of the array: 10
Enter the 10 elements: 7 5 8 9 6 8 5 7 4 6
The given array is: 7 5 8 9 6 8 5 7 4 6
After replace the modified array is: 9 9 9 8 8 7 7 6 6 0

*/