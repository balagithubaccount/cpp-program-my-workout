// Write a Cpp program to find minumum number of swaps required to gather all elements less than or equal to k. (where, k is some whole number...)

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k, count = 0, temp;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size], copyarr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
    copyarr[i] = arr[i];
  }
  cout << "Enter the k value: ";
  cin >> k;
  cout << "\nThe Given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  for (i = 0; i < size; i++)
  {
    if (arr[i] > k)
    {
      for (j = i + 1; j < size; j++)
      {
        if (k >= arr[j])
        {
          temp = arr[j];
          arr[j] = arr[i];
          arr[i] = temp;
          break;
        }
      }
    }
  }
  cout << "\nModified array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  for (i = 0; i < size; i++)
  {
    if (arr[i] < copyarr[i] && k < copyarr[i])
    {
      count++;
    }
  }
  cout << "\nTotal minimum swap required is: " << count << endl;
  return 0;
}

/*
Output:

Enter the array size: 7
Enter the 7 elements: 2 7 9 5 8 7 4
Enter the k value: 7

The Given array is: 2 7 9 5 8 7 4
Modified array is: 2 7 5 7 4 9 8

Total minimum swap required is: 2

*/
