// Write a C program to Count duplicate elements in array

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k, count, n = 0, m = 0, exit;

  cout << "Enter the total number of elements in array: ";
  cin >> size;

  int main[size], dup[size], check[size];

  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> main[i];
  }
  cout << "The given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << main[i] << " ";
  }
  for (i = 0; i < size; i++)
  {
    count = 0, exit = 0;

    for (k = 0; k < m; k++)
    {
      if (main[i] == check[k])
      {
        exit = 1;
      }
    }
    if (exit != 1)
    {
      for (j = 0; j < size; j++)
      {
        if (main[i] == main[j])
        {
          count++;
        }
      }
      if (count > 1)
      {
        dup[n++] = main[i];
      }
      check[m++] = main[i];
    }
  }
  cout << "\nDuplicate elements are: ";
  for (i = 0; i < n; i++)
  {
    cout << dup[i] << " ";
  }
  cout << "\nTotal duplicate elements : " << n << endl;

  return 0;
}
/*

Sample Output:

Enter the total number of elements in array: 12
Enter the 12 elements: 1 2 3 4 1 2 5 6 7 8 5 9
The given array is: 1 2 3 4 1 2 5 6 7 8 5 9
Duplicate elements are: 1 2 5
Total duplicate elements : 3

*/