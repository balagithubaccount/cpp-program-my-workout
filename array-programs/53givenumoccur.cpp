// Write a Cpp program to find the number of times(frequency) occurs a given number in an array...

#include <iostream>
using namespace std;

int main()
{
  int size, i, giv_num, count = 0;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
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
  cout << "\nEnter the number for find number of times occurs that number: ";
  cin >> giv_num;
  for (i = 0; i < size; i++)
  {
    if (giv_num == arr[i])
    {
      count++;
    }
  }
  if (count != 0)
  {
    cout << "The number " << giv_num << " is occurs " << count << " times in the given array.\n";
  }
  else
  {
    cout << "The given number " << giv_num << " is does not occurs in the given array.\n";
  }
  return 0;
}
/*
Output:

Enter the size of the array: 12
Enter the 12 elements: 2 3 4 4 4 4 5 5 5 6 7 7
The given array is: 2 3 4 4 4 4 5 5 5 6 7 7
Enter the number for find number of times occurs that number: 4
The number 4 is occurs 4 times in the given array.
*/
