// Write a Cpp program to find the two repeating elements in a given array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, count, k = 0, l = 0, m, exit;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size], repeat[size], check[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  for (i = 0; i < size; i++)
  {
    exit = 0;
    for (m = 0; m < l; m++)
    {
      if (arr[i] == check[m])
        exit = 1;
    }
    count = 0;
    if (exit != 1)
    {
      for (j = 0; j < size; j++)
      {
        if (arr[i] == arr[j])
        {
          count++;
        }
      }
      if (count == 2)
      {
        repeat[k++] = arr[i];
      }
    }
    check[l++] = arr[i];
  }
  cout << "The repeating elements are: ";
  for (i = 0; i < k; i++)
  {
    cout << repeat[i] << " ";
  }
  cout << "\n";
  return 0;
}

/*
output:

Enter the array size: 7
Enter the 7 elements: 2 7 4 7 8 3 4
The repeating elements are: 7 4
*/
