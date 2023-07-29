// Write a Cpp program To find a pair with given sum in the array.

#include <iostream>
using namespace std;

int main()
{
  int arr[] = {6, 8, 4, -5, 7, 9};
  int i, j, sum, sol;
  cout << "The given array: ";

  for (i = 0; i < 6; i++)
    cout << arr[i] << " ";

  cout << "\nEnter the sum value: ";
  cin >> sum;

  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      if (sol == 1)
        break;
      if (i != j && (arr[i] + arr[j] == sum))
      {
        cout << "Pair of elements can make the given sum by the value of index " << i << " and " << j << ".\n";
        sol = 1;
        break;
      }
    }
  }

  return 0;
}

/*
Output 1:

The given array: 6 8 4 -5 7 9
Enter the sum value: 1
Pair of elements can make the given sum by the value of index 0 and 3.

*/
