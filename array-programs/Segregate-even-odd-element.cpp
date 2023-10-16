// Write a Cpp program to segregate even and odd elements on an array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, temp, j;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "The Givern array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  for (i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 1)
    {
      for (j = i + 1; j < size; j++)
      {
        if (arr[j] % 2 == 0)
        {
          temp = arr[j];
          arr[j] = arr[i];
          arr[i] = temp;
          break;
        }
      }
    }
  }
  cout << "\nThe array after segregation is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

/*
Output:

Enter the size of the array: 9
Enter the 9 elements: 17 42 19 7 27 24 30 54 73
The Givern array is: 17 42 19 7 27 24 30 54 73
The array after segregation is: 42 24 30 54 27 17 19 7 73
 */
