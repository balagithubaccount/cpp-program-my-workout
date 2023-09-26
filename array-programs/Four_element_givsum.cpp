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
Sample Output:

Enter the size of the array: 6
Enter the 6 elements: 10 20 30 40 1 2
The Given array is: 10 20 30 40 1 2
Enter the number for sum of four elements in array: 53
The Elements are: 10 + 40 + 1 + 2 = 53
*/
