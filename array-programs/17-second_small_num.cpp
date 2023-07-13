// Write a program in Cpp to find the second smallest element in an array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, small_num, temp;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size];
  cout << "Enter the elements: \n";
  for (i = 0; i < size; i++)
  {
    cout << "Element " << i << ": ";
    cin >> arr[i];
  }
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  small_num = arr[0];
  for (i = 1; i < size; i++)
  {
    if (arr[0] < arr[i])
    {
      cout << "Second smallest element is: " << arr[i] << "\n";
      break;
    }
  }
  return 0;
}
/*
Sample Output:

Enter the array size: 11
Enter the elements:
Element 0: 0
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5
Element 5: 6
Element 6: 7
Element 7: 8
Element 8: -2
Element 9: -1
Element 10: 5
Second smallest element is: -1
*/