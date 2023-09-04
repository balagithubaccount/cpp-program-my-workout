// Write a Cpp program to find the maximum element in an array which is first increasing and then decreasing.

#include <iostream>
using namespace std;

int main()
{
  int size, i, big, pos;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "\nThe Given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  big = arr[0];
  pos = 0;
  for (i = 0; i < size; i++)
  {
    if (big < arr[i])
    {
      big = arr[i];
      pos = i;
    }
  }
  if (pos == 0)
  {
    cout << "\nThe Maximum Element which is initially then not decreasing is: " << big << endl;
  }
  else if (pos == (size - 1))
  {
    cout << "\nThe maximum element which is last element is: " << big << endl;
  }
  else
  {
    cout << "\nThe maximum element which is increasing then decreasing is: " << big << endl;
  }
  return 0;
}

/*
Output:

Enter the size of the array: 8
Enter the 8 elements: 2 7 12 25 4 57 27 44

The Given array is: 2 7 12 25 4 57 27 44
The maximum element which is increasing then decreasing is: 57
*/
