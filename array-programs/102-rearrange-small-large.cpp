// Write a Cpp program to rearrange an array in such an order that– smallest, largest, 2nd smallest, 2nd largest and on.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, temp, pos;
  cout << "Enter the array size: ";
  cin >> size;

  int arr[size], result[size];

  cout << "Enter the elements: \n";
  for (i = 0; i < size; i++)
  {
    cout << i << "-element: ";
    cin >> arr[i];
  }

  cout << "The given array is: \n";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  temp = 0;
  for (i = 0, j = size - 1; i < size / 2 || i == j; i++, j--)
  {
    result[temp++] = arr[i];
    result[temp++] = arr[j];
  }

  cout << "\nThe new array is:\n";
  for (i = 0; i < size; i++)
  {
    cout << result[i] << " ";
  }
  cout << "\n";
  return 0;
}

/*
Output:

Enter the array size: 9
Enter the elements:
0-element: 5
1-element: 8
2-element: 1
3-element: 4
4-element: 2
5-element: 9
6-element: 3
7-element: 7
8-element: 6
The given array is:
5 8 1 4 2 9 3 7 6
The new array is:
1 9 2 8 3 7 4 6 5
*/
