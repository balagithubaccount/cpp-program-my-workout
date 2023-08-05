// Write a Cpp program to find the smallest missing element from a sorted array...

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, condition, temp, count = 0, k = 0;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size], misnum[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
  for (i = arr[0]; i <= arr[size - 1]; i++)
  {
    condition = 0;
    for (j = 0; j < size; j++)
    {
      if (i == arr[j])
      {
        condition = 1;
      }
    }
    if (condition != 1)
    {
      count++;
      misnum[k++] = i;
    }
  }
  cout << "\nAfter the sorting given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\nThe missing numbers are: ";
  for (i = 0; i < count; i++)
  {
    cout << misnum[i] << " ";
  }
  size = misnum[0];
  for (i = 0; i < count; i++)
  {
    if (size > misnum[i])
    {
      size = misnum[i];
    }
  }
  cout << "\nThe missing smallest element is: " << size << "\n";
  return 0;
}

/*
Output:

Enter the array size: 8
Enter the 8 elements: 9 6 11 5 3 1 0 2

After the sorting given array is: 0 1 2 3 5 6 9 11
The missing numbers are: 4 7 8 10
The missing smallest element is: 4

*/
