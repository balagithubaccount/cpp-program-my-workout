// Write a Cpp program to count the number of triangles can be formed from a given array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k, count = 0;
  cout << "Enter the number of elements in array: ";
  cin >> size;
  int array[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> array[i];
  }
  cout << "The given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  cout << "\nNumber of possible triangles can be formed from the array is: ";
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      for (k = j + 1; k < size; k++)
      {
        if (array[i] + array[j] > array[k] && array[i] + array[k] > array[j] && array[j] + array[k] > array[i])
        {
          count++;
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}
/*
Output:

Enter the number of elements in array: 5
Enter the 5 elements: 6 18 9 7 10
The given array is: 6 18 9 7 10
Number of possible triangles can be formed from the array is: 5
*/
