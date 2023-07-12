// Write a C program to find the second largest element in an array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, temp, big_num;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size];
  cout << "Enter the Elements: \n";
  for (i = 0; i < size; i++)
  {
    cout << "Element " << i << ": ";
    cin >> arr[i];
  }
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] < arr[j])
      {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
  big_num = arr[0];
  for (i = 1; i < size; i++)
  {
    if (big_num > arr[i])
    {
      cout << "Second Largest element is: " << arr[i] << "\n";
      break;
    }
  }
  return 0;
}

/*
Sample Output:

Enter the array size: 10
Enter the Elements:
Element 0: 3
Element 1: 12
Element 2: 32
Element 3: 11
Element 4: 55
Element 5: 33
Element 6: 21
Element 7: 90
Element 8: 22
Element 9: 33
Second Largest element is: 55

*/