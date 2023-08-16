// Write a Cpp program to find minumum element in a sorted and rotated array...

#include <iostream>
using namespace std;

int main()
{
  int size, i, min_num;
  cout << "Enter the array size: ";
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
  min_num = arr[0];
  for (i = 0; i < size; i++)
  {
    if (min_num > arr[i] && arr[i] < arr[i + 1])
    {
      cout << "\nThe minimum element for sorted and rotated array is: " << arr[i] << endl;
      break;
    }
    if (i == (size - 1))
    {
      cout << "\nThe Minimum element in a sorted array is: " << arr[0] << endl;
      break;
    }
  }
  return 0;
}

/*
Output:

Enter the array size: 7
Enter the 7 elements: 3 4 5 6 7 9 2
The Given array is: 3 4 5 6 7 9 2
The minimum element for sorted and rotated array is: 2

*/
