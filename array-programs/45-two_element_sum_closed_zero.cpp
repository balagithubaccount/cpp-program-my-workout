// Write a Cpp program to find two elements whose sum is closest to zero.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, posi, posj, sum, sum1 = 0, near = 0, sol;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  sum = arr[0] + arr[1];
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (i == j)
        continue;

      if (i != j)
      {
        sum1 = arr[i] + arr[j];
      }
      if (sum1 < 0)
      {
        sum1 = sum1 * (-1);
        near = -1;
      }
      else
      {
        near = 1;
      }
      if (sum > sum1)
      {
        cout << "sum is: " << sum << " sum1 is: " << sum1;
        sum = sum1;
        posi = arr[i];
        posj = arr[j];
        cout << "posi: " << posi << " posj: " << posj;
        if (near == -1)
        {
          sol = sum * (-1);
        }
        else
        {
          sol = sum;
        }
      }
    }
  }
  cout << "\nThe given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\nThe Pair of elements whose sum is minimum are: [" << posi << ", " << posj << "]\n";
  cout << "The nearest zero sum value is: " << sol << "\n";
  return 0;
}

/*
Sample Output:

Enter the array size: 10
Enter the 10 elements: 38 44 63 -51 -35 19 84 -69 4 -46

The given array is: 38 44 63 -51 -35 19 84 -69 4 -46
The Pair of elements whose sum is minimum are: [44, -46]
The nearest zero sum value is: -2

*/
