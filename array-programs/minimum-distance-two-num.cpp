// Write a Cpp program to find the minimum distance between two numbers in a given array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k, l, n, diff, num1, num2, temp, mindistance;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  mindistance = size;
  cout << "Enter the Elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter the 1st number for find distance: ";
  cin >> num1;
  cout << "Enter the 2nd number for find distance: ";
  cin >> num2;
  n = 0;
  cout << "\nThe Given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
Start:
  for (i = n; i < size; i++)
  {
    if (num1 == arr[i])
    {
      j = i;
      temp = 1;
      break;
    }
    if (num2 == arr[i])
    {
      j = i;
      temp = 2;
      break;
    }
  }
  for (k = j + 1; k < size; k++)
  {
    if (temp == 1)
    {
      if (num2 == arr[k])
      {
        l = k;
        break;
      }
    }
    if (temp == 2)
    {
      if (num1 == arr[k])
      {
        l = k;
        break;
      }
    }
  }
  if (j != l)
  {
    diff = l - j;
  }
  if (mindistance > diff)
  {
    mindistance = diff;
  }
  n++;
  if (i < size)
  {
    goto Start;
  }
  cout << "\nThe minumum distance between " << num1 << " and " << num2 << " is: " << mindistance << ".\n";
  return 0;
}

/*
Sample Output:

Enter the size of the array: 10
Enter the Elements: 7 9 5 11 7 4 12 6 2 11
Enter the 1st number for find distance: 7
Enter the 2nd number for find distance: 11

The Given array is: 7 9 5 11 7 4 12 6 2 11
The minumum distance between 7 and 11 is: 1.

*/
