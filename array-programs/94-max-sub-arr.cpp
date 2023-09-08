// Write a Cpp program to find the maximum for each and every condigious subarray of size K from a given array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, len, big;
  cout << "Enter the array size: ";
  cin >> size;
  cout << "Enter the length of each subarray: ";
  cin >> len;
  int arr[size], sol[size];
  cout << "Enter the elements: ";
  for (i = 0; i < size; i++)
    cin >> arr[i];
  for (i = 0; i <= size - len; i++)
  {
    big = arr[i];
    for (j = i; j < len + i; j++)
    {
      cout << arr[j] << " ";

      if (big < arr[j])
        big = arr[j];
    }
    sol[i] = big;
    cout << "---->" << sol[i] << endl;
  }
  return 0;
}

/*
Output :

Enter the array size: 11
Enter the length of each subarray: 4
Enter the elements: 1 3 6 21 4 9 12 3 16 10 22
1 3 6 21 ---->21
3 6 21 4 ---->21
6 21 4 9 ---->21
21 4 9 12 ---->21
4 9 12 3 ---->12
9 12 3 16 ---->16
12 3 16 10 ---->16
3 16 10 22 ---->22
*/