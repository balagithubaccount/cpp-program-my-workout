// Write a Cpp program to find the minimum length of subarray such that sorting this subarray makes the whole array sorted. (Given array is specific sized Unsorted array...)

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k = 0, temp;
  cout << "Enter the size of the array: ";
  cin >> size;
  int mainarr[size], sortarr[size], resultarr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> mainarr[i];
    sortarr[i] = mainarr[i];
  }
  cout << "\nThe Given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << sortarr[i] << " ";
  }
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (sortarr[i] > sortarr[j])
      {
        temp = sortarr[j];
        sortarr[j] = sortarr[i];
        sortarr[i] = temp;
      }
    }
  }
  for (i = 0; i < size; i++)
  {
    if (mainarr[i] != sortarr[i])
    {
      resultarr[k] = i;
      k++;
    }
  }
  if (k != 0)
  {
    cout << "\nThe minimum length of unsorted subarray which makes the given array sorted lies between the indeces " << resultarr[0] << " to " << resultarr[k - 1] << endl;
  }
  if (k == 0)
  {
    cout << "\nThe given array is already sorted...\n";
  }
  return 0;
}

/*
Output:

Enter the size of the array: 11
Enter the 11 elements: 10 12 15 17 28 32 42 18 56 59 67

The Given array is: 10 12 15 17 28 32 42 18 56 59 67
The minimum length of unsorted subarray which makes the given array sorted lies between the indeces 4 to 7`

*/
