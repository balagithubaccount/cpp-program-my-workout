// Write a Cpp program to find four array elements whose sum is equal to given number.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k, l, giv_num, temp;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "The Given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\nEnter the number for sum of four elements in array: ";
  cin >> giv_num;

  temp = 0;
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      for (k = j + 1; k < size; k++)
      {
        for (l = k + 1; l < size; l++)
        {
          if (arr[i] + arr[j] + arr[k] + arr[l] == giv_num)
          {
            cout << "The Elements are: ";
            cout << arr[i] << " + " << arr[j] << " + " << arr[k] << " + " << arr[l] << " = " << giv_num << endl;
            temp = 1;
            goto end;
          }
        }
      }
    }
  }
end:
  if (temp == 0)
  {
    cout << "The given number " << giv_num << " does not exist sum of Elements of array.\n";
  }
  return 0;
}

/*
Output:

Enter the size of the array: 10
Enter the 10 elements: 3 7 1 9 15 14 6 2 5 7
The Given array is: 3 7 1 9 15 14 6 2 5 7
Enter the number for sum of four elements in array: 37
The Elements are: 3 + 15 + 14 + 5 = 37

*/
