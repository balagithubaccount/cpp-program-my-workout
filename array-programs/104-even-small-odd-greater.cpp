// Write a Cpp program to rearrange an array such that even indx elements are smaller and odd index elements are greater than thir next...

#include <iostream>
using namespace std;

int main()
{
  int size, i, temp;
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
  for (i = 0; i < size; i++)
  {
    if (i == (size - 1))
    {
      arr[i] = arr[i];
    }
    else if (i % 2 == 0)
    {
      if (arr[i] > arr[i + 1])
      {
        temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
      }
    }
    else
    {
      if (arr[i] < arr[i + 1])
      {
        temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
      }
    }
  }
  cout << "\nThe Rearranged array is: \n";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  return 0;
}
/*
Output :

Enter the array size: 6
Enter the 6 elements: 6 4 2 1 8 3
The Given array is: 6 4 2 1 8 3
The Rearranged array is:
4 6 1 8 2 3

*/
