// Write a Cpp program to rotate an array by N positions.

#include <iostream>
using namespace std;

int main()
{
  int size, position, i, j = 0;
  cout << "Enter the array size: ";
  cin >> size;
  cout << "Enter the position for rotate array: ";
  cin >> position;
  int array[size], rotate[position];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> array[i];
  }
  for (i = 0; i < position; i++)
  {
    rotate[i] = array[j++];
  }
  cout << "\n\n---------------------------------\n\n";
  cout << "The given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  cout << "\nFrom " << position << "th position the values of the array are: ";
  for (i = position; i < size; i++)
  {
    cout << array[i] << " ";
  }
  cout << "\nBefore " << position << "th position the values of the array are : ";
  for (i = 0; i < position; i++)
  {
    cout << rotate[i] << " ";
  }
  for (i = 0, j = 0; i < size; i++)
  {
    if (i >= size - position)
    {
      array[i] = rotate[j++];
    }
    else
    {
      array[i] = array[i + position];
    }
  }
  cout << "\nAfter rotating from " << position << "th position the array is: ";
  for (i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  cout << "\n";
}

/*
Output:

Enter the array size: 11
Enter the position for rotate array: 4
Enter the 11 elements: 0 3 6 9 12 14 18 20 22 25 27


---------------------------------

The given array is: 0 3 6 9 12 14 18 20 22 25 27
From 4th position the values of the array are: 12 14 18 20 22 25 27
Before 4th position the values of the array are : 0 3 6 9
After rotating from 4th position the array is: 12 14 18 20 22 25 27 0 3 6 9

*/
