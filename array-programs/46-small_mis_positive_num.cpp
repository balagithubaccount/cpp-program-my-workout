// Write a Cpp program to find the smallest positive number missing from an unsorted array...

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, in;
  cout << "Enter the total number of inputs in array: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  for (i = 1; i <= size; i++)
  {
    in = 0;
    for (j = 0; j < size; j++)
    {
      if (arr[j] == i)
      {
        in = 1;
      }
    }
    if (in == 0)
    {
      cout << "The smallest missing number is: " << i << "\n";
      break;
    }
  }
  return 0;
}

/*
Output:

Enter the total number of inputs in array: 9
Enter the 9 elements: 3 1 4 10 -5 15 2 -10 -20
The smallest missing number is: 5

*/
