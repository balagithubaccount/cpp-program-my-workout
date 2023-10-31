// Write a Cpp program to get the largest element of an array using the function.

#include <iostream>
using namespace std;

int size;
int large_num(int arr[])
{
   int i, big = arr[0], j = 0;
   for (i = 0; i < size; i++)
   {
      if (big < arr[i])
      {
         big = arr[i];
         j = i;
      }
   }
   return arr[j];
}
int main()
{
   cout << "Enter the array size: ";
   cin >> size;
   int arr[size];
   cout << "Enter the " << size << " elements: \n";
   for (int i = 0; i < size; i++)
   {
      cout << "Element-" << i << ": ";
      cin >> arr[i];
   }
   cout << "The Largest element is: " << large_num(arr) << endl;
   return 0;
}

/*
Sample Output:

Enter the array size: 5
Enter the 5 elements:
Element-0: 10789
Element-1: 2035
Element-2: 1899
Element-3: 1456
Element-4: 2013
The Largest element is: 10789

*/
