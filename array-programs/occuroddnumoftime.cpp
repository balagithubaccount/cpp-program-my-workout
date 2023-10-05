// Write a Cpp program to find the numbers that occur odd number of times in an array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k = 0, count, temp;

  cout << "Enter the total number of elements in an array: ";
  cin >> size;

  int occurodd[size], resultarr[size];

  cout << "Enter the " << size << " elements: ";

  for (i = 0; i < size; i++)
  {
    cin >> occurodd[i];
  }
  cout << "The Given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << occurodd[i] << " ";
  }
  for (i = 0; i < size; i++)
  {
    count = 0;
    for (j = 0; j <= k && i > 0; j++)
    {
      if (occurodd[i] == resultarr[j])
      {

        goto start;
      }
    }
    count = 0;
    for (j = 0; j < size; j++)
    {
      if (occurodd[i] == occurodd[j])
      {
        count++;
      }
    }
  start:
    if (count % 2 == 1)
    {
      resultarr[k] = occurodd[i];
      k++;
    }
  }
  cout << "\nThe " << k << " Numbers occuring odd number of times are: ";
  for (i = 0; i < k; i++)
  {
    cout << resultarr[i] << " ";
  }
  cout << "\n";
  return 0;
}

/*
Sample Output:

Enter the total number of elements in an array: 10
Enter the 10 elements: 6 7 3 6 8 7 6 8 3 3
The Given array is: 6 7 3 6 8 7 6 8 3 3
The 2 Numbers occuring odd number of times are: 6 3

*/
