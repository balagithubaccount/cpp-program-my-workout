// Write a Cpp program to concatenate two given arrays of integers...

#include <iostream>
using namespace std;

int main()
{
  int size1, size2, i, j;
  cout << "Enter the First array size: ";
  cin >> size1;
  cout << "Enter the second array size: ";
  cin >> size2;
  int first[size1], second[size2], merged[size1 + size2];
  cout << "Enter the " << size1 << " elements for 1st array: ";
  for (i = 0; i < size1; i++)
  {
    cin >> first[i];
  }
  cout << "\nEnter the " << size2 << " elements for 2nd array: ";
  for (i = 0; i < size2; i++)
  {
    cin >> second[i];
  }
  cout << "\nFirst array is: ";
  for (i = 0; i < size1; i++)
  {
    cout << first[i] << " ";
  }
  cout << "\nSecond array is: ";
  for (i = 0; i < size2; i++)
  {
    cout << second[i] << " ";
  }
  for (i = 0; i < size1 + size2; i++)
  {
    if (i < size1)
    {
      merged[i] = first[i];
    }
    else
    {
      merged[i] = second[i - size1];
    }
  }
  cout << "\nThe merged array is: ";
  for (i = 0; i < size1 + size2; i++)
  {
    cout << merged[i] << " ";
  }
  cout << "\n";
  return 0;
}

/*
Output:

Enter the First array size: 6
Enter the second array size: 6
Enter the 6 elements for 1st array: 10 20 30 40 50 60

Enter the 6 elements for 2nd array: 70 80 90 100 110 120

First array is: 10 20 30 40 50 60
Second array is: 70 80 90 100 110 120
The merged array is: 10 20 30 40 50 60 70 80 90 100 110 120
*/
