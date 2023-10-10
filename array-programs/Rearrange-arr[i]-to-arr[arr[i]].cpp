// Write a Cpp program to Rearrange the given array such that arr[i] becomes arr[arr[i]].

#include <iostream>
using namespace std;

int main()
{
  int size, i;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size], sol[size];
  cout << "Enter the elements only '0' to '" << size - 1 << "':\n";
  for (i = 0; i < size; i++)
  {
    cout << "Element " << i << "-";
    cin >> arr[i];
  }
  cout << "The given array is: ";
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";

  for (i = 0; i < size; i++)
    sol[i] = arr[arr[i]];
  cout << "\nThe modified array is: ";
  for (i = 0; i < size; i++)
    cout << sol[i] << " ";
  cout << "\n";
  return 0;
}
/*
 Sample Output:

Enter the array size: 5
Enter the elements only '0' to '4':
Element 0-2
Element 1-1
Element 2-4
Element 3-3
Element 4-0
The given array is: 2 1 4 3 0
The modified array is: 4 1 0 3 2

*/
