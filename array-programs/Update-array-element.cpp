// Write a Cpp program to update every array element with multiplication of previous and next number in array...

#include <iostream>
using namespace std;

int main()
{
  int size, i;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size], copyarr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
    copyarr[i] = arr[i];
  }
  cout << "The Given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  for (i = 0; i < size; i++)
  {
    if (i == 0)
    {
      copyarr[i] = arr[i] * arr[i + 1];
    }
    else if (i == (size - 1))
    {
      copyarr[i] = arr[i] * arr[i - 1];
    }
    else
    {
      copyarr[i] = arr[i - 1] * arr[i + 1];
    }
  }
  cout << "\nThe Updated array is: ";
  for (i = 0; i < size; i++)
  {
    cout << copyarr[i] << " ";
  }
  cout << "\n";
  return 0;
}

/*
Output:

Enter the array size: 6
Enter the 6 elements: 1 2 3 4 5 6
The Given array is: 1 2 3 4 5 6
The Updated array is: 2 3 8 15 24 30
*/
