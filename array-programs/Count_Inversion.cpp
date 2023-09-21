// Write a Cpp program to count the number of inversion in a given array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, count = 0;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "The given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\nThe Inversions are: ";
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] > arr[j])
      {
        cout << "(" << arr[i] << ", " << arr[j] << ") ";
        count++;
      }
    }
  }
  cout << "\nThe total number of inversion cab be formed from the array is: " << count << endl;
  return 0;
}
/*
Output :

Enter the size of the array: 5
Enter the 5 elements: 1 9 6 4 5
The given array is: 1 9 6 4 5
The Inversions are: (9, 6) (9, 4) (9, 5) (6, 4) (6, 5)
The total number of inversion cab be formed from the array is: 5                                                                                                              The total number of inversion cab be formed from the array is : 5
*/