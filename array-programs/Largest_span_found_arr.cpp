// Write a Cpp program to find the largest span found in the leftmost and rightmost appearances of same value (values are inclusive ) in a given array...

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, span, largestspan = 0;
  cout << "Enter the total number of elements in an array is: ";
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
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        span = j - i;
        if (largestspan < span)
        {
          largestspan = span;
        }
      }
    }
  }
  cout << "\nThe span between the same values in the array is: " << largestspan << endl;
  return 0;
}

/*
Output:

Enter the total number of elements in an array is: 9
Enter the 9 elements: 17 42 19 7 27 24 17 54 73
The Given array is: 17 42 19 7 27 24 17 54 73
The span between the same values in the array is: 6

*/
