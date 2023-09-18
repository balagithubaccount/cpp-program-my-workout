// Write a Cpp program to print all possible combinations of 4 elements in a given array...

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k, l, terms;
  cout << "Enter the size of the array: ";
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
  cout << "\nTerms : 4\n";
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      for (k = j + 1; k < size; k++)
      {
        for (l = k + 1; l < size; l++)
        {
          cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << arr[l] << endl;
        }
      }
    }
  }
  cout << "\n";
  return 0;
}

/*
Sample Output:

Enter the size of the array: 5
Enter the 5 elements: 1 5 4 6 8

The Given array is: 1 5 4 6 8
Terms : 4
1 5 4 6
1 5 4 8
1 5 6 8
1 4 6 8
5 4 6 8

*/