// Write a Cpp program To find the number occuring odd number of times in an array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, oddtimes, oddnum, count, j;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size];
  cout << "Enter the elements: \n";
  for (i = 0; i < size; i++)
  {
    cout << "Element-[" << i << "]: ";
    scanf("%d", &arr[i]);
  }
  cout << "The given array is:\n";
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  for (i = 0; i < size; i++)
  {
    count = 0;
    for (j = 0; j < size; j++)
    {
      if (arr[i] == arr[j])
        count++;
    }
    if (count % 2 != 0)
    {
      cout << "\nThe element odd number of times is: " << count << ".\n";
      cout << "That number is: " << arr[i] << ".\n";
      break;
    }
  }
}

/*
Output:

Enter the array size: 9
Enter the elements:
Element-[0]: 8
Element-[1]: 3
Element-[2]: 8
Element-[3]: 5
Element-[4]: 4
Element-[5]: 3
Element-[6]: 4
Element-[7]: 3
Element-[8]: 5
The given array is:
8 3 8 5 4 3 4 3 5
The element odd number of times is: 3.
That number is: 3.

*/
