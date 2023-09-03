// Write a Cpp program to find the equilibrium index of an array...

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, sumright, sumleft, equ_index, temp;
  cout << "Ente the size of the array: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "\nThe Given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  temp = 0;
  for (i = 1; i < size - 1; i++)
  {
    sumright = sumleft = 0;
    for (j = i - 1; j >= 0; j--)
    {
      sumright = sumright + arr[j];
    }
    for (j = i + 1; j < size; j++)
    {
      sumleft = sumleft + arr[j];
    }
    if (sumright == sumleft)
    {
      equ_index = i;
      temp = 1;
      break;
    }
  }
  if (temp == 1)
  {
    cout << "\nThe Equilibrium index found at: " << equ_index << endl;
  }
  else
  {
    cout << "\nThus no such a Equilibrium index found at the array\n";
  }
  return 0;
}

/*
Sample Output:

Ente the size of the array: 8
Enter the 8 elements: 0 -4 7 -4 -2 6 -3 0

The Given array is: 0 -4 7 -4 -2 6 -3 0
The Equilibrium index found at: 5
*/
