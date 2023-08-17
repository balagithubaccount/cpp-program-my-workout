// Write a Cpp program to move all zeroes to the end of a given array...

#include <iostream>
using namespace std;

int main()
{
  int size, i, temp, count = 0, j;
  cout << "Enter the size of the array: ";
  cin >> size;
  int n1, n2;
  n1 = n2 = size;
  int arr[size];
  cout << "Enter the " << size << " Elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
    if (arr[i] == 0)
      count++;
  }
  cout << "\ncount is = " << count << "\nThe given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  for (i = 0; i < size - count; i++)
  {
    if (arr[i] == 0)
    {
      for (j = n1 - 1; j >= 0; j--)
      {
        if (arr[j] != 0)
        {
          temp = arr[j];
          arr[j] = arr[i];
          arr[i] = temp;
          break;
        }
      }
    }
  }

  cout << "\nThe new array is: ";
  for (i = 0; i < n2; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  return 0;
}

/*
Output :

Enter the size of the array: 10
Enter the 10 Elements: 0 0 0 2 5 7 8 4 -5 7

count is = 3
The given array is: 0 0 0 2 5 7 8 4 -5 7
The new array is: 7 -5 4 2 5 7 8 0 0 0                                                                                             * /
*/