// Write a Cpp program to find the maximum repeating number in a given array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k, temp, count, exit, max_repeat;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  temp = 0;
  for (i = 0; i < size; i++)
  {
    if (i > 0)
    {
      exit = 1;
      for (k = 0; k < i; k++)
      {
        if (arr[i] == arr[k])
        {
          exit = 0;
        }
      }
    }
    if (exit != 0)
    {
      count = 0;
      for (j = 0; j < size; j++)
      {
        if (arr[i] == arr[j])
        {
          count++;
        }
      }
      if (temp < count)
      {
        temp = count;
        max_repeat = arr[i];
      }
    }
  }
  cout << "The maximum repeating number is: " << max_repeat << endl;
  cout << "It's Frequency : " << temp << endl;
  return 0;
}

/*
Sample Output:

Enter the size of the array: 8
Enter the 8 elements: 4 5 8 7 4 7 6 7
The maximum repeating number is: 7
It's Frequency : 3
*/
