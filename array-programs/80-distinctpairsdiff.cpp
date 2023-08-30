// Write a Cpp program to count all distinct pairs for a specific difference...

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, diff1, diff2, count;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter the difference: ";
  cin >> diff1;
  diff2 = diff1 * (-1);
  cout << "The Given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\nThe distinct pairs for difference " << diff1 << " are: ";
  count = 0;
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if ((arr[i] - arr[j]) == diff1)
      {
        count++;
        cout << " [" << arr[i] << ", " << arr[j] << "]";
      }
      if ((arr[i] - arr[j]) == diff2)
      {
        count++;
        cout << " [" << arr[j] << ", " << arr[i] << "]";
      }
    }
  }
  cout << "\nNumber of distinct pairs for difference " << diff1 << " are: " << count << endl;
  return 0;
}

/*
Output:

Enter the size of the array: 8
Enter the 8 elements: 5 2 3 7 6 4 9 8
Enter the difference: 5
The Given array is: 5 2 3 7 6 4 9 8
The distinct pairs for difference 5 are:  [7, 2] [8, 3] [9, 4]
Number of distinct pairs for difference 5 are: 3
*/
