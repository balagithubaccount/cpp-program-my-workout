// Write a Cpp program to find largest subarray with equal number of 0's and 1's..

#include <iostream>
using namespace std;

int main()
{
  int size, i, count0s, count1s, j, k, indexi, indexj, larg = 0;
  int count = 0, temp = 0;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  cout << "Input elements only '0' and '1':\n";
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "The given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  for (i = 0; i < size; i++)
  {
    if (arr[i] == 0)
    {
      count0s++;
    }
    else
    {
      count1s++;
    }
  }
  if (count0s == 0 || count1s == 0)
  {
    goto end;
  }
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      count1s = count0s = 0;
      for (k = i; k <= j; k++)
      {
        if (arr[k] == 0)
        {
          count0s++;
        }
        else
        {
          count1s++;
        }
      }
      if (count0s == count1s)
      {
        count = count0s + count1s;
      }
      if (larg < count)
      {
        larg = count;
        indexi = i;
        indexj = j;
        temp = 1;
      }
    }
  }

  if (temp == 1)
  {
    cout << "\nSubarray found from the index " << indexi << " to " << indexj << endl;
  }
  else
  {
  end:
    cout << "\nNo such subarray found from the given array...\n";
  }
  return 0;
}

/*
Output:

Enter the size of the array: 10
Input elements only '0' and '1':
Enter the 10 elements: 0 1 0 0 1 1 0 1 1 1
The given array is: 0 1 0 0 1 1 0 1 1 1
Subarray found from the index 0 to 7

*/
