// Write a program in Cpp to delete an element at desired position from an array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, pos;
  cout << "Input the array size: ";
  cin >> size;
  int iniarr[size], delarr[size - 1];
  cout << "Enter the " << size << " values: \n";
  for (i = 0; i < size; i++)
  {
    cout << "Element " << i << ": ";
    cin >> iniarr[i];
  }
  cout << "Input the position,where to delete: ";
  cin >> pos;
  pos -= 1;
  cout << "before delete the array list is:\n";
  for (i = 0; i < size; i++)
    cout << iniarr[i] << " ";
  cout << "\nAfter delete the new array is:\n";
  for (i = 0; i < size; i++)
  {
    if (i == pos)
    {
      delarr[i] = iniarr[i + 1];
      j = 1;
    }
    else if (j == 1)
      delarr[i] = iniarr[i + 1];
    else
      delarr[i] = iniarr[i];
  }
  for (i = 0; i < size - 1; i++)
    cout << delarr[i] << " ";
  cout << "\n";

  return 0;
}
/*
output:
Input the array size: 6
Enter the 6 values:
Element 0: 1
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5
Element 5: 9
Input the position,where to delete: 6
before delete the array list is:
1 2 3 4 5 9
After delete the new array is:
1 2 3 4 5
*/
