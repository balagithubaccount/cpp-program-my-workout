// Write a Cpp program to print next greater elments in a given unsorted array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k, temp;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "Next Bigger Elements are: \n";
  for (i = 0; i < size; i++)
  {
    j = arr[i];
    temp = 0;
    for (k = i + 1; k < size; k++)
    {
      if (j < arr[k])
      {
        cout << "Next Bigger element of " << j << " in the array is: " << arr[k] << "\n";
        temp = 1;
        break;
      }
    }
    if (temp != 1)
    {
      cout << "Next Bigger element of " << j << " in the array is: " << -1 << "\n";
    }
  }
  return 0;
}

/*
Output:

Enter the array size: 6
Enter the 6 elements: 5 3 10 9 6 13
Next Bigger Elements are:
Next Bigger element of 5 in the array is: 10
Next Bigger element of 3 in the array is: 10
Next Bigger element of 10 in the array is: 13
Next Bigger element of 9 in the array is: 13
Next Bigger element of 6 in the array is: 13
Next Bigger element of 13 in the array is: -1

*/
