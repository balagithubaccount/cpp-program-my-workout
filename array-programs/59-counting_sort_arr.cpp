// Write a Cpp program to return the counting sort on an array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, big, count, j, k;
  cout << "Enter the size of the array: ";
  cin >> size;
  int mainarr[size], resultarr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> mainarr[i];
  }
  cout << "\n\nThe given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << mainarr[i] << " ";
  }
  big = mainarr[0];
  for (i = 0; i < size; i++)
  {
    if (mainarr[i] > big)
    {
      big = mainarr[i];
    }
  }
  big = big + 1;
  int countarr[big];
  for (i = 0; i < big; i++)
  {
    countarr[i] = 0;
  }
  for (i = 0; i < size; i++)
  {
    count = 0;
    for (j = 0; j < size; j++)
    {
      if (mainarr[i] == mainarr[j])
      {
        count++;
      }
    }
    countarr[mainarr[i]] = count;
  }

  /* cout << "\nThe count array is: ");
   for(i=0; i<big; i++)
   { cout << "%d ",countarr[i]);} */

  for (i = 1; i < big; i++)
  {
    countarr[i] = countarr[i] + countarr[i - 1];
  }

  cout << "\nThe after the process count array is: ";
  for (i = 0; i < big; i++)
  {
    cout << countarr[i] << " ";
  }

  for (i = 0; i < size; i++)
  {
    countarr[mainarr[i]] = countarr[mainarr[i]] - 1;
    resultarr[countarr[mainarr[i]]] = mainarr[i];
  }
  cout << "\nAfter sorting the elements in the array are: ";
  for (i = 0; i < size; i++)
  {
    cout << resultarr[i] << " ";
  }
  cout << "\n";
  return 0;
}
/*
   Output:

   Enter the size of the array: 13
   Enter the 13 elements: 4 14 8 0 2 5 2 1 0 17 9 0 5


   The given array is: 4 14 8 0 2 5 2 1 0 17 9 0 5
   The after the process count array is: 3 4 6 6 7 9 9 9 10 11 11 11 11 11 12 12 12 13
   After sorting the elements in the array are: 0 0 0 1 2 2 4 5 5 8 9 14 17
*/