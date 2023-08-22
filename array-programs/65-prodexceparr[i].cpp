// Write a Cpp program to find the product of an array such that product is equal to the product of all the elements of arr[] except arr[i].

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, prod;
  cout << "Enter the array size: ";
  cin >> size;
  int array[size], result[size];
  cout << "Enter the " << size << " elements : ";
  for (i = 0; i < size; i++)
  {
    cin >> array[i];
  }
  for (i = 0; i < size; i++)
  {
    prod = 1;
    for (j = 0; j < size; j++)
    {
      if (i != j)
      {
        prod = prod * array[j];
      }
    }
    result[i] = prod;
  }
  cout << "The given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  cout << "\nThe product array is: ";
  for (i = 0; i < size; i++)
  {
    cout << result[i] << " ";
  }
  cout << "\n";
}

/*
Output:

Enter the array size: 6
Enter the 6 elements : 1 2 3 4 5 6
The given array is: 1 2 3 4 5 6
The product array is: 720 360 240 180 144 120
*/
