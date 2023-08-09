// Write a Cpp program to find if a given integer x appears more than n/2 times in a sorted array of n integers.

#include <iostream>
using namespace std;

int main()
{
  int size, i, giv_num, n, count = 0;
  cout << "Enterr the size of the array: ";
  cin >> size;
  int arr[size];
  n = size / 2;
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter the number for to find appears more than n/2 times: ";
  cin >> giv_num;
  for (i = 0; i < size; i++)
  {
    if (giv_num == arr[i])
    {
      count++;
    }
  }
  if (count > n)
  {
    cout << giv_num << " appears more than " << n << " times in the given array.\n";
  }
  else
  {
    cout << giv_num << " does not appears more than " << n << " times in the given array.\n";
  }
  return 0;
}

/*
Output:

Enterr the size of the array: 9
Enter the 9 elements: 1 3 3 5 4 3 2 3 3
Enter the number for to find appears more than n/2 times: 3
3 appears more than 4 times in the given array.
*/
