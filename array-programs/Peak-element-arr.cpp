// Write a Cpp program to find the index of first peak element in a given array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, p = 0, temp = 0;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size], peak[size];
  cout << "Enter the " << size << " Elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "The Given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  for (i = 0; i < size; i++)
  {
    if (i > 0 && i < size - 1 && arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
    {
      peak[p] = i;
      p++;
      temp = 1;
    }
    if (i == 0 && arr[i] > arr[i + 1])
    {
      peak[p] = i;
      p++;
      temp = 1;
    }
    if (i == (size - 1) && arr[i - 1] < arr[i])
    {
      peak[p] = i;
      p++;
      temp = 1;
    }
  }
  if (temp == 0)
  {
    goto end;
  }
  cout << "\nThe Index of first peak element in the array is: " << peak[0] << endl;
  cout << "The Indeces of the peak elements in the arrays are: ";
  for (i = 0; i < p; i++)
  {
    cout << peak[i] << " ";
  }
  cout << "\nThe Peak Elements are: ";
  for (i = 0; i < p; i++)
  {
    cout << arr[peak[i]] << " ";
  }
  cout << "\n";
end:
  if (temp == 0)
    cout << "\nThere are not found peak elements in an array.\n";
  return 0;
}

/*
Output:

Enter the array size: 9
Enter the 9 Elements: 5 12 13 20 16 19 11 7 25
The Given array is: 5 12 13 20 16 19 11 7 25

The Index of first peak element in the array is: 3
The Indeces of the peak elements in the arrays are: 3 5 8
The Peak Elements are: 20 19 25
*/
