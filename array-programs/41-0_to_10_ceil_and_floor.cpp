// Write a Cpp program to find the Floor and Ceil of the number 0 to 10 from a sorted array.

#include <iostream>
using namespace std;

int main()
{
  int size, start_num, end_num, i, j, temp1, temp2, ceil, floor;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter the start number and end number: ";
  cin >> start_num >> end_num;
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] > arr[j])
      {
        temp1 = arr[j];
        arr[j] = arr[i];
        arr[i] = temp1;
      }
    }
  }
  cout << "The given array for sorted: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  for (i = start_num; i <= end_num; i++)
  {
    temp1 = 0, temp2 = 0;
    for (j = 0; j < size; j++)
    {
      if (arr[j] >= i && temp1 != 1)
      {
        ceil = arr[j];
        temp1 = 1;
      }
      if (arr[(size - 1) - j] <= i && temp2 != 1)
      {
        floor = arr[(size - 1) - j];
        temp2 = 1;
      }
    }
    if (temp1 == 1)
    {
      cout << "Number " << i << " ceiling is: " << ceil << "\n";
    }
    else
    {
      cout << "Number " << i << " ceiling is: " << -1 << "\n";
    }
    if (temp2 == 1)
    {
      cout << "            floor is: " << floor << "\n";
    }
    else
    {
      cout << "            floor is: " << -1 << "\n";
    }
  }
  return 0;
}

/*
Output:

Enter the array size: 6
Enter the 6 elements: 1 3 5 7 8 9
Enter the start number and end number: 0  10
The given array for sorted: 1 3 5 7 8 9
Number 0 ceiling is: 1
            floor is: -1
Number 1 ceiling is: 1
            floor is: 1
Number 2 ceiling is: 3
            floor is: 1
Number 3 ceiling is: 3
            floor is: 3
Number 4 ceiling is: 5
            floor is: 3
Number 5 ceiling is: 5
            floor is: 5
Number 6 ceiling is: 7
            floor is: 5
Number 7 ceiling is: 7
            floor is: 7
Number 8 ceiling is: 8
            floor is: 8
Number 9 ceiling is: 9
            floor is: 9
Number 10 ceiling is: -1
            floor is: 9

*/
