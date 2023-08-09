// Write a Cpp program to find majority element of an array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, count, majority, temp = 0;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  majority = size / 2;
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
    count = 0;
    for (j = 0; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if (count > majority)
    {
      cout << "\nThe majority of the elements: " << arr[i] << endl;
      temp = 1;
      break;
    }
  }
  if (temp == 0)
  {
    cout << "\nNo majority element found in the given array:\n";
  }
}

/*
Output:

Enter the size of the array: 9
Enter the 9 elements: 1 3 3 7 4 3 2 3 3
The given array is: 1 3 3 7 4 3 2 3 3
The majority of the elements: 3
*/
