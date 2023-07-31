// Write a Cpp program To find missing number from a given array. there are no duplicates in list.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, con, misnum;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size];
  cout << "Enter the elements: \n";
  for (i = 0; i < size; i++)
  {
    cout << "Element-arr[" << i << "]:  ";
    cin >> arr[i];
  }
  cout << "The given array is: ";
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  con = 0;
  for (i = size; i >= 1; i--)
  {
    con = 0;
    for (j = 0; j < size; j++)
    {
      if (i == arr[j])
        con = 1;
    }
    if (con == 0)
    {
      misnum = i;
      break;
    }
  }
  if (con == 0)
    cout << "\nThe missing number is: " << misnum << ".\n";
  if (con == 1)
    cout << "\nThe missing number is: " << size + 1 << ".\n";
}

/*
Output:

Enter the array size: 8
Enter the elements:
Element-arr[0]:  1
Element-arr[1]:  3
Element-arr[2]:  4
Element-arr[3]:  2
Element-arr[4]:  5
Element-arr[5]:  6
Element-arr[6]:  9
Element-arr[7]:  8
The given array is: 1 3 4 2 5 6 9 8
The missing number is: 7.

*/
