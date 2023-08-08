// Write a Cpp program to find a subarray with given sum from the given array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k, sum, given_sum;
  cout << "Enter the size of the array: ";
  cin >> size;
  int mainarr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> mainarr[i];
  }
  cout << "Enter the sum value: ";
  cin >> given_sum;
  cout << "\n\nThe given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << mainarr[i] << " ";
  }
  cout << "\n";
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      sum = 0;
      for (k = i; k <= j; k++)
      {
        sum = sum + mainarr[k];
      }
      if (sum == given_sum)
      {
        cout << "[" << i << "..." << j << "]--{";
        for (k = i; k <= j; k++)
        {
          cout << mainarr[k] << " ";
        }
        cout << "}\n";
      }
    }
  }
  return 0;
}

/*
Output:

Enter the size of the array: 8
Enter the 8 elements: 3 4 -7 1 3 3 1 -4
Enter the sum value: 7


The given array is: 3 4 -7 1 3 3 1 -4 
[0...1]--{3 4 }
[0...5]--{3 4 -7 1 3 3 }
[3...5]--{1 3 3 }
[4...6]--{3 3 1 }
*/