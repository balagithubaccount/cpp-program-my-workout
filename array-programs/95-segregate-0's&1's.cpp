// Write a Cpp program to segregate 0's and 1's in array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, count0 = 0, count1 = 0, zero = 0, one = 1;
  cout << "Enter array size: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements, for only 0's and 1's:\n";
  for (i = 0; i < size; i++)
  {
    cout << "Element -" << i << "-";
    cin >> arr[i];
    if (arr[i] == 0)
      count0++;
    else
      count1++;
  }
  cout << "The given array is: ";
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << "\nAfter the segregated array is: ";
  for (i = 0; i < count0; i++)
    cout << zero << " ";
  for (i = 0; i < count1; i++)
    cout << one << " ";
  cout << "\n";
  return 0;
}
/*
   output:

Enter array size: 9
Enter the 9 elements, for only 0's and 1's:
Element -0-1
Element -1-0
Element -2-1
Element -3-0
Element -4-0
Element -5-1
Element -6-0
Element -7-1
Element -8-1
The given array is: 1 0 1 0 0 1 0 1 1
After the segregated array is: 0 0 0 0 1 1 1 1 1
*/