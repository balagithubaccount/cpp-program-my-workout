// Write a Cpp program to find the number of clumps (a series 2 or more adjacent elements of the same value) in a given array...

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, temp, count = 0;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " Elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "The Given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  for (i = 0; i < size; i++)
  {
    temp = 0;
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] != arr[j])
      {
        break;
      }
      else
      {
        i++;
        temp = 1;
      }
    }
    if (temp == 1)
    {
      count++;
    }
  }
  cout << "\nThe Number of Clumps in the array is: " << count << endl;
}

/*
Output:

Enter the array size: 9
Enter the 9 Elements: 17 42 42 7 24 24 17 54 17
The Given array is: 17 42 42 7 24 24 17 54 17
The Number of Clumps in the array is: 2

*/
