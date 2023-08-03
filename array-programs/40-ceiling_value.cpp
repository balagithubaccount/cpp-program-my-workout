// Write a Cpp program to find the ceiling in a sorted array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, ceil, value, j = 0;
  cout << "Enter the size of the array: ";
  cin >> size; 
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter the value for to find ceiling: ";
  cin >> value;
  for (i = 0; i <= size; i++)
  {
    if (arr[i] >= value)
    {
      ceil = arr[i];
      break;
    }
  }
  cout << "The given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\nThe ceiling of " << value << " is: " << ceil << "\n";
  return 0;
}

/*
Output:

Enter the size of the array: 8
Enter the 8 elements: 1 3 4 7 8 9 9 10
Enter the value for to find ceiling: 5
The given array is: 1 3 4 7 8 9 9 10
The ceiling of 5 is: 7

*/
