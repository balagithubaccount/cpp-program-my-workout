// Write a Cpp program To find the majority element of an array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, majority, count;
  cout << "Enter the array size: ";
  cin >> size;
  int array[size], maj[size];
  cout << "Enter the elements: \n";
  for (i = 0; i < size; i++)
  {
    cout << "Element array[" << i << "]: ";
    cin >> array[i];
  }
  for (i = 0; i < size; i++)
  {
    count = 0;
    for (j = 0; j < size; j++)
    {
      if (array[i] == array[j])
        count++;
    }
    maj[i] = count;
  }
  majority = 0;
  for (i = 0; i < size; i++)
  {
    if (majority < maj[i])
    {
      majority = maj[i];
      j = i;
    }
  }
  if (majority > size / 2)
    cout << "Majority Element: " << array[j] << endl;
  else
    cout << "There are no Majority Elements in the given array.\n";
  return 0;
}

/*
Output:

Enter the array size: 8
Enter the elements:
Element array[0]: 4
Element array[1]: 8
Element array[2]: 4
Element array[3]: 6
Element array[4]: 7
Element array[5]: 4
Element array[6]: 4
Element array[7]: 8
There are no Majority Elements in the given array.

*/
