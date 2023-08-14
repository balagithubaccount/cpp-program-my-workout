// Write a Cpp program to sort an array of 0's, 1's, 2's....

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, temp;
  cout << "Enter the total number of elements: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
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
  cout << "\nAfter the sorting the elements in the array are: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  return 0;
}
/*
Output:

Enter the total number of elements: 12
Enter the 12 elements: 0 1 2 2 1 0 0 2 0 1 1 0
The Given array is: 0 1 2 2 1 0 0 2 0 1 1 0
After the sorting the elements in the array are: 0 0 0 0 0 1 1 1 1 2 2 2

   */
